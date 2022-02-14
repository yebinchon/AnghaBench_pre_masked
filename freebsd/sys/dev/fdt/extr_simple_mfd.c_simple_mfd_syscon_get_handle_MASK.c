
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscon {int dummy; } ;
struct simple_mfd_softc {struct syscon* syscon; } ;
typedef int device_t ;


 int VAR_0 ;
 struct simple_mfd_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, struct syscon **VAR_2)
{
 struct simple_mfd_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 *VAR_2 = VAR_3->syscon;
 if (*VAR_2 == ((void*)0))
  return (VAR_0);
 return (0);
}
