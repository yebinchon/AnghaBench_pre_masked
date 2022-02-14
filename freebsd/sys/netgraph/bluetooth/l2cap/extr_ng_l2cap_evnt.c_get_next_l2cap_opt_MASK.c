
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef TYPE_3__* ng_l2cap_cfg_opt_val_p ;
typedef TYPE_4__* ng_l2cap_cfg_opt_p ;
typedef int caddr_t ;
struct TYPE_10__ {int type; int length; } ;
struct TYPE_8__ {void* delay_variation; void* latency; void* peak_bandwidth; void* token_bucket_size; void* token_rate; } ;
struct TYPE_9__ {TYPE_2__ flow; void* flush_timo; void* mtu; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct mbuf*,int,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct mbuf *VAR_4, int *VAR_5, ng_l2cap_cfg_opt_p VAR_6,
  ng_l2cap_cfg_opt_val_p VAR_7)
{
 int VAR_8, VAR_9 = VAR_4->m_pkthdr.len - (*VAR_5);

 if (VAR_9 == 0)
  return (0);
 if (VAR_9 < 0 || VAR_9 < sizeof(*VAR_6))
  return (-1);

 FUNC_3(VAR_4, *VAR_5, sizeof(*VAR_6), (caddr_t) VAR_6);
 *VAR_5 += sizeof(*VAR_6);
 VAR_9 -= sizeof(*VAR_6);

 VAR_8 = FUNC_0(VAR_6->type);
 VAR_6->type &= VAR_1;

 switch (VAR_6->type) {
 case 129:
  if (VAR_6->length != VAR_2 || VAR_9 < VAR_6->length)
   return (-2);

  FUNC_3(VAR_4, *VAR_5, VAR_2, (caddr_t) VAR_7);
  VAR_7->mtu = FUNC_1(VAR_7->mtu);
  *VAR_5 += VAR_2;
  break;

 case 130:
  if (VAR_6->length != VAR_0 ||
      VAR_9 < VAR_6->length)
   return (-2);

  FUNC_3(VAR_4, *VAR_5, VAR_0, (caddr_t)VAR_7);
  VAR_7->flush_timo = FUNC_1(VAR_7->flush_timo);
  *VAR_5 += VAR_0;
  break;

 case 128:
  if (VAR_6->length != VAR_3 || VAR_9 < VAR_6->length)
   return (-2);

  FUNC_3(VAR_4, *VAR_5, VAR_3, (caddr_t) VAR_7);
  VAR_7->flow.token_rate = FUNC_2(VAR_7->flow.token_rate);
  VAR_7->flow.token_bucket_size =
    FUNC_2(VAR_7->flow.token_bucket_size);
  VAR_7->flow.peak_bandwidth = FUNC_2(VAR_7->flow.peak_bandwidth);
  VAR_7->flow.latency = FUNC_2(VAR_7->flow.latency);
  VAR_7->flow.delay_variation = FUNC_2(VAR_7->flow.delay_variation);
  *VAR_5 += VAR_3;
  break;

 default:
  if (VAR_8)
   *VAR_5 += VAR_6->length;
  else
   return (-3);
  break;
 }

 return (1);
}
