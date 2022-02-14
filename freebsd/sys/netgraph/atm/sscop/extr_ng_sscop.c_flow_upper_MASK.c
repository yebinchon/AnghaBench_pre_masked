
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct priv {int flow; int sscop; } ;
struct ngm_queue_state {scalar_t__ current; scalar_t__ high_watermark; scalar_t__ max_queuelen_packets; } ;
struct TYPE_2__ {int arglen; int cmd; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef int node_p ;


 int VAR_0 ;



 struct priv* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct priv*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_2, struct ng_mesg *VAR_3)
{
 struct ngm_queue_state *VAR_4;
 struct priv *VAR_5 = FUNC_0(VAR_2);
 u_int VAR_6, VAR_7;

 if (VAR_3->header.arglen != sizeof(struct ngm_queue_state))
  return (VAR_0);
 VAR_4 = (struct ngm_queue_state *)VAR_3->data;

 switch (VAR_3->header.cmd) {

   case 130:
  if (VAR_5->flow) {
   FUNC_1(VAR_5, VAR_1, (VAR_5->sscop, VAR_5,
       "flow control stopped"));
   VAR_5->flow = 0;
  }
  break;

   case 129:
  VAR_6 = FUNC_2(VAR_5->sscop, 0);
  VAR_7 = VAR_4->max_queuelen_packets - VAR_4->current;
  if (VAR_7 > VAR_6) {
   FUNC_1(VAR_5, VAR_1, (VAR_5->sscop, VAR_5,
       "flow control opened window by %u messages",
       VAR_7 - VAR_6));
   (void)FUNC_2(VAR_5->sscop, VAR_7 - VAR_6);
  }
  VAR_5->flow = 1;
  break;

   case 128:
  if (VAR_4->high_watermark <= VAR_4->current)
   break;
  VAR_6 = FUNC_2(VAR_5->sscop, 0);
  if (VAR_5->flow)
   VAR_7 = VAR_4->max_queuelen_packets - VAR_4->current;
  else
   VAR_7 = VAR_4->high_watermark - VAR_4->current;
  if (VAR_7 > VAR_6) {
   FUNC_1(VAR_5, VAR_1, (VAR_5->sscop, VAR_5,
       "flow control opened window by %u messages",
       VAR_7 - VAR_6));
   (void)FUNC_2(VAR_5->sscop, VAR_7 - VAR_6);
  }
  VAR_5->flow = 1;
  break;

   default:
  return (VAR_0);
 }
 return (0);
}
