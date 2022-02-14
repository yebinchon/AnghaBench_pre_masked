
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (FUNC_2(VAR_3) == VAR_2[0].vendor &&
     FUNC_1(VAR_3) == VAR_2[0].device) {
  FUNC_0(VAR_3, VAR_2[0].desc);

  return (VAR_0);
 }

 return (VAR_1);
}
