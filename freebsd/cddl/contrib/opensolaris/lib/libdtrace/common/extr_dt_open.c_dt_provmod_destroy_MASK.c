
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* dp_name; struct TYPE_4__* dp_next; } ;
typedef TYPE_1__ dt_provmod_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(dt_provmod_t **VAR_0)
{
 dt_provmod_t *VAR_1, *VAR_2;

 for (VAR_2 = *VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_1) {
  VAR_1 = VAR_2->dp_next;
  FUNC_0(VAR_2->dp_name);
  FUNC_0(VAR_2);
 }

 *VAR_0 = ((void*)0);
}
