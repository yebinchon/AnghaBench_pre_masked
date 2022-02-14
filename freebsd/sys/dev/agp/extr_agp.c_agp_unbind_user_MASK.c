
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int key; } ;
typedef TYPE_1__ agp_unbind ;


 int FUNC_0 (int ,struct agp_memory*) ;
 int VAR_0 ;
 struct agp_memory* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, agp_unbind *VAR_2)
{
 struct agp_memory *VAR_3 = FUNC_1(VAR_1, VAR_2->key);

 if (!VAR_3)
  return VAR_0;

 return FUNC_0(VAR_1, VAR_3);
}
