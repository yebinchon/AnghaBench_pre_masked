
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_test_acl_t {int name; int qual; int tag; int permset; int type; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int,char*,char*,int ,int ,int ,int ,int ) ;

int
FUNC_5(const char *VAR_0, int VAR_1, struct archive_entry *VAR_2,
    struct archive_test_acl_t *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_0, VAR_1);

 VAR_7 = 0;
 FUNC_1(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_2,
      VAR_3[VAR_5].type, VAR_3[VAR_5].permset, VAR_3[VAR_5].tag,
      VAR_3[VAR_5].qual, VAR_3[VAR_5].name);
  if (VAR_6 != 0) {
   VAR_7 = 1;
   FUNC_4(VAR_0, VAR_1, "type=%#010x, ",
       "permset=%#010x, tag=%d, qual=%d name=%s",
       VAR_3[VAR_5].type, VAR_3[VAR_5].permset, VAR_3[VAR_5].tag,
       VAR_3[VAR_5].qual, VAR_3[VAR_5].name);
   FUNC_3(((void*)0));
  }
 }

 return (VAR_7);
}
