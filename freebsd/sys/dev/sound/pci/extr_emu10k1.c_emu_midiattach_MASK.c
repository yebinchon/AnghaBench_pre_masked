
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int mpu_intr; int mpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;
 int FUNC_2 (int *,struct sc_info*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0, 4);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5, 4);

 VAR_4->mpu = FUNC_2(&VAR_3, VAR_4, VAR_2, &VAR_4->mpu_intr);
}
