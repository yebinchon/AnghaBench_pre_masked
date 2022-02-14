
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_4__ {int range; int value; } ;
struct TYPE_5__ {TYPE_3__ verdict; TYPE_1__ mode; } ;
struct ipq_peer_msg {TYPE_2__ msg; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct ipq_peer_msg *VAR_2,
   unsigned char VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 < sizeof(*VAR_2))
  return -VAR_0;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_0(VAR_2->msg.mode.value,
          VAR_2->msg.mode.range);
  break;

 case 128:
  if (VAR_2->msg.verdict.value > VAR_1)
   VAR_5 = -VAR_0;
  else
   VAR_5 = FUNC_1(&VAR_2->msg.verdict,
       VAR_4 - sizeof(*VAR_2));
   break;
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
