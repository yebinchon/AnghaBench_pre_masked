
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ibv_gid {scalar_t__ raw; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct peer_address {int size; int address; } ;
struct in6_addr {int dummy; } ;
struct ibv_context {int dummy; } ;
struct TYPE_3__ {scalar_t__* raw; } ;
struct TYPE_4__ {TYPE_1__ dgid; int sgid_index; } ;
struct ibv_ah_attr {TYPE_2__ grh; int port_num; } ;
struct get_neigh_handler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,struct peer_address*) ;
 int FUNC_1 (struct ibv_context*,int ,int ,union ibv_gid*) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (struct get_neigh_handler*) ;
 int FUNC_4 (struct get_neigh_handler*,int *,int) ;
 int FUNC_5 (struct get_neigh_handler*) ;
 int FUNC_6 (struct get_neigh_handler*) ;
 int FUNC_7 (struct get_neigh_handler*,int ) ;
 scalar_t__ FUNC_8 (struct get_neigh_handler*,int,int ,int ) ;
 int FUNC_9 (struct get_neigh_handler*,int) ;
 scalar_t__ FUNC_10 (struct get_neigh_handler*,int,int ,int ) ;
 int FUNC_11 (struct get_neigh_handler*,int) ;
 scalar_t__ FUNC_12 (struct get_neigh_handler*) ;

int FUNC_13(struct ibv_context *VAR_7,
    struct ibv_ah_attr *VAR_8,
    uint8_t VAR_9[VAR_5],
    uint16_t *VAR_10)
{

 int VAR_11;
 int VAR_12;
 int VAR_13;
 struct get_neigh_handler VAR_14;
 union ibv_gid VAR_15;
 int VAR_16;
 struct peer_address VAR_17;
 struct peer_address VAR_18;
 uint16_t VAR_19;
 int VAR_20 = -VAR_3;
 int VAR_21;

 VAR_21 = FUNC_1(VAR_7, VAR_8->port_num,
       VAR_8->grh.sgid_index, &VAR_15);

 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_7(&VAR_14,
       VAR_6);

 if (VAR_21)
  return VAR_21;

 VAR_11 = FUNC_2((struct in6_addr *)VAR_8->grh.dgid.raw) ?
   VAR_0 : VAR_1;
 VAR_12 = FUNC_2((struct in6_addr *)VAR_15.raw) ?
   VAR_0 : VAR_1;

 if (FUNC_0(VAR_11, VAR_8->grh.dgid.raw, &VAR_18))
  goto free_resources;

 if (FUNC_0(VAR_12, &VAR_15.raw, &VAR_17))
  goto free_resources;

 if (FUNC_8(&VAR_14, VAR_11, VAR_18.address,
     VAR_18.size))
  goto free_resources;

 if (FUNC_10(&VAR_14, VAR_12, VAR_17.address,
     VAR_17.size))
  goto free_resources;

 VAR_13 = FUNC_5(&VAR_14);

 if (VAR_13 > 0)
  FUNC_9(&VAR_14, VAR_13);
 else
  goto free_resources;

 VAR_20 = -VAR_2;


 if (FUNC_12(&VAR_14))
  goto free_resources;

 VAR_19 = FUNC_6(&VAR_14);

 if (VAR_19 <= 0xfff)
  FUNC_11(&VAR_14, VAR_19);


 VAR_16 = FUNC_4(&VAR_14,
     VAR_9,
     sizeof(uint8_t) * VAR_5);

 if (VAR_16 <= 0)
  goto free_resources;

 *VAR_10 = VAR_19;

 VAR_20 = 0;

free_resources:
 FUNC_3(&VAR_14);

 return VAR_20;



}
