
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_smp*) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (struct mlx5_ib_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;

int FUNC_6(struct mlx5_ib_dev *VAR_3, __be64 *VAR_4)
{
 struct ib_smp *VAR_5 = ((void*)0);
 struct ib_smp *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_5 || !VAR_6)
  goto out;

 FUNC_0(VAR_5);
 VAR_5->attr_id = VAR_2;

 VAR_7 = FUNC_5(VAR_3, 1, 1, 1, ((void*)0), ((void*)0), VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 FUNC_4(VAR_4, VAR_6->data + 12, 8);
out:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return VAR_7;
}
