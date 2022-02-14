
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_test_acl_t {int name; int qual; int tag; int permset; int type; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;

void
FUNC_4(struct archive_entry *VAR_1,
    struct archive_test_acl_t *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_3("type=%#010x, permset=%#010x, tag=%d, qual=%d name=%s",
      VAR_2[VAR_4].type, VAR_2[VAR_4].permset, VAR_2[VAR_4].tag,
      VAR_2[VAR_4].qual, VAR_2[VAR_4].name);
  FUNC_2(VAR_0,
      FUNC_0(VAR_1,
   VAR_2[VAR_4].type, VAR_2[VAR_4].permset, VAR_2[VAR_4].tag,
   VAR_2[VAR_4].qual, VAR_2[VAR_4].name));
 }
}
