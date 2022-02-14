
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {char* next; char* large_list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct regional*) ;

void
FUNC_2(struct regional *VAR_0)
{
 char* VAR_1 = VAR_0->next, *VAR_2;
 while(VAR_1) {
  VAR_2 = *(char**)VAR_1;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_1 = VAR_0->large_list;
 while(VAR_1) {
  VAR_2 = *(char**)VAR_1;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(VAR_0);
}
