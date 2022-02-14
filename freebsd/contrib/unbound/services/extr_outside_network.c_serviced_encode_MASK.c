
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serviced_query {scalar_t__ status; int dnssec; int addrlen; int addr; int opt_list; int qbuflen; int qbuf; TYPE_1__* outnet; int nocaps; } ;
struct edns_data {int edns_present; int bits; scalar_t__ udp_size; int opt_list; int edns_version; scalar_t__ ext_rcode; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int rnd; scalar_t__ use_caps_for_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct edns_data*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(struct serviced_query* VAR_7, sldns_buffer* VAR_8, int VAR_9)
{

 if(VAR_7->outnet->use_caps_for_id && !VAR_7->nocaps) {
  FUNC_3(VAR_7->outnet->rnd, VAR_7->qbuf, VAR_7->qbuflen);
 }

 FUNC_5(VAR_8);
 FUNC_8(VAR_8, 0);
 FUNC_7(VAR_8, VAR_7->qbuf, VAR_7->qbuflen);
 FUNC_6(VAR_8);
 if(VAR_9) {

  struct edns_data VAR_10;
  VAR_10.edns_present = 1;
  VAR_10.ext_rcode = 0;
  VAR_10.edns_version = VAR_2;
  VAR_10.opt_list = VAR_7->opt_list;
  if(VAR_7->status == VAR_6) {
   if(FUNC_1(&VAR_7->addr, VAR_7->addrlen)) {
    if(VAR_5 < VAR_1)
     VAR_10.udp_size = VAR_5;
    else VAR_10.udp_size = VAR_1;
   } else {
    if(VAR_4 < VAR_1)
     VAR_10.udp_size = VAR_4;
    else VAR_10.udp_size = VAR_1;
   }
  } else {
   VAR_10.udp_size = VAR_1;
  }
  VAR_10.bits = 0;
  if(VAR_7->dnssec & VAR_3)
   VAR_10.bits = VAR_3;
  if(VAR_7->dnssec & VAR_0)
   FUNC_0(FUNC_4(VAR_8));
  FUNC_2(VAR_8, &VAR_10);
 }
}
