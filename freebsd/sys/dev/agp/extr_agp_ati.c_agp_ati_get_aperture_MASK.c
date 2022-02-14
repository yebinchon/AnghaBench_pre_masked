
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_ati_softc {scalar_t__ is_rs300; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_ati_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(device_t VAR_2)
{
 struct agp_ati_softc *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 if (VAR_3->is_rs300)
  VAR_4 = FUNC_1(VAR_2, VAR_1, 4);
 else
  VAR_4 = FUNC_1(VAR_2, VAR_0, 4);

 VAR_4 = (VAR_4 & 0x0000000e) >> 1;
 VAR_4 = (32 * 1024 * 1024) << VAR_4;

 return VAR_4;
}
