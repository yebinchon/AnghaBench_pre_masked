
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tomoyo_single_path_acl_record {int perm; TYPE_1__* filename; } ;
struct tomoyo_io_buffer {int read_bit; int read_avail; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tomoyo_io_buffer*,char*,char const*,char const*,char const*) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct tomoyo_io_buffer *VAR_4,
      struct tomoyo_single_path_acl_record *
      VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 const char *VAR_8 = "";
 const char *VAR_9;
 const u16 VAR_10 = VAR_5->perm;

 VAR_9 = VAR_5->filename->name;
 for (VAR_7 = VAR_4->read_bit; VAR_7 < VAR_0;
      VAR_7++) {
  const char *VAR_11;
  if (!(VAR_10 & (1 << VAR_7)))
   continue;

  if ((VAR_7 == VAR_1 ||
       VAR_7 == VAR_3)
      && (VAR_10 & (1 << VAR_2)))
   continue;
  VAR_11 = FUNC_1(VAR_7);
  VAR_6 = VAR_4->read_avail;
  if (!FUNC_0(VAR_4, "allow_%s %s%s\n", VAR_11,
          VAR_8, VAR_9))
   goto out;
 }
 VAR_4->read_bit = 0;
 return 1;
 out:
 VAR_4->read_bit = VAR_7;
 VAR_4->read_avail = VAR_6;
 return 0;
}
