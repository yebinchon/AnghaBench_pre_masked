
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int addr_len; } ;
struct neighbour {int dummy; } ;
struct neigh_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct neighbour* FUNC_0 (struct neigh_table*,void*,struct net_device*,int ) ;
 int FUNC_1 (struct neighbour*,int *,int ,int ) ;

struct neighbour *FUNC_2(struct neigh_table *VAR_2,
     u8 *VAR_3, void *VAR_4,
     struct net_device *VAR_5)
{
 struct neighbour *VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5,
       VAR_3 || !VAR_5->addr_len);
 if (VAR_6)
  FUNC_1(VAR_6, VAR_3, VAR_1,
        VAR_0);
 return VAR_6;
}
