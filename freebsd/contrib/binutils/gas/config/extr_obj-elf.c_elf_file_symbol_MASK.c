
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_16__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int) ;
 TYPE_12__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__**,int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (char const*,int ,int ,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__**,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_4 ;

void
FUNC_7 (const char *VAR_5, int VAR_6)
{
  if (!VAR_6
      || VAR_3 == ((void*)0)
      || VAR_3->bsym == ((void*)0)
      || (VAR_3->bsym->flags & VAR_0) == 0)
    {
      symbolS *VAR_7;

      VAR_7 = FUNC_3 (VAR_5, VAR_1, 0, ((void*)0));
      FUNC_5 (VAR_7, &VAR_4);
      FUNC_1 (VAR_7)->flags |= VAR_0;

      if (VAR_3 != VAR_7)
 {
   FUNC_4 (VAR_7, &VAR_3, &VAR_2);
   FUNC_2 (VAR_7, VAR_3, &VAR_3, &VAR_2);



 }
    }




}
