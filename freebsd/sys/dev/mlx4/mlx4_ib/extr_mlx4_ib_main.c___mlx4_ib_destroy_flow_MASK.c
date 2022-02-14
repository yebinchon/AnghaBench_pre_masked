
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,long long) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_3, u64 VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_4, 0, 0,
         VAR_2, VAR_0,
         VAR_1);
 if (VAR_5)
  FUNC_1("Fail to detach network rule. registration id = 0x%llx\n",
         (long long)VAR_4);
 return VAR_5;
}
