
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct if_ath_ant_comb_state {int scan; } ;
struct TYPE_3__ {int main_lna_conf; int alt_lna_conf; int fast_div_bias; int alt_gaintb; int main_gaintb; } ;
typedef TYPE_1__ HAL_ANT_COMB_CONFIG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct if_ath_ant_comb_state *VAR_3,
    int VAR_4, int VAR_5, u_int VAR_6,
    HAL_ANT_COMB_CONFIG *VAR_7)
{

 if (VAR_6 == VAR_1) {
  switch ((VAR_7->main_lna_conf << 4)
      | VAR_7->alt_lna_conf) {
  case (0x01):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x02):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x03):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x10):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_0)) {
    VAR_7->fast_div_bias = 0x3f;
   } else {
    VAR_7->fast_div_bias = 0x1;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x12):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
   case (0x13):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_0)) {
    VAR_7->fast_div_bias = 0x3f;
   } else {
    VAR_7->fast_div_bias = 0x1;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x20):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_0)) {
    VAR_7->fast_div_bias = 0x3f;
   } else {
    VAR_7->fast_div_bias = 0x1;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x21):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x23):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_0)) {
    VAR_7->fast_div_bias = 0x3f;
   } else {
    VAR_7->fast_div_bias = 0x1;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x30):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x31):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x32):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  default:
   break;
  }
 } else if (VAR_6 == VAR_2) {
  switch ((VAR_7->main_lna_conf << 4)
      | VAR_7->alt_lna_conf) {
  case (0x01):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x02):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x03):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x10):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_5)) {
    VAR_7->fast_div_bias = 0x1;
   } else {
    VAR_7->fast_div_bias = 0x2;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x12):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x13):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_5)) {
    VAR_7->fast_div_bias = 0x1;
   } else {
    VAR_7->fast_div_bias = 0x2;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x20):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_5)) {
    VAR_7->fast_div_bias = 0x1;
   } else {
    VAR_7->fast_div_bias = 0x2;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x21):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x23):
   if ((VAR_3->scan == 0)
       && (VAR_4 > VAR_5)) {
    VAR_7->fast_div_bias = 0x1;
   } else {
    VAR_7->fast_div_bias = 0x2;
   }
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x30):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x31):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  case (0x32):
   VAR_7->fast_div_bias = 0x1;
   VAR_7->main_gaintb = 0;
   VAR_7->alt_gaintb = 0;
   break;
  default:
   break;
  }
 } else {
  switch ((VAR_7->main_lna_conf << 4) | VAR_7->alt_lna_conf) {
  case (0x01):
   VAR_7->fast_div_bias = 0x3b;
   break;
  case (0x02):
   VAR_7->fast_div_bias = 0x3d;
   break;
  case (0x03):
   VAR_7->fast_div_bias = 0x1;
   break;
  case (0x10):
   VAR_7->fast_div_bias = 0x7;
   break;
  case (0x12):
   VAR_7->fast_div_bias = 0x2;
   break;
  case (0x13):
   VAR_7->fast_div_bias = 0x7;
   break;
  case (0x20):
   VAR_7->fast_div_bias = 0x6;
   break;
  case (0x21):
   VAR_7->fast_div_bias = 0x0;
   break;
  case (0x23):
   VAR_7->fast_div_bias = 0x6;
   break;
  case (0x30):
   VAR_7->fast_div_bias = 0x1;
   break;
  case (0x31):
   VAR_7->fast_div_bias = 0x3b;
   break;
  case (0x32):
   VAR_7->fast_div_bias = 0x3d;
   break;
  default:
   break;
  }
 }
}
