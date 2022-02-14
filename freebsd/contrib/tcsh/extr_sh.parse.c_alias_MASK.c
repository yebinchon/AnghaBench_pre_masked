
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct wordent*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct wordent *VAR_4)
{
    int VAR_5;

    VAR_5 = VAR_0;
    VAR_3 = VAR_2;
    do {
 if (--VAR_5 == 0)
     FUNC_1(VAR_1);
    } while (FUNC_0(VAR_4->next, VAR_4) != 0);
}
