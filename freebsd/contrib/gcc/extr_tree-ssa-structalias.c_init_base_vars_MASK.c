
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct constraint_expr {int var; scalar_t__ offset; void* type; } ;
struct TYPE_11__ {int is_artificial_var; int is_special_var; int * next; scalar_t__ offset; int fullsize; int size; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_3 (struct constraint_expr,struct constraint_expr) ;
 TYPE_1__* FUNC_4 (int ,int,char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 TYPE_1__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  struct constraint_expr VAR_24, VAR_25;



  VAR_13 = FUNC_1 (VAR_23, "NULL");
  VAR_19 = FUNC_4 (VAR_13, 0, "NULL");
  FUNC_2 (VAR_13, VAR_19);
  VAR_19->is_artificial_var = 1;
  VAR_19->offset = 0;
  VAR_19->size = ~0;
  VAR_19->fullsize = ~0;
  VAR_19->is_special_var = 1;
  VAR_12 = 0;
  FUNC_0 (VAR_21, VAR_9, VAR_22, VAR_19);



  VAR_4 = FUNC_1 (VAR_23, "ANYTHING");
  VAR_16 = FUNC_4 (VAR_4, 1, "ANYTHING");
  FUNC_2 (VAR_4, VAR_16);
  VAR_16->is_artificial_var = 1;
  VAR_16->size = ~0;
  VAR_16->offset = 0;
  VAR_16->next = ((void*)0);
  VAR_16->fullsize = ~0;
  VAR_16->is_special_var = 1;
  VAR_3 = 1;




  FUNC_0 (VAR_21, VAR_9, VAR_22, VAR_16);
  VAR_24.type = VAR_2;
  VAR_24.var = VAR_3;
  VAR_24.offset = 0;
  VAR_25.type = VAR_0;
  VAR_25.var = VAR_3;
  VAR_25.offset = 0;




  FUNC_0 (VAR_5, VAR_9, VAR_6, FUNC_3 (VAR_24, VAR_25));



  VAR_15 = FUNC_1 (VAR_23, "READONLY");
  VAR_20 = FUNC_4 (VAR_15, 2, "READONLY");
  VAR_20->is_artificial_var = 1;
  VAR_20->offset = 0;
  VAR_20->size = ~0;
  VAR_20->fullsize = ~0;
  VAR_20->next = ((void*)0);
  VAR_20->is_special_var = 1;
  FUNC_2 (VAR_15, VAR_20);
  VAR_14 = 2;
  FUNC_0 (VAR_21, VAR_9, VAR_22, VAR_20);





  VAR_24.type = VAR_2;
  VAR_24.var = VAR_14;
  VAR_24.offset = 0;
  VAR_25.type = VAR_0;
  VAR_25.var = VAR_3;
  VAR_25.offset = 0;

  FUNC_5 (FUNC_3 (VAR_24, VAR_25));



  VAR_11 = FUNC_1 (VAR_23, "INTEGER");
  VAR_18 = FUNC_4 (VAR_11, 3, "INTEGER");
  FUNC_2 (VAR_11, VAR_18);
  VAR_18->is_artificial_var = 1;
  VAR_18->size = ~0;
  VAR_18->fullsize = ~0;
  VAR_18->offset = 0;
  VAR_18->next = ((void*)0);
  VAR_18->is_special_var = 1;
  VAR_10 = 3;
  FUNC_0 (VAR_21, VAR_9, VAR_22, VAR_18);



  VAR_24.type = VAR_2;
  VAR_24.var = VAR_10;
  VAR_24.offset = 0;
  VAR_25.type = VAR_0;
  VAR_25.var = VAR_3;
  VAR_25.offset = 0;
  FUNC_5 (FUNC_3 (VAR_24, VAR_25));



  VAR_8 = FUNC_1 (VAR_23, "ESCAPED_VARS");
  VAR_17 = FUNC_4 (VAR_8, 4, "ESCAPED_VARS");
  FUNC_2 (VAR_8, VAR_17);
  VAR_17->is_artificial_var = 1;
  VAR_17->size = ~0;
  VAR_17->fullsize = ~0;
  VAR_17->offset = 0;
  VAR_17->next = ((void*)0);
  VAR_7 = 4;
  FUNC_0 (VAR_21, VAR_9, VAR_22, VAR_17);


  VAR_24.type = VAR_2;
  VAR_24.var = VAR_7;
  VAR_24.offset = 0;
  VAR_25.type = VAR_1;
  VAR_25.var = VAR_7;
  VAR_25.offset = 0;
  FUNC_5 (FUNC_3 (VAR_24, VAR_25));

}
