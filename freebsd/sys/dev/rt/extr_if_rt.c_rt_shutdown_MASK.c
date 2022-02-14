
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 struct rt_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct rt_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct rt_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2, VAR_0, "shutting down\n");
 FUNC_2(VAR_2);

 return (0);
}
