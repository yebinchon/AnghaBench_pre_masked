
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_controller {int ccc; int cccc; int channels; int quirks; int gmim; int mim; int pmim; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct mvs_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_19)
{
 struct mvs_controller *VAR_20 = FUNC_2(VAR_19);
 int VAR_21, VAR_22 = VAR_20->ccc, VAR_23 = VAR_20->cccc, VAR_24 = 0;


 FUNC_0(VAR_20->r_mem, VAR_4, 0x00000000);

 FUNC_0(VAR_20->r_mem, VAR_6, 0x00000000);

 FUNC_0(VAR_20->r_mem, VAR_5, 0x00000000);
 if (VAR_22 && VAR_18) {
  FUNC_3(VAR_19,
      "CCC with %dus/%dcmd enabled\n",
      VAR_20->ccc, VAR_20->cccc);
 }
 VAR_22 *= 150;

 if (VAR_20->channels > 4 && (VAR_20->quirks & VAR_17) == 0) {
  FUNC_0(VAR_20->r_mem, VAR_2, VAR_23);
  FUNC_0(VAR_20->r_mem, VAR_3, VAR_22);
  FUNC_0(VAR_20->r_mem, VAR_0, ~VAR_1);
  if (VAR_22)
   VAR_24 |= VAR_10;
  VAR_22 = 0;
  VAR_23 = 0;
 }
 for (VAR_21 = 0; VAR_21 < VAR_20->channels / 4; VAR_21++) {

  FUNC_0(VAR_20->r_mem, FUNC_1(VAR_21) + VAR_8, VAR_23);
  FUNC_0(VAR_20->r_mem, FUNC_1(VAR_21) + VAR_9, VAR_22);
  if (VAR_22)
   VAR_24 |= (VAR_15 << (VAR_21 * VAR_16));

  FUNC_0(VAR_20->r_mem, FUNC_1(VAR_21) + VAR_7, 0x00000000);
 }

 VAR_20->gmim = (VAR_24 ? VAR_24 : (VAR_11 | VAR_12)) |
      VAR_13 | VAR_14;
 VAR_20->mim = VAR_20->gmim | VAR_20->pmim;
 FUNC_0(VAR_20->r_mem, VAR_4, VAR_20->mim);

 FUNC_0(VAR_20->r_mem, VAR_6, 0x007fffff);
 return (0);
}
