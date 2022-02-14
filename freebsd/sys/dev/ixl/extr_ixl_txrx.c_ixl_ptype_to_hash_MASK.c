
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ outer_ip_ver; int inner_prot; int known; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct i40e_rx_ptype_decoded FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(u8 VAR_10)
{
        struct i40e_rx_ptype_decoded VAR_11;

 VAR_11 = FUNC_0(VAR_10);

 if (!VAR_11.known)
  return VAR_3;

 if (VAR_11.outer_ip == VAR_2)
  return VAR_3;


        if (VAR_11.outer_ip_ver == VAR_1) {
  switch (VAR_11.inner_prot) {
  case 129:
   return VAR_7;
  case 128:
   return VAR_9;
  default:
   return VAR_5;
  }
 }
        if (VAR_11.outer_ip_ver == VAR_0) {
  switch (VAR_11.inner_prot) {
  case 129:
   return VAR_6;
  case 128:
   return VAR_8;
  default:
   return VAR_4;
  }
 }

 return VAR_3;
}
