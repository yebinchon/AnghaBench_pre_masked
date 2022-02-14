
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct nvme_controller *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6[] = { 1, 250000, 500000, 985000, 1970000 };
 uint32_t VAR_7;

 VAR_7 = FUNC_1(VAR_3->dev, VAR_2, 2);
 VAR_4 = VAR_7 & VAR_0;
 VAR_5 = (VAR_7 & VAR_1) >> 4;




 if (VAR_4 >= FUNC_0(VAR_6))
  VAR_4 = 0;
 return VAR_6[VAR_4] * VAR_5;
}
