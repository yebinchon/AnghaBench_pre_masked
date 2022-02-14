
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u8 ;
typedef int u32 ;
struct ixgbe_mc_addr {int dummy; } ;
struct ifnet {int if_flags; } ;
struct adapter {int hw; struct ixgbe_mc_addr* mta; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ixgbe_mc_addr*,int) ;
 int FUNC_4 (struct ifnet*,int ,struct adapter*) ;
 struct ifnet* FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int *,int,int ,int ) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_9)
{
 struct adapter *VAR_10 = FUNC_6(VAR_9);
 struct ixgbe_mc_addr *VAR_11;
 struct ifnet *VAR_12 = FUNC_5(VAR_9);
 u8 *VAR_13;
 u32 VAR_14;
 u_int VAR_15;

 FUNC_0("ixgbe_if_multi_set: begin");

 VAR_11 = VAR_10->mta;
 FUNC_3(VAR_11, sizeof(*VAR_11) * VAR_5);

 VAR_15 = FUNC_4(FUNC_5(VAR_9), VAR_8,
     VAR_10);

 VAR_14 = FUNC_1(&VAR_10->hw, VAR_2);
 VAR_14 |= (VAR_4 | VAR_3);
 if (VAR_12->if_flags & VAR_1)
  VAR_14 |= (VAR_4 | VAR_3);
 else if (VAR_15 >= VAR_5 ||
     VAR_12->if_flags & VAR_0) {
  VAR_14 |= VAR_3;
  VAR_14 &= ~VAR_4;
 } else
  VAR_14 &= ~(VAR_4 | VAR_3);

 FUNC_2(&VAR_10->hw, VAR_2, VAR_14);

 if (VAR_15 < VAR_5) {
  VAR_13 = (u8 *)VAR_11;
  FUNC_7(&VAR_10->hw, VAR_13, VAR_15,
      VAR_7, VAR_6);
 }

}
