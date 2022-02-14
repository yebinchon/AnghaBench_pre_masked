
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {struct message* next; int msg; } ;


 struct message* VAR_0 ;
 int FUNC_0 (struct message*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct message *VAR_1 = VAR_0;

 while (VAR_1 != ((void*)0)) {

  if (FUNC_1(VAR_1->msg) > sizeof("\"\""))
   FUNC_0(VAR_1);
  VAR_1 = VAR_1->next;
 }
}
