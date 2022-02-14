
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct jz4780_nemc_softc {int simplebus_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 struct jz4780_nemc_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct jz4780_nemc_softc*,int ,int ) ;
 int FUNC_3 (int *,struct resource*,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct jz4780_nemc_softc *VAR_6;
 u_int VAR_7;
 int VAR_8;

 if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_1(VAR_1);


  VAR_8 = FUNC_3(&VAR_6->simplebus_sc, VAR_5, &VAR_7);
  if (VAR_8 == 0) {

   VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_7);
   if (VAR_8 != 0)
    return (VAR_8);
  }
 }


 return (FUNC_0(VAR_1, VAR_2,
  VAR_3, VAR_4, VAR_5));
}
