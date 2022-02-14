
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_qp_table {int zones_uids; int * zones; struct mlx4_bitmap* bitmap_gen; } ;
struct TYPE_3__ {int num_qps; int* reserved_qps_cnt; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_bitmap {int dummy; } ;
struct TYPE_4__ {struct mlx4_qp_table qp_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct mlx4_bitmap**) ;
 struct mlx4_bitmap** FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct mlx4_bitmap*,int,int,int) ;
 int FUNC_5 (struct mlx4_bitmap*) ;
 int FUNC_6 (struct mlx4_bitmap*,int,int,int,int) ;
 TYPE_2__* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (int *,struct mlx4_bitmap*,int,int ,int,int) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_15,
        u32 VAR_16,
        u32 VAR_17,
        u32 VAR_18,
        u32 VAR_19,
        u32 VAR_20)
{
 struct mlx4_qp_table *VAR_21 = &FUNC_7(VAR_15)->qp_table;
 struct mlx4_bitmap (*VAR_22)[VAR_8] = ((void*)0);
 int VAR_23 = 0;
 u32 VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_21->zones = FUNC_9(VAR_10);

 if (((void*)0) == VAR_21->zones)
  return -VAR_0;

 VAR_22 = FUNC_1(sizeof(*VAR_22), VAR_1);

 if (((void*)0) == VAR_22) {
  VAR_26 = -VAR_0;
  goto free_zone;
 }

 VAR_26 = FUNC_6(*VAR_22 + VAR_7, VAR_15->caps.num_qps,
          (1 << 23) - 1, VAR_16,
          VAR_17);

 if (VAR_26)
  goto free_bitmap;

 ++VAR_23;

 VAR_26 = FUNC_8(VAR_21->zones, *VAR_22 + VAR_7,
    VAR_13 |
    VAR_14, 0,
    0, VAR_21->zones_uids + VAR_7);

 if (VAR_26)
  goto free_bitmap;

 VAR_26 = FUNC_6(*VAR_22 + VAR_9,
          VAR_18,
          VAR_18 - 1,
          VAR_15->caps.reserved_qps_cnt[VAR_3],
          VAR_18 - VAR_19);

 if (VAR_26)
  goto free_bitmap;

 ++VAR_23;

 VAR_26 = FUNC_8(VAR_21->zones, *VAR_22 + VAR_9,
    VAR_12 |
    VAR_11 |
    VAR_14, VAR_6,
    0, VAR_21->zones_uids + VAR_9);

 if (VAR_26)
  goto free_bitmap;

 VAR_24 = VAR_15->caps.reserved_qps_cnt[VAR_3];
 for (VAR_25 = VAR_9 + 1; VAR_25 < sizeof(*VAR_22)/sizeof((*VAR_22)[0]);
      VAR_25++) {
  int VAR_27;
  u32 VAR_28 = VAR_19;
  u32 VAR_29;
  u32 VAR_30;






  VAR_29 = (VAR_2 & ~(VAR_2 - 1)) - 1;
  VAR_30 = FUNC_2((u32)VAR_5, VAR_29 + 1);

  if (((VAR_24 & VAR_2) &&
       ((int)(VAR_20 - VAR_24)) >=
       FUNC_11(VAR_2)) ||
      (!(VAR_24 & VAR_2) &&
       !((VAR_24 + VAR_30 - 1) &
         VAR_2)))
   VAR_27 = VAR_30;
  else {
   u32 VAR_31 =
    (VAR_24 | VAR_2 | VAR_29) + 1;

   if (VAR_24 & VAR_2)
    VAR_24 = VAR_31;



   if (VAR_24 > VAR_20) {

    VAR_27 = -1;
   } else {
    VAR_27 = FUNC_3(VAR_20 - VAR_24,
         VAR_29 - (VAR_24 & VAR_29),
         VAR_30);
    if (VAR_27 < VAR_30) {
     int VAR_32;

     VAR_32 = FUNC_3(
      VAR_20 - VAR_31,
      VAR_29 - (VAR_24 & VAR_29),
      VAR_30);




     if (VAR_32 > VAR_27) {
      VAR_24 = VAR_31;
      VAR_27 = VAR_32;
     }
    }
   }
  }

  if (VAR_27 > 0) {




   VAR_28 = FUNC_4(
     *VAR_22 + VAR_9,
     VAR_27, 1,
     VAR_2);

   if (VAR_28 == (u32)-1) {
    VAR_26 = -VAR_0;
    break;
   }

   VAR_24 = VAR_28 + VAR_27;

   VAR_26 = FUNC_6(*VAR_22 + VAR_25, FUNC_11(VAR_27),
            FUNC_11(VAR_27) - 1, 0,
            FUNC_11(VAR_27) - VAR_27);
  } else {



   VAR_26 = FUNC_6(*VAR_22 + VAR_25, 1,
            VAR_5 - 1, 0,
            0);
   FUNC_4(*VAR_22 + VAR_25, 1, 1, 0);
  }

  if (VAR_26)
   break;

  ++VAR_23;

  VAR_26 = FUNC_8(VAR_21->zones, *VAR_22 + VAR_25,
     VAR_12 |
     VAR_11 |
     VAR_14, VAR_4,
     VAR_28, VAR_21->zones_uids + VAR_25);

  if (VAR_26)
   break;
 }

 if (VAR_26)
  goto free_bitmap;

 VAR_21->bitmap_gen = *VAR_22;

 return VAR_26;

free_bitmap:
 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++)
  FUNC_5(*VAR_22 + VAR_25);
 FUNC_0(VAR_22);
free_zone:
 FUNC_10(VAR_21->zones);
 return VAR_26;
}
