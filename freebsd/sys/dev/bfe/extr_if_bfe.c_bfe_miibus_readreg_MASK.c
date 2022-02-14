
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bfe_softc*,int,int*) ;
 struct bfe_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct bfe_softc *VAR_3;
 u_int32_t VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3, VAR_2, &VAR_4);

 return (VAR_4);
}
