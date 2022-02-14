
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* variable ;
typedef scalar_t__ htab_t ;
typedef int hashval_t ;
struct TYPE_4__ {scalar_t__ n_var_parts; int refcount; int decl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void**) ;
 void** FUNC_3 (scalar_t__,int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5 (variable VAR_5, htab_t VAR_6)
{
  hashval_t VAR_7 = FUNC_0 (VAR_5->decl);

  if (VAR_3)
    {
      variable *VAR_8;

      VAR_8 = (variable *) FUNC_3 (VAR_2,
          VAR_5->decl, VAR_7, VAR_0);

      if (VAR_6 && VAR_5->n_var_parts == 0)
 {
   variable VAR_9;
   void **VAR_10;

   VAR_9 = FUNC_4 (VAR_4);
   VAR_9->decl = VAR_5->decl;
   VAR_9->refcount = 1;
   VAR_9->n_var_parts = 0;
   *VAR_8 = VAR_9;

   VAR_10 = FUNC_3 (VAR_6, VAR_5->decl, VAR_7,
       VAR_1);
   if (VAR_10)
     FUNC_2 (VAR_6, VAR_10);
 }
      else
 {
   *VAR_8 = VAR_5;
 }
    }
  else
    {
      FUNC_1 (VAR_6);
      if (VAR_5->n_var_parts == 0)
 {
   void **VAR_11 = FUNC_3 (VAR_6, VAR_5->decl, VAR_7,
        VAR_1);
   if (VAR_11)
     FUNC_2 (VAR_6, VAR_11);
 }
    }
}
