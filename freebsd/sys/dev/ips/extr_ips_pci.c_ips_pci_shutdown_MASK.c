
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ configured; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(device_t VAR_0)
{
 ips_softc_t *VAR_1 = (ips_softc_t *) FUNC_0(VAR_0);
 if (VAR_1->configured) {
  FUNC_1(VAR_1);
 }
 return 0;
}
