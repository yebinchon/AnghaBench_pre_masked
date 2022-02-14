
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 struct dc_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_6, bool VAR_7)
{
 struct dc_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_2(VAR_6);


 VAR_9 = VAR_7 ? VAR_0: VAR_1;
 FUNC_1(VAR_8, VAR_2, FUNC_0(VAR_9));


 FUNC_1(VAR_8, VAR_3, VAR_5);
 FUNC_1(VAR_8, VAR_3, VAR_4);
}
