
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dt_idhash_t ;
struct TYPE_6__ {int di_kind; int di_vers; int di_attr; int di_name; } ;
typedef TYPE_1__ dt_ident_t ;
struct TYPE_7__ {int * pcb_pragmas; } ;




 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(dt_idhash_t *VAR_1, dt_ident_t *VAR_2)
{
 dt_idhash_t *VAR_3;
 dt_ident_t *VAR_4;

 if ((VAR_3 = VAR_0->pcb_pragmas) == ((void*)0))
  return;

 while ((VAR_4 = FUNC_1(VAR_3, VAR_2->di_name)) != ((void*)0)) {
  switch (VAR_4->di_kind) {
  case 129:
   VAR_2->di_attr = VAR_4->di_attr;
   break;
  case 128:
   VAR_2->di_vers = VAR_4->di_vers;
   break;
  }
  FUNC_0(VAR_3, VAR_4);
 }
}
