
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixl_vsi {int ftl; } ;
struct ixl_mac_filter {int flags; int vlan; int macaddr; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct ixl_mac_filter*,int ) ;
 int FUNC_1 (int const*,int ,int ) ;
 struct ixl_mac_filter* FUNC_2 (int,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static inline struct ixl_mac_filter *
FUNC_3(struct ixl_vsi *VAR_7, const u8 *VAR_8, s16 VAR_9)
{
 struct ixl_mac_filter *VAR_10;


 VAR_10 = FUNC_2(sizeof(struct ixl_mac_filter),
     VAR_3, VAR_4 | VAR_5);
 if (VAR_10) {
  FUNC_0(&VAR_7->ftl, VAR_10, VAR_6);
  FUNC_1(VAR_8, VAR_10->macaddr, VAR_0);
  VAR_10->vlan = VAR_9;
  VAR_10->flags |= (VAR_1 | VAR_2);
 }

 return (VAR_10);
}
