
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dev_addr; } ;
struct neighbour {int ha; struct net_device* dev; } ;
struct hh_cache {scalar_t__ hh_type; int hh_len; scalar_t__ hh_data; } ;
struct ethhdr {int h_dest; int h_source; scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(const struct neighbour *VAR_3, struct hh_cache *VAR_4)
{
 __be16 VAR_5 = VAR_4->hh_type;
 struct ethhdr *VAR_6;
 const struct net_device *VAR_7 = VAR_3->dev;

 VAR_6 = (struct ethhdr *)
     (((u8 *) VAR_4->hh_data) + (FUNC_0(sizeof(*VAR_6))));

 if (VAR_5 == FUNC_1(VAR_2))
  return -1;

 VAR_6->h_proto = VAR_5;
 FUNC_2(VAR_6->h_source, VAR_7->dev_addr, VAR_0);
 FUNC_2(VAR_6->h_dest, VAR_3->ha, VAR_0);
 VAR_4->hh_len = VAR_1;
 return 0;
}
