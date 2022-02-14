
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct config_strbytelist {char* str; size_t str2len; struct config_strbytelist* next; int * str2; } ;


 scalar_t__ FUNC_0 (int,int) ;

int
FUNC_1(struct config_strbytelist** VAR_0, char* VAR_1,
 uint8_t* VAR_2, size_t VAR_3)
{
 struct config_strbytelist* VAR_4;
 if(!VAR_1 || !VAR_2 || !VAR_0)
  return 0;
 VAR_4 = (struct config_strbytelist*)FUNC_0(1, sizeof(*VAR_4));
 if(!VAR_4)
  return 0;
 VAR_4->str = VAR_1;
 VAR_4->str2 = VAR_2;
 VAR_4->str2len = VAR_3;
 VAR_4->next = *VAR_0;
 *VAR_0 = VAR_4;
 return 1;
}
