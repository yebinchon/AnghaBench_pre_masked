
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int s; int * node; } ;
typedef TYPE_1__ strnodelist ;
typedef int filenode ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(filenode *VAR_1, char *VAR_2)
{
 strnodelist *VAR_3;

 VAR_3 = FUNC_0(sizeof *VAR_3 + FUNC_2(VAR_2));
 VAR_3->node = VAR_1;
 FUNC_1(VAR_3->s, VAR_2);
 VAR_3->next = VAR_0;
 VAR_0 = VAR_3;
}
