
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct eth_filter_rules_cmd {int state; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static inline void FUNC_2(struct bxe_softc *VAR_14,
    unsigned long *VAR_15,
    struct eth_filter_rules_cmd *VAR_16,
    bool VAR_17)
{
 uint16_t VAR_18;


 VAR_18 = VAR_13 |
  VAR_10;

 if (FUNC_1(VAR_5, VAR_15))
  VAR_18 &= ~VAR_13;

 if (FUNC_1(VAR_4, VAR_15))
  VAR_18 &= ~VAR_10;

 if (FUNC_1(VAR_1, VAR_15)) {
  VAR_18 &= ~VAR_13;
  VAR_18 |= VAR_11;
 }

 if (FUNC_1(VAR_0, VAR_15)) {
  VAR_18 |= VAR_9;
  VAR_18 &= ~VAR_10;
 }
 if (FUNC_1(VAR_3, VAR_15))
  VAR_18 |= VAR_8;

 if (FUNC_1(VAR_6, VAR_15)) {
  VAR_18 &= ~VAR_13;
  VAR_18 |= VAR_12;
 }
 if (FUNC_1(VAR_2, VAR_15))
  VAR_18 |= VAR_7;


 if (VAR_17) {
  VAR_18 &= ~VAR_9;
  VAR_18 &= ~VAR_8;
  VAR_18 &= ~VAR_11;
  VAR_18 &= ~VAR_12;
 }

 VAR_16->state = FUNC_0(VAR_18);
}
