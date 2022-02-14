
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_set {char* const* tagname; int num_tags; } ;
struct config_strbytelist {struct config_strbytelist* str2; struct config_strbytelist* str; struct config_strbytelist* next; int str2len; } ;
struct config_str2list {struct config_str2list* str2; struct config_str2list* str; struct config_str2list* next; int str2len; } ;


 int FUNC_0 (struct config_strbytelist*) ;
 int FUNC_1 (struct config_strbytelist*) ;
 int FUNC_2 (struct config_strbytelist*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct respip_set*,struct config_strbytelist*,struct config_strbytelist*) ;
 int FUNC_5 (struct respip_set*,struct config_strbytelist*,struct config_strbytelist*) ;
 int FUNC_6 (struct respip_set*,struct config_strbytelist*,struct config_strbytelist*,int ) ;

__attribute__((used)) static int
FUNC_7(struct respip_set* VAR_0, char* const* VAR_1, int VAR_2,
 struct config_strbytelist* VAR_3,
 struct config_str2list* VAR_4,
 struct config_str2list* VAR_5)
{
 struct config_strbytelist* VAR_6;
 struct config_str2list* VAR_7;
 struct config_str2list* VAR_8;

 VAR_0->tagname = VAR_1;
 VAR_0->num_tags = VAR_2;

 VAR_6 = VAR_3;
 while(VAR_6) {
  struct config_strbytelist* VAR_9 = VAR_6->next;

  FUNC_3(VAR_6->str && VAR_6->str2);
  if(!FUNC_6(VAR_0, VAR_6->str, VAR_6->str2, VAR_6->str2len)) {
   FUNC_0(VAR_6);
   return 0;
  }
  FUNC_2(VAR_6->str);
  FUNC_2(VAR_6->str2);
  FUNC_2(VAR_6);
  VAR_6 = VAR_9;
 }

 VAR_7 = VAR_4;
 while(VAR_7) {
  struct config_str2list* VAR_10 = VAR_7->next;
  FUNC_3(VAR_7->str && VAR_7->str2);
  if(!FUNC_4(VAR_0, VAR_7->str, VAR_7->str2)) {
   FUNC_1(VAR_7);
   return 0;
  }
  FUNC_2(VAR_7->str);
  FUNC_2(VAR_7->str2);
  FUNC_2(VAR_7);
  VAR_7 = VAR_10;
 }

 VAR_8 = VAR_5;
 while(VAR_8) {
  struct config_str2list* VAR_11 = VAR_8->next;
  FUNC_3(VAR_8->str && VAR_8->str2);
  if(!FUNC_5(VAR_0, VAR_8->str, VAR_8->str2)) {
   FUNC_1(VAR_8);
   return 0;
  }
  FUNC_2(VAR_8->str);
  FUNC_2(VAR_8->str2);
  FUNC_2(VAR_8);
  VAR_8 = VAR_11;
 }

 return 1;
}
