
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strhdr {struct strhdr* next; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*) ;
 struct strhdr* VAR_1 ;

void
FUNC_1(char *VAR_2)
{
 struct strhdr *VAR_3, *VAR_4;

 VAR_3 = &VAR_1[FUNC_0(VAR_2) / VAR_0];
 VAR_4 = (struct strhdr *)VAR_2;
 VAR_4->next = VAR_3->next;
 VAR_3->next = VAR_4;
}
