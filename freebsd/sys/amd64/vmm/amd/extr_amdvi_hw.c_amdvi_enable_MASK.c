
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdvi_softc {int ivhd_flag; int control; struct amdvi_softc* ctrl; } ;
struct amdvi_ctrl {int ivhd_flag; int control; struct amdvi_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct amdvi_softc*,char*) ;
 struct amdvi_softc* FUNC_1 (int ) ;
 int VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct amdvi_ctrl *VAR_17;
 struct amdvi_softc *VAR_18;
 uint64_t VAR_19;
 int VAR_20;

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_18 = FUNC_1(VAR_16[VAR_20]);
  FUNC_0(VAR_18, ("softc is NULL\n"));
  VAR_17 = VAR_18->ctrl;
  FUNC_0(VAR_17, ("ctrl is NULL\n"));

  VAR_19 = ( VAR_4 |
   VAR_0 |
       VAR_2 |
       VAR_3 |
       VAR_6);

  if (VAR_18->ivhd_flag & VAR_10)
   VAR_19 |= VAR_1;
  if (VAR_18->ivhd_flag & VAR_11)
   VAR_19 |= VAR_5;
  if (VAR_18->ivhd_flag & VAR_14)
   VAR_19 |= VAR_9;
  if (VAR_18->ivhd_flag & VAR_13)
   VAR_19 |= VAR_8;
  if (VAR_18->ivhd_flag & VAR_12)
   VAR_19 |= VAR_7;

  VAR_17->control = VAR_19;
 }
}
