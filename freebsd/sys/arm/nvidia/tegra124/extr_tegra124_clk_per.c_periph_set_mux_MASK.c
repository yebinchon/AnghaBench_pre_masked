
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct periph_sc {int flags; int mux; int base_reg; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct periph_sc*) ;
 int FUNC_1 (struct periph_sc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct periph_sc*,int ,int*) ;
 int FUNC_3 (struct periph_sc*,int ,int) ;
 struct periph_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_8, int VAR_9)
{
 struct periph_sc *VAR_10;
 uint32_t VAR_11;


 VAR_10 = FUNC_4(VAR_8);
 if (!(VAR_10->flags & VAR_0))
  return (VAR_3);

 VAR_10->mux = VAR_9;
 FUNC_0(VAR_10);
 FUNC_2(VAR_10, VAR_10->base_reg, &VAR_11);
 VAR_11 &= ~(VAR_6 << VAR_7);
 if ((VAR_10->flags & VAR_2) == VAR_1) {
  VAR_11 &= ~VAR_4;
  VAR_11 &= ~(VAR_6 << VAR_5);

  if (VAR_9 <= 7) {
   VAR_11 |= VAR_9 << VAR_7;
  } else {
   VAR_11 |= 7 << VAR_7;
   VAR_11 |= (VAR_9 - 8) << VAR_5;
  }
 } else {
  VAR_11 |= VAR_9 << VAR_7;
 }
 FUNC_3(VAR_10, VAR_10->base_reg, VAR_11);
 FUNC_1(VAR_10);

 return(0);
}
