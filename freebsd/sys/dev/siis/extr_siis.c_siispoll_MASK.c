
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_channel {int dev; } ;
struct cam_sim {int dummy; } ;


 scalar_t__ FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_0)
{
 struct siis_channel *VAR_1 = (struct siis_channel *)FUNC_0(VAR_0);

 FUNC_1(VAR_1->dev);
}
