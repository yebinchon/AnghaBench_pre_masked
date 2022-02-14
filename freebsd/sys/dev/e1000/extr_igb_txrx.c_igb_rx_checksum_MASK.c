
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef TYPE_1__* if_rxd_info_t ;
struct TYPE_3__ {int iri_csum_flags; int iri_csum_data; } ;


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
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(u32 VAR_14, if_rxd_info_t VAR_15, u32 VAR_16)
{
 u16 VAR_17 = (u16)VAR_14;
 u8 VAR_18 = (u8) (VAR_14 >> 24);
 bool VAR_19 = VAR_13;


 if (VAR_17 & VAR_10) {
  VAR_15->iri_csum_flags = 0;
  return;
 }

 if ((VAR_16 & VAR_5) == 0 &&
     (VAR_16 & VAR_6) != 0)
  VAR_19 = 1;
 else
  VAR_19 = 0;

 if (VAR_17 & VAR_9) {

  if (!(VAR_18 & VAR_7)) {

   VAR_15->iri_csum_flags = VAR_1;
   VAR_15->iri_csum_flags |= VAR_2;
  } else
   VAR_15->iri_csum_flags = 0;
 }

 if (VAR_17 & (VAR_11 | VAR_12)) {
  u64 VAR_20 = (VAR_0 | VAR_3);
  if (VAR_19)
   VAR_20 = VAR_4;

  if (!(VAR_18 & VAR_8)) {
   VAR_15->iri_csum_flags |= VAR_20;
   if (VAR_19 == 0)
    VAR_15->iri_csum_data = FUNC_0(0xffff);
  }
 }
 return;
}
