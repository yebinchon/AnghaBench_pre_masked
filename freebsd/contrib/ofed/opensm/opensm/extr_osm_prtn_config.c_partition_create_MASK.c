
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ sl; int FlowLabel; int TClass; scalar_t__ Q_Key; int rate; int mtu; } ;
struct TYPE_12__ {int * raw; } ;
struct precreate_mgroup {TYPE_2__ flags; TYPE_6__ mgid; } ;
struct TYPE_9__ {scalar_t__ sl; int FlowLabel; int TClass; scalar_t__ Q_Key; int rate; int mtu; } ;
struct part_conf {TYPE_3__ flags; TYPE_4__* p_prtn; scalar_t__ is_ipoib; int p_log; TYPE_5__* p_subn; } ;
typedef int pkey ;
typedef int ib_net16_t ;
typedef int broadcast_mgroup ;
struct TYPE_7__ {int qos; } ;
struct TYPE_11__ {TYPE_1__ opt; } ;
struct TYPE_10__ {int pkey; scalar_t__ sl; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,char*,scalar_t__,scalar_t__,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct part_conf*,struct precreate_mgroup*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (struct precreate_mgroup*,int ,int) ;
 TYPE_6__ VAR_3 ;
 TYPE_4__* FUNC_7 (int ,TYPE_5__*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_9(unsigned VAR_4, struct part_conf *VAR_5,
       char *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9)
{
 ib_net16_t VAR_10;

 if (!VAR_7 && VAR_6 && FUNC_4(*VAR_6)) {
  VAR_7 = VAR_6;
  VAR_6 = ((void*)0);
 }

 if (VAR_7) {
  char *VAR_11;

  VAR_10 = FUNC_3((uint16_t)FUNC_8(VAR_7, &VAR_11, 0));
  if (VAR_11 == VAR_7 || *VAR_11)
   return -1;
 } else
  VAR_10 = 0;

 VAR_5->p_prtn = FUNC_7(VAR_5->p_log, VAR_5->p_subn,
      VAR_6, VAR_10);
 if (!VAR_5->p_prtn)
  return -1;

 if (!VAR_5->p_subn->opt.qos && VAR_5->flags.sl != VAR_0) {
  FUNC_1(VAR_5->p_log, VAR_2, "Overriding SL %d"
   " to default SL %d on partition %s"
   " as QoS is not enabled.\n",
   VAR_5->flags.sl, VAR_0, VAR_6);
  VAR_5->flags.sl = VAR_0;
 }
 VAR_5->p_prtn->sl = (uint8_t) VAR_5->flags.sl;

 if (VAR_5->is_ipoib) {
  struct precreate_mgroup VAR_12;
  FUNC_6(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.mgid = VAR_3;
  VAR_10 = FUNC_0(0x8000) | VAR_5->p_prtn->pkey;
  FUNC_5(&VAR_12.mgid.raw[4], &VAR_10 , sizeof(VAR_10));
  VAR_12.flags.mtu = VAR_5->flags.mtu;
  VAR_12.flags.rate = VAR_5->flags.rate;
  VAR_12.flags.sl = VAR_5->flags.sl;
  VAR_12.flags.Q_Key = VAR_5->flags.Q_Key ?
      VAR_5->flags.Q_Key :
      VAR_1;
  VAR_12.flags.TClass = VAR_5->flags.TClass;
  VAR_12.flags.FlowLabel = VAR_5->flags.FlowLabel;
  FUNC_2(VAR_5, &VAR_12);
 }

 return 0;
}
