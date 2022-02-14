
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct etm_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct etm_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct etm_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_3(VAR_7);


 FUNC_2(VAR_8->res, VAR_0, VAR_1);


 FUNC_2(VAR_8->res, VAR_6, 0);

 VAR_9 = FUNC_1(VAR_8->res, FUNC_0(1));
 FUNC_4("ETM Version: %d.%d\n",
     (VAR_9 & VAR_2) >> VAR_3,
     (VAR_9 & VAR_4) >> VAR_5);

 return (0);
}
