
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initial_tsn; int sinit_max_instreams; int sinit_num_ostreams; int peer_vtag; int peer_ttag; int my_vtag; int my_ttag; } ;
struct sctp_association {int state; TYPE_1__ c; int rwnd; } ;





__attribute__((used)) static void FUNC_0(struct sctp_association *VAR_0,
      const struct sctp_association *VAR_1)
{
 switch (VAR_1->state) {



 case 128:
  VAR_0->c.my_vtag = VAR_1->c.my_vtag;
  VAR_0->c.my_ttag = VAR_1->c.my_vtag;
  VAR_0->c.peer_ttag = 0;
  break;

 case 129:
  VAR_0->c.my_vtag = VAR_1->c.my_vtag;
  VAR_0->c.my_ttag = VAR_1->c.my_vtag;
  VAR_0->c.peer_ttag = VAR_1->c.peer_vtag;
  break;




 default:
  VAR_0->c.my_ttag = VAR_1->c.my_vtag;
  VAR_0->c.peer_ttag = VAR_1->c.peer_vtag;
  break;
 }





 VAR_0->rwnd = VAR_1->rwnd;
 VAR_0->c.sinit_num_ostreams = VAR_1->c.sinit_num_ostreams;
 VAR_0->c.sinit_max_instreams = VAR_1->c.sinit_max_instreams;
 VAR_0->c.initial_tsn = VAR_1->c.initial_tsn;
}
