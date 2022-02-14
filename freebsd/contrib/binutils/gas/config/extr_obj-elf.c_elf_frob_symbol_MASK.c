
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct elf_obj_sy {int * versioned_name; TYPE_4__* size; } ;
struct TYPE_7__ {int X_op; scalar_t__ X_add_number; int * X_add_symbol; int * X_op_symbol; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ fr_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,...) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,char*,size_t) ;
 char* FUNC_22 (int *,char) ;
 int FUNC_23 (char*) ;
 int * FUNC_24 (int ,char*) ;
 int * FUNC_25 (int *) ;
 TYPE_3__* FUNC_26 (int *) ;
 TYPE_1__* FUNC_27 (int *) ;
 struct elf_obj_sy* FUNC_28 (int *) ;
 int FUNC_29 (int *,TYPE_1__*) ;

void
FUNC_30 (symbolS *VAR_6, int *VAR_7)
{
  struct elf_obj_sy *VAR_8;






  VAR_8 = FUNC_28 (VAR_6);

  if (VAR_8->size != ((void*)0))
    {
      switch (VAR_8->size->X_op)
 {
 case 128:
   FUNC_12 (VAR_6,
        (FUNC_3 (VAR_8->size->X_add_symbol)
         + VAR_8->size->X_add_number
         - FUNC_3 (VAR_8->size->X_op_symbol)));
   break;
 case 129:
   FUNC_12 (VAR_6,
        (FUNC_3 (VAR_8->size->X_add_symbol)
         + VAR_8->size->X_add_number));
   break;
 default:
   FUNC_16 (FUNC_15(".size expression too complicated to fix up"));
   break;
 }
      FUNC_19 (VAR_8->size);
      VAR_8->size = ((void*)0);
    }

  if (VAR_8->versioned_name != ((void*)0))
    {
      char *VAR_9;

      VAR_9 = FUNC_22 (VAR_8->versioned_name, VAR_3);
      FUNC_20 (VAR_9 != ((void*)0));
      if (! FUNC_5 (VAR_6))
 {



   if (VAR_9[1] == VAR_3)
     {
       FUNC_16 (FUNC_15("invalid attempt to declare external version name as default in symbol `%s'"),
        VAR_8->versioned_name);
       *VAR_7 = VAR_5;
     }
   FUNC_9 (VAR_6, VAR_8->versioned_name);
 }
      else
 {
   if (VAR_9[1] == VAR_3 && VAR_9[2] == VAR_3)
     {
       size_t VAR_10;



       VAR_10 = FUNC_23 (&VAR_9[3]) + 1;
       FUNC_21 (&VAR_9[2], &VAR_9[3], VAR_10);
       FUNC_9 (VAR_6, VAR_8->versioned_name);
     }
   else
     {
       symbolS *VAR_11;
       VAR_11 = FUNC_25 (VAR_8->versioned_name);



       FUNC_11 (VAR_11, FUNC_2 (VAR_6));



       FUNC_13 (VAR_11,
      (FUNC_3 (VAR_6)
       - FUNC_27 (VAR_6)->fr_address));

       FUNC_29 (VAR_11, FUNC_27 (VAR_6));


       FUNC_17 (VAR_11, VAR_6);

       FUNC_10 (VAR_11, FUNC_1 (VAR_6));

       if (FUNC_7 (VAR_6))
  FUNC_14 (VAR_11);

       if (FUNC_6 (VAR_6))
  FUNC_8 (VAR_11);
     }
 }
    }


  if (FUNC_7 (VAR_6))
    {
      if (FUNC_4 (VAR_6))
 FUNC_16 (FUNC_15("symbol `%s' can not be both weak and common"),
  FUNC_0 (VAR_6));
    }
}
