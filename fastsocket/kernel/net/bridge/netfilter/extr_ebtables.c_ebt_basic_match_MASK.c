
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* br_port; } ;
struct ethhdr {scalar_t__ h_proto; int* h_source; int* h_dest; } ;
struct ebt_entry {int bitmask; scalar_t__ ethproto; int* sourcemac; int* sourcemsk; int* destmac; int* destmsk; int logical_out; int logical_in; int out; int in; } ;
struct TYPE_4__ {TYPE_1__* br; } ;
struct TYPE_3__ {struct net_device const* dev; } ;


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
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct net_device const*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct ebt_entry *VAR_11, struct ethhdr *VAR_12,
   const struct net_device *VAR_13, const struct net_device *VAR_14)
{
 int VAR_15, VAR_16;

 if (VAR_11->bitmask & VAR_0) {
  if (FUNC_0(FUNC_2(VAR_12->h_proto) >= 1536, VAR_7))
   return 1;
 } else if (!(VAR_11->bitmask & VAR_9) &&
    FUNC_0(VAR_11->ethproto != VAR_12->h_proto, VAR_7))
  return 1;

 if (FUNC_0(FUNC_1(VAR_11->in, VAR_13), VAR_3))
  return 1;
 if (FUNC_0(FUNC_1(VAR_11->out, VAR_14), VAR_6))
  return 1;
 if ((!VAR_13 || !VAR_13->br_port) ? 0 : FUNC_0(FUNC_1(
    VAR_11->logical_in, VAR_13->br_port->br->dev), VAR_4))
  return 1;
 if ((!VAR_14 || !VAR_14->br_port) ? 0 : FUNC_0(FUNC_1(
    VAR_11->logical_out, VAR_14->br_port->br->dev), VAR_5))
  return 1;

 if (VAR_11->bitmask & VAR_10) {
  VAR_15 = 0;
  for (VAR_16 = 0; VAR_16 < 6; VAR_16++)
   VAR_15 |= (VAR_12->h_source[VAR_16] ^ VAR_11->sourcemac[VAR_16]) &
      VAR_11->sourcemsk[VAR_16];
  if (FUNC_0(VAR_15 != 0, VAR_8) )
   return 1;
 }
 if (VAR_11->bitmask & VAR_1) {
  VAR_15 = 0;
  for (VAR_16 = 0; VAR_16 < 6; VAR_16++)
   VAR_15 |= (VAR_12->h_dest[VAR_16] ^ VAR_11->destmac[VAR_16]) &
      VAR_11->destmsk[VAR_16];
  if (FUNC_0(VAR_15 != 0, VAR_2) )
   return 1;
 }
 return 0;
}
