
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct mv_pcib_softc {int sc_enable_find_root_slot; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mv_pcib_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mv_pcib_softc*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_7, u_int VAR_8, u_int VAR_9, u_int VAR_10)
{
 struct mv_pcib_softc *VAR_11 = FUNC_0(VAR_7);
 uint32_t VAR_12, VAR_13;


 if (!VAR_11->sc_enable_find_root_slot)
  return (VAR_9 == 0);

 VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_9, VAR_10, VAR_4,
     VAR_5);
 VAR_13 = FUNC_1(VAR_11, VAR_8, VAR_9, VAR_10, VAR_2,
     VAR_3) & VAR_1;

 return (VAR_12 == VAR_6 && VAR_13 == VAR_0);
}
