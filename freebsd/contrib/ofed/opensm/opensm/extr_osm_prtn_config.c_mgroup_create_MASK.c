
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int* raw; } ;
struct TYPE_9__ {scalar_t__ Q_Key; int scope_mask; int FlowLabel; int sl; int rate; int mtu; } ;
struct precreate_mgroup {TYPE_4__ mgid; TYPE_3__ flags; } ;
struct TYPE_7__ {scalar_t__ Q_Key; int scope_mask; int FlowLabel; int sl; int rate; int mtu; } ;
struct part_conf {int p_subn; TYPE_2__* p_prtn; int p_log; TYPE_1__ flags; } ;
typedef int pkey ;
typedef int mgroup ;
typedef int ib_net16_t ;
struct TYPE_8__ {int pkey; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*,unsigned int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct part_conf*,struct precreate_mgroup*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,TYPE_4__*) ;
 int FUNC_4 (struct part_conf*,struct precreate_mgroup*) ;
 int FUNC_5 (struct part_conf*,struct precreate_mgroup*) ;
 int FUNC_6 (struct part_conf*,struct precreate_mgroup*) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (struct precreate_mgroup*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ,struct precreate_mgroup*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_12(char *VAR_3, char *VAR_4, unsigned VAR_5, struct part_conf *VAR_6)
{
 int VAR_7 = 0;
 struct precreate_mgroup VAR_8;

 FUNC_8(&VAR_8, 0, sizeof(VAR_8));

 if (FUNC_3(VAR_0, VAR_4, &VAR_8.mgid) != 1
     || VAR_8.mgid.raw[0] != 0xff) {
  FUNC_0(VAR_6->p_log, VAR_2,
   "PARSE ERROR partition conf file line %d: "
   "mgid \"%s\": gid is not multicast\n", VAR_5, VAR_4);
  return 0;
 }


 VAR_8.flags.mtu = VAR_6->flags.mtu;
 VAR_8.flags.rate = VAR_6->flags.rate;
 VAR_8.flags.sl = VAR_6->flags.sl;
 VAR_8.flags.Q_Key = VAR_6->flags.Q_Key;
 VAR_8.flags.FlowLabel = VAR_6->flags.FlowLabel;
 VAR_8.flags.scope_mask = VAR_6->flags.scope_mask;


 VAR_7 = FUNC_11(VAR_6->p_log, &VAR_8, VAR_3, VAR_5);


 if (FUNC_9(&VAR_8.mgid)) {
  ib_net16_t VAR_9 = VAR_6->p_prtn->pkey | FUNC_2(0x8000);

  if (!FUNC_5(VAR_6, &VAR_8)
      || !FUNC_6(VAR_6, &VAR_8)
      || !FUNC_4(VAR_6, &VAR_8))
   goto error;


  FUNC_7(&VAR_8.mgid.raw[4], &VAR_9, sizeof(VAR_9));

  if (VAR_8.flags.Q_Key == 0)
   VAR_8.flags.Q_Key = VAR_1;
 }


 if (FUNC_10(VAR_6->p_subn, &VAR_8.mgid))
  goto error;


 FUNC_1(VAR_6, &VAR_8);

error:
 return VAR_7;
}
