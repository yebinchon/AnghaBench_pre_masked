
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_cam {TYPE_1__* inf; } ;
typedef int device_t ;
struct TYPE_2__ {int aac_sc; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct aac_cam *VAR_2;

 VAR_2 = (struct aac_cam *)FUNC_0(VAR_1);
 if (!VAR_2->inf)
  return (0);
 FUNC_1(VAR_2->inf->aac_sc, VAR_0, "");
 return (0);
}
