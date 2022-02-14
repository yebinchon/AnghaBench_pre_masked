
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct config_file {int num_tags; } ;
struct acl_list {int region; } ;
struct acl_addr {size_t tag_actions_size; scalar_t__* tag_actions; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 struct acl_addr* FUNC_0 (struct acl_list*,char const*) ;
 int FUNC_1 (struct config_file*,char const*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct acl_list* VAR_0, struct config_file* VAR_1,
 const char* VAR_2, const char* VAR_3, const char* VAR_4)
{
 struct acl_addr* VAR_5;
 int VAR_6;
 enum localzone_type VAR_7;
 if(!(VAR_5=FUNC_0(VAR_0, VAR_2)))
  return 0;

 if(!VAR_5->tag_actions) {
  VAR_5->tag_actions = (uint8_t*)FUNC_4(VAR_0->region,
   sizeof(*VAR_5->tag_actions)*VAR_1->num_tags);
  if(!VAR_5->tag_actions) {
   FUNC_3("out of memory");
   return 0;
  }
  VAR_5->tag_actions_size = (size_t)VAR_1->num_tags;
 }

 if((VAR_6=FUNC_1(VAR_1, VAR_3)) == -1) {
  FUNC_3("cannot parse tag (define-tag it): %s %s", VAR_2, VAR_3);
  return 0;
 }
 if((size_t)VAR_6 >= VAR_5->tag_actions_size) {
  FUNC_3("tagid too large for array %s %s", VAR_2, VAR_3);
  return 0;
 }
 if(!FUNC_2(VAR_4, &VAR_7)) {
  FUNC_3("cannot parse access control action type: %s %s %s",
   VAR_2, VAR_3, VAR_4);
  return 0;
 }
 VAR_5->tag_actions[VAR_6] = (uint8_t)VAR_7;
 return 1;
}
