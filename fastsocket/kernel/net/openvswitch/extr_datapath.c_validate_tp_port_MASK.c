
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_9__ {TYPE_5__ tp; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_7__ {TYPE_1__ tp; } ;
struct sw_flow_key {TYPE_4__ ipv6; TYPE_3__ eth; TYPE_2__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct sw_flow_key *VAR_3)
{
 if (VAR_3->eth.type == FUNC_0(VAR_1)) {
  if (VAR_3->ipv4.tp.src || VAR_3->ipv4.tp.dst)
   return 0;
 } else if (VAR_3->eth.type == FUNC_0(VAR_2)) {
  if (VAR_3->ipv6.tp.src || VAR_3->ipv6.tp.dst)
   return 0;
 }

 return -VAR_0;
}
