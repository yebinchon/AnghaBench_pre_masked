
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct agp_memory*) ;
 int VAR_0 ;
 struct agp_memory* FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, int VAR_2)
{
 struct agp_memory *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_1, VAR_3);
  return 0;
 } else {
  return VAR_0;
 }
}
