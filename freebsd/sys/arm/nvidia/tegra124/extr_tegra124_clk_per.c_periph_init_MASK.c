
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct periph_sc {int flags; int mux; int divider; int div_mask; int base_reg; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct periph_sc*) ;
 int FUNC_1 (struct periph_sc*) ;
 int FUNC_2 (struct periph_sc*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct periph_sc*,int ,int*) ;
 struct periph_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (struct clknode*,int) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_12, device_t VAR_13)
{
 struct periph_sc *VAR_14;
 uint32_t VAR_15;
 VAR_14 = FUNC_4(VAR_12);

 FUNC_0(VAR_14);
 if (VAR_14->flags & VAR_1)
  FUNC_2(VAR_14, VAR_14->base_reg, VAR_8, VAR_8);

 FUNC_3(VAR_14, VAR_14->base_reg, &VAR_15);
 FUNC_1(VAR_14);


 if (VAR_14->flags & VAR_2)
  VAR_14->mux = (VAR_15 >> VAR_10) & VAR_9;
 else
  VAR_14->mux = 0;
 if (VAR_14->flags & VAR_0)
  VAR_14->divider = (VAR_15 & VAR_14->div_mask) + 2;
 else
  VAR_14->divider = 1;
 if ((VAR_14->flags & VAR_4) == VAR_5) {
  if (!(VAR_15 & VAR_11))
   VAR_14->divider = 2;
 }


 if ((VAR_14->flags & VAR_4) == VAR_3) {
  if (!(VAR_15 & VAR_6) && (VAR_14->mux == 7)) {
   VAR_14->mux = 8 +
       ((VAR_15 >> VAR_7) & VAR_9);
  }
 }
 FUNC_5(VAR_12, VAR_14->mux);
 return(0);
}
