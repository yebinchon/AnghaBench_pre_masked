
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tomoyo_io_buffer {int read_bit; int read_avail; } ;
struct tomoyo_double_path_acl_record {int perm; TYPE_2__* filename2; TYPE_1__* filename1; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (struct tomoyo_io_buffer*,char*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(struct tomoyo_io_buffer *VAR_1,
      struct tomoyo_double_path_acl_record *
      VAR_2)
{
 int VAR_3;
 const char *VAR_4 = "";
 const char *VAR_5 = "";
 const char *VAR_6;
 const char *VAR_7;
 const u8 VAR_8 = VAR_2->perm;
 u8 VAR_9;

 VAR_6 = VAR_2->filename1->name;
 VAR_7 = VAR_2->filename2->name;
 for (VAR_9 = VAR_1->read_bit; VAR_9 < VAR_0;
      VAR_9++) {
  const char *VAR_10;
  if (!(VAR_8 & (1 << VAR_9)))
   continue;
  VAR_10 = FUNC_0(VAR_9);
  VAR_3 = VAR_1->read_avail;
  if (!FUNC_1(VAR_1, "allow_%s %s%s %s%s\n", VAR_10,
          VAR_4, VAR_6, VAR_5, VAR_7))
   goto out;
 }
 VAR_1->read_bit = 0;
 return 1;
 out:
 VAR_1->read_bit = VAR_9;
 VAR_1->read_avail = VAR_3;
 return 0;
}
