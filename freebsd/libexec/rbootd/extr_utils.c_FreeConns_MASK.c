
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ RMPCONN ;


 int FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
 RMPCONN *VAR_2;

 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 if (VAR_0 != ((void*)0)) {
  FUNC_1((char *)VAR_0);
  VAR_0 = ((void*)0);
 }
}
