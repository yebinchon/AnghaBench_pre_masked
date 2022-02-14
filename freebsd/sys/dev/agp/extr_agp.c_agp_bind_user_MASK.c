
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int pg_start; int key; } ;
typedef TYPE_1__ agp_bind ;


 int FUNC_0 (int ,struct agp_memory*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct agp_memory* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, agp_bind *VAR_3)
{
 struct agp_memory *VAR_4 = FUNC_1(VAR_2, VAR_3->key);

 if (!VAR_4)
  return VAR_1;

 return FUNC_0(VAR_2, VAR_4, VAR_3->pg_start << VAR_0);
}
