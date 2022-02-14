
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {scalar_t__ raw; } ;
typedef int u8 ;
struct mlx4_ib_dev {int dev; } ;
struct ib_smp {scalar_t__ data; void* attr_mod; int attr_id; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct mlx4_ib_dev*,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct mlx4_ib_dev* FUNC_9 (struct ib_device*) ;

int FUNC_10(struct ib_device *VAR_6, u8 VAR_7, int VAR_8,
   union ib_gid *VAR_9, int VAR_10)
{
 struct ib_smp *VAR_11 = ((void*)0);
 struct ib_smp *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_0;
 struct mlx4_ib_dev *VAR_14 = FUNC_9(VAR_6);
 int VAR_15 = 0;
 int VAR_16 = VAR_4;

 VAR_11 = FUNC_4(sizeof *VAR_11, VAR_1);
 VAR_12 = FUNC_3(sizeof *VAR_12, VAR_1);
 if (!VAR_11 || !VAR_12)
  goto out;

 FUNC_1(VAR_11);
 VAR_11->attr_id = VAR_3;
 VAR_11->attr_mod = FUNC_0(VAR_7);

 if (FUNC_8(VAR_14->dev) && VAR_10)
  VAR_16 |= VAR_5;

 VAR_13 = FUNC_7(VAR_14, VAR_16, VAR_7, ((void*)0), ((void*)0), VAR_11, VAR_12);
 if (VAR_13)
  goto out;

 FUNC_5(VAR_9->raw, VAR_12->data + 8, 8);

 if (FUNC_8(VAR_14->dev) && !VAR_10) {
  if (VAR_8) {

   VAR_13 = 0;
   VAR_15 = 1;
   goto out;
  }
 }

 FUNC_1(VAR_11);
 VAR_11->attr_id = VAR_2;
 VAR_11->attr_mod = FUNC_0(VAR_8 / 8);

 VAR_13 = FUNC_7(VAR_14, VAR_16, VAR_7,
      ((void*)0), ((void*)0), VAR_11, VAR_12);
 if (VAR_13)
  goto out;

 FUNC_5(VAR_9->raw + 8, VAR_12->data + (VAR_8 % 8) * 8, 8);

out:
 if (VAR_15)
  FUNC_6(VAR_9->raw + 8, 0, 8);
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 return VAR_13;
}
