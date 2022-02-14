
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {int dummy; } ;
struct config_file {int num_tags; } ;
struct acl_list {int region; } ;
struct acl_addr {size_t tag_datas_size; struct config_strlist** tag_datas; } ;


 struct acl_addr* FUNC_0 (struct acl_list*,char const*) ;
 int FUNC_1 (int ,struct config_strlist**,char*) ;
 int FUNC_2 (char const*,struct config_strlist*) ;
 int FUNC_3 (struct config_file*,char const*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,int) ;
 char* FUNC_6 (int ,char const*) ;

__attribute__((used)) static int
FUNC_7(struct acl_list* VAR_0, struct config_file* VAR_1,
 const char* VAR_2, const char* VAR_3, const char* VAR_4)
{
 struct acl_addr* VAR_5;
 int VAR_6;
 char* VAR_7;
 if(!(VAR_5=FUNC_0(VAR_0, VAR_2)))
  return 0;

 if(!VAR_5->tag_datas) {
  VAR_5->tag_datas = (struct config_strlist**)FUNC_5(
   VAR_0->region, sizeof(*VAR_5->tag_datas)*VAR_1->num_tags);
  if(!VAR_5->tag_datas) {
   FUNC_4("out of memory");
   return 0;
  }
  VAR_5->tag_datas_size = (size_t)VAR_1->num_tags;
 }

 if((VAR_6=FUNC_3(VAR_1, VAR_3)) == -1) {
  FUNC_4("cannot parse tag (define-tag it): %s %s", VAR_2, VAR_3);
  return 0;
 }
 if((size_t)VAR_6 >= VAR_5->tag_datas_size) {
  FUNC_4("tagid too large for array %s %s", VAR_2, VAR_3);
  return 0;
 }


 if(!FUNC_2(VAR_4, VAR_5->tag_datas[VAR_6])) {
  FUNC_4("cannot parse access-control-tag data: %s %s '%s'",
   VAR_2, VAR_3, VAR_4);
  return 0;
 }

 VAR_7 = FUNC_6(VAR_0->region, VAR_4);
 if(!VAR_7) {
  FUNC_4("out of memory");
  return 0;
 }
 if(!FUNC_1(VAR_0->region,
  &(VAR_5->tag_datas[VAR_6]), VAR_7)) {
  FUNC_4("out of memory");
  return 0;
 }
 return 1;
}
