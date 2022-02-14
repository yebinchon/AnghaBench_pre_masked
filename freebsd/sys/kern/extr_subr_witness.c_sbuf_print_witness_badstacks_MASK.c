
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct witness_lock_order_data {scalar_t__ w_reversed; int wlod_stack; TYPE_1__* w_class; int w_name; } ;
struct witness {scalar_t__ w_reversed; int wlod_stack; TYPE_1__* w_class; int w_name; } ;
struct sbuf {int dummy; } ;
struct TYPE_4__ {int wloh_count; } ;
struct TYPE_3__ {int lc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct witness_lock_order_data*,struct witness_lock_order_data*) ;
 int FUNC_1 (struct witness_lock_order_data*,int ) ;
 struct witness_lock_order_data* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*,...) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct sbuf*,int *) ;
 int FUNC_9 (int *) ;
 struct witness_lock_order_data* VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int** VAR_9 ;
 struct witness_lock_order_data* FUNC_10 (struct witness_lock_order_data*,struct witness_lock_order_data*) ;

__attribute__((used)) static void
FUNC_11(struct sbuf *VAR_10, size_t *VAR_11)
{
 struct witness_lock_order_data *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 struct witness *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_17 = ((void*)0);


 VAR_16 = FUNC_2(sizeof(struct witness), VAR_0, VAR_1 | VAR_2);
 VAR_17 = FUNC_2(sizeof(struct witness), VAR_0, VAR_1 | VAR_2);
 VAR_14 = FUNC_2(sizeof(struct witness_lock_order_data), VAR_0,
     VAR_1 | VAR_2);
 VAR_15 = FUNC_2(sizeof(struct witness_lock_order_data), VAR_0,
     VAR_1 | VAR_2);
 FUNC_9(&VAR_14->wlod_stack);
 FUNC_9(&VAR_15->wlod_stack);

restart:
 FUNC_3(&VAR_8);
 VAR_20 = VAR_5;
 FUNC_4(&VAR_8);
 FUNC_6(VAR_10, "Number of known direct relationships is %d\n",
     VAR_6.wloh_count);
 for (VAR_21 = 1; VAR_21 < VAR_7; VAR_21++) {
  FUNC_3(&VAR_8);
  if (VAR_20 != VAR_5) {
   FUNC_4(&VAR_8);


   *VAR_11 = 0;
   FUNC_5(VAR_10);
   goto restart;
  }

  VAR_18 = &VAR_4[VAR_21];
  if (VAR_18->w_reversed == 0) {
   FUNC_4(&VAR_8);
   continue;
  }


  *VAR_16 = *VAR_18;
  FUNC_4(&VAR_8);

  if (VAR_16->w_reversed == 0)
   continue;
  for (VAR_22 = 1; VAR_22 < VAR_7; VAR_22++) {
   if ((VAR_9[VAR_21][VAR_22] & VAR_3) == 0 || VAR_21 > VAR_22)
    continue;

   FUNC_3(&VAR_8);
   if (VAR_20 != VAR_5) {
    FUNC_4(&VAR_8);


    *VAR_11 = 0;
    FUNC_5(VAR_10);
    goto restart;
   }

   VAR_19 = &VAR_4[VAR_22];
   VAR_12 = FUNC_10(VAR_18, VAR_19);
   VAR_13 = FUNC_10(VAR_19, VAR_18);





   *VAR_17 = *VAR_19;

   if (VAR_12) {
    FUNC_9(&VAR_14->wlod_stack);
    FUNC_7(&VAR_12->wlod_stack,
        &VAR_14->wlod_stack);
   }
   if (VAR_13 && VAR_13 != VAR_12) {
    FUNC_9(&VAR_15->wlod_stack);
    FUNC_7(&VAR_13->wlod_stack,
        &VAR_15->wlod_stack);
   }
   FUNC_4(&VAR_8);

   if (FUNC_0(VAR_16, VAR_17))
    continue;

   FUNC_6(VAR_10,
     "\nLock order reversal between \"%s\"(%s) and \"%s\"(%s)!\n",
       VAR_16->w_name, VAR_16->w_class->lc_name,
       VAR_17->w_name, VAR_17->w_class->lc_name);
   if (VAR_12) {
    FUNC_6(VAR_10,
   "Lock order \"%s\"(%s) -> \"%s\"(%s) first seen at:\n",
        VAR_16->w_name, VAR_16->w_class->lc_name,
        VAR_17->w_name, VAR_17->w_class->lc_name);
    FUNC_8(VAR_10, &VAR_14->wlod_stack);
    FUNC_6(VAR_10, "\n");
   }
   if (VAR_13 && VAR_13 != VAR_12) {
    FUNC_6(VAR_10,
   "Lock order \"%s\"(%s) -> \"%s\"(%s) first seen at:\n",
        VAR_17->w_name, VAR_17->w_class->lc_name,
        VAR_16->w_name, VAR_16->w_class->lc_name);
    FUNC_8(VAR_10, &VAR_15->wlod_stack);
    FUNC_6(VAR_10, "\n");
   }
  }
 }
 FUNC_3(&VAR_8);
 if (VAR_20 != VAR_5) {
  FUNC_4(&VAR_8);





  *VAR_11 = 0;
  FUNC_5(VAR_10);
  goto restart;
 }
 FUNC_4(&VAR_8);


 FUNC_1(VAR_14, VAR_0);
 FUNC_1(VAR_15, VAR_0);
 FUNC_1(VAR_16, VAR_0);
 FUNC_1(VAR_17, VAR_0);
}
