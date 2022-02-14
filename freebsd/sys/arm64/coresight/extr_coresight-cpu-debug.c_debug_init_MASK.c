
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct debug_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct debug_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
 struct debug_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_2(VAR_7);


 FUNC_1(VAR_8->res, VAR_0, VAR_1);


 FUNC_1(VAR_8->res, VAR_2, 0);


 VAR_9 = FUNC_0(VAR_8->res, VAR_3);
 if (VAR_9 & VAR_4)
  return (0);


 VAR_9 |= VAR_5;
 FUNC_1(VAR_8->res, VAR_3, VAR_9);

 do {
  VAR_9 = FUNC_0(VAR_8->res, VAR_6);
 } while ((VAR_9 & VAR_4) == 0);

 return (0);
}
