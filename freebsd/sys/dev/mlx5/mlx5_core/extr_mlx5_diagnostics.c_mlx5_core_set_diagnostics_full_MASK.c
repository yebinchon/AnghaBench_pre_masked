
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef TYPE_1__* u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_9__ {int counter_id; } ;
struct TYPE_8__ {int counter_id; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*,void*,int ) ;
 TYPE_1__* FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,void*,int ,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (void*) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_8 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;

int FUNC_9(struct mlx5_core_dev *VAR_15,
       u8 VAR_16, u8 VAR_17)
{
 void *VAR_18;
 void *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;

 if (FUNC_2(VAR_15, VAR_3) == 0)
  return 0;

 VAR_20 = FUNC_2(VAR_15, VAR_11);
 if (VAR_20 == 0)
  return 0;

 VAR_21 = FUNC_4(VAR_13) +
     FUNC_4(VAR_4) * VAR_20;
 VAR_19 = FUNC_8(VAR_21);
 if (VAR_19 == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_13, VAR_19,
           VAR_6);

 FUNC_3(VAR_5, VAR_18,
   VAR_7, VAR_16 || VAR_17);
 FUNC_3(VAR_5, VAR_18,
   VAR_14, 1);
 FUNC_3(VAR_5, VAR_18,
   VAR_12, 1);


 for (VAR_23 = VAR_24 = 0; VAR_23 != VAR_20; VAR_23++) {
  u16 VAR_25 =
   FUNC_1(VAR_15, VAR_4[VAR_23].counter_id);
  int VAR_26 = -1;

  if (VAR_26 < 0 && VAR_16 != 0) {

   VAR_26 = FUNC_6(
       VAR_9,
       VAR_2,
       VAR_25);
  }
  if (VAR_26 < 0 && VAR_17 != 0) {

   VAR_26 = FUNC_6(
       VAR_8,
       VAR_1,
       VAR_25);
  }
  if (VAR_26 < 0)
   continue;

  FUNC_3(VAR_5,
    VAR_18,
    VAR_25[VAR_24].counter_id,
    VAR_25);
  VAR_24++;
 }


 VAR_21 = FUNC_4(VAR_13) +
     FUNC_4(VAR_4) * VAR_24;


 FUNC_3(VAR_5, VAR_18,
   VAR_10, VAR_24);


 VAR_22 = FUNC_7(VAR_15, VAR_19, VAR_21);

 FUNC_5(VAR_19);

 return VAR_22;
}
