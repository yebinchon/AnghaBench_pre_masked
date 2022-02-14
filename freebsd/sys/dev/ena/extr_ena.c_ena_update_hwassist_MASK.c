
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_adapter {int tx_offload_cap; int ifp; } ;
typedef int if_t ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct ena_adapter *VAR_14)
{
 if_t VAR_15 = VAR_14->ifp;
 uint32_t VAR_16 = VAR_14->tx_offload_cap;
 int VAR_17 = FUNC_1(VAR_15);
 int VAR_18 = 0;

 FUNC_0(VAR_15);

 if ((VAR_17 & VAR_12) != 0) {
  if ((VAR_16 &
      VAR_7) != 0)
   VAR_18 |= VAR_0;
  if ((VAR_16 &
      (VAR_8 |
      VAR_9)) != 0)
   VAR_18 |= VAR_6 | VAR_4;
 }

 if ((VAR_17 & VAR_13) != 0)
  VAR_18 |= VAR_3 | VAR_1;

 if ((VAR_17 & VAR_10) != 0)
  VAR_18 |= VAR_5;

 if ((VAR_17 & VAR_11) != 0)
  VAR_18 |= VAR_2;

 FUNC_2(VAR_15, VAR_18, 0);
}
