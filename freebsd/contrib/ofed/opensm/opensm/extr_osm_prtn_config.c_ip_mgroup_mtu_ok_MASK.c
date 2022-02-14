
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int mtu; } ;
struct TYPE_7__ {int raw; } ;
struct precreate_mgroup {TYPE_4__ flags; TYPE_3__ mgid; } ;
struct TYPE_6__ {int mtu; } ;
struct part_conf {TYPE_2__ flags; TYPE_1__* p_prtn; int p_log; } ;
typedef int boolean_t ;
struct TYPE_5__ {int name; int pkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static inline boolean_t FUNC_3(struct part_conf *VAR_5,
    struct precreate_mgroup *VAR_6)
{
 char VAR_7[VAR_2];

 if (VAR_6->flags.mtu == VAR_5->flags.mtu)
  return (VAR_4);

 FUNC_0(VAR_5->p_log, VAR_3,
  "IP MC group (%s) specified with invalid mtu (%d): "
  "partition pkey = 0x%04x (%s) "
  "[Partition broadcast group mtu = %d]\n",
  FUNC_2(VAR_0, VAR_6->mgid.raw, VAR_7, sizeof VAR_7),
  VAR_6->flags.mtu, FUNC_1(VAR_5->p_prtn->pkey),
  VAR_5->p_prtn->name, VAR_5->flags.mtu);
 return (VAR_1);
}
