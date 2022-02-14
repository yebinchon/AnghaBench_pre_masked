
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vbase; scalar_t__ binfo; int rtti_binfo; scalar_t__ ctor_vtbl_p; } ;
typedef TYPE_1__ vtbl_init_data ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_16 (tree VAR_0, vtbl_init_data* VAR_1)
{

  if (FUNC_11 (2))
    {
      tree VAR_2;



      for (VAR_2 = FUNC_10 (FUNC_1 (VAR_0));
    VAR_2;
    VAR_2 = FUNC_8 (VAR_2))
 if (FUNC_6 (VAR_2))
   FUNC_12 (VAR_2, VAR_0, VAR_1);
    }
  else
    {
      tree VAR_3;
      tree VAR_4;
      tree VAR_5;


      tree VAR_6;




      VAR_6 = VAR_0;
      while (FUNC_0 (VAR_6))
 {
   tree VAR_7;







   if (FUNC_3 (VAR_6))
     {
       FUNC_13 (VAR_6 == VAR_1->vbase);
       VAR_6 = VAR_1->binfo;
       break;
     }

   VAR_7 = FUNC_0 (VAR_6);
   if (FUNC_14 (VAR_7) != VAR_6)
     break;
   VAR_6 = VAR_7;
 }

      if (VAR_1->ctor_vtbl_p)


 VAR_6
   = FUNC_15 (VAR_6, VAR_1->rtti_binfo);

      for (VAR_4 = FUNC_2 (VAR_0),
      VAR_3 = FUNC_2 (VAR_6),
      VAR_5 = FUNC_2 (FUNC_9 (FUNC_1 (VAR_0)));
    VAR_4;
    VAR_4 = FUNC_8 (VAR_4),
      VAR_3 = FUNC_8 (VAR_3),
      VAR_5 = FUNC_8 (VAR_5))
 {
   tree VAR_8;



   VAR_8 = FUNC_4 (VAR_5);




   if (!FUNC_7 (FUNC_1 (VAR_0), FUNC_5 (VAR_8)))
     continue;

   FUNC_12 (VAR_8, VAR_0, VAR_1);
 }
    }
}
