
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_tpctl {int tp_ctrl1; int bbp_atten; int rf_atten; } ;
struct bwi_rf_lo {int dummy; } ;
struct bwi_mac {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct bwi_rf_lo* FUNC_1 (struct bwi_mac*,int,int) ;

__attribute__((used)) static __inline struct bwi_rf_lo *
FUNC_2(struct bwi_mac *VAR_1, const struct bwi_tpctl *VAR_2)
{
 uint16_t VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = 1;
 if (VAR_2 == ((void*)0)) {
  VAR_4 = 2;
  VAR_3 = 3;
 } else {
  if (VAR_2->tp_ctrl1 == 3)
   VAR_5 = 0;

  VAR_4 = VAR_2->bbp_atten;
  VAR_3 = VAR_2->rf_atten;

  if (VAR_4 > 6)
   VAR_4 = 6;
 }

 if (VAR_5) {

  static const uint16_t VAR_6[10] =
  { 11, 10, 11, 12, 13, 12, 13, 12, 13, 12 };





  if (VAR_3 >= 10) {
   VAR_3 = 0;
  } else {
   VAR_3 = VAR_6[VAR_3];
  }


 }

 return FUNC_1(VAR_1, VAR_3, VAR_4);
}
