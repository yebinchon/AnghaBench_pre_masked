
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_temp {struct parser_temp* data; struct parser_temp* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parser_temp*) ;
 struct parser_temp* VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct parser_temp *VAR_3;

 VAR_0;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_3->next;
  FUNC_0(VAR_3->data);
  FUNC_0(VAR_3);
 }
 VAR_1;
}
