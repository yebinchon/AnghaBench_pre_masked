
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_caps {int dummy; } ;
struct chipc_softc {struct chipc_caps caps; } ;
typedef int device_t ;


 struct chipc_softc* FUNC_0 (int ) ;

__attribute__((used)) static struct chipc_caps *
FUNC_1(device_t VAR_0)
{
 struct chipc_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (&VAR_1->caps);
}
