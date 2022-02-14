
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int tsflag; int tnl_csum; int transport_csum; int ip_csum; } ;
union octeon_packet_params {scalar_t__ pkt_params32; TYPE_6__ s; } ;
struct TYPE_12__ {int irh; int pki_ih3; int ih3; } ;
union lio_instr_64B {TYPE_5__ cmd3; } ;
struct TYPE_8__ {int gatherptrs; int datasize; } ;
struct TYPE_14__ {size_t iq_no; int timestamp; int tnl_csum; int transport_csum; int ip_csum; TYPE_1__ u; int gather; } ;
union lio_cmd_setup {TYPE_7__ s; } ;
typedef scalar_t__ uint32_t ;
struct octeon_instr_pki_ih3 {int w; int utt; int pm; int sl; int qpg; int tagtype; scalar_t__ tag; int uqpg; scalar_t__ utag; scalar_t__ raw; } ;
struct octeon_instr_irh {scalar_t__ ossp; int subcode; int opcode; } ;
struct octeon_instr_ih3 {int gather; int dlengsz; int fsz; int pkind; } ;
struct octeon_device {TYPE_4__** instr_queue; } ;
struct TYPE_9__ {int qpg; scalar_t__ port; int use_qpg; int pkind; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct TYPE_11__ {TYPE_3__ txpciq; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union lio_instr_64B*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct octeon_device *VAR_4, union lio_instr_64B *VAR_5,
         union lio_cmd_setup *VAR_6, uint32_t VAR_7)
{
 union octeon_packet_params VAR_8;
 struct octeon_instr_irh *VAR_9;
 struct octeon_instr_ih3 *VAR_10;
 struct octeon_instr_pki_ih3 *VAR_11;
 int VAR_12;

 FUNC_1(VAR_5, sizeof(union lio_instr_64B));

 VAR_10 = (struct octeon_instr_ih3 *)&VAR_5->cmd3.ih3;
 VAR_11 = (struct octeon_instr_pki_ih3 *)&VAR_5->cmd3.pki_ih3;





 VAR_10->pkind = VAR_4->instr_queue[VAR_6->s.iq_no]->txpciq.s.pkind;

 VAR_10->fsz = VAR_3;

 if (!VAR_6->s.gather) {
  VAR_10->dlengsz = VAR_6->s.u.datasize;
 } else {
  VAR_10->gather = 1;
  VAR_10->dlengsz = VAR_6->s.u.gatherptrs;
 }

 VAR_11->w = 1;
 VAR_11->raw = 0;
 VAR_11->utag = 0;
 VAR_11->utt = 1;
 VAR_11->uqpg = VAR_4->instr_queue[VAR_6->s.iq_no]->txpciq.s.use_qpg;

 VAR_12 = (int)VAR_4->instr_queue[VAR_6->s.iq_no]->txpciq.s.port;

 if (VAR_7)
  VAR_11->tag = VAR_7;
 else
  VAR_11->tag = FUNC_0(VAR_12);

 VAR_11->tagtype = VAR_2;
 VAR_11->qpg = VAR_4->instr_queue[VAR_6->s.iq_no]->txpciq.s.qpg;
 VAR_11->pm = 0x0;

 VAR_11->sl = 32;

 VAR_9 = (struct octeon_instr_irh *)&VAR_5->cmd3.irh;

 VAR_9->opcode = VAR_0;
 VAR_9->subcode = VAR_1;

 VAR_8.pkt_params32 = 0;

 VAR_8.s.ip_csum = VAR_6->s.ip_csum;
 VAR_8.s.transport_csum = VAR_6->s.transport_csum;
 VAR_8.s.tnl_csum = VAR_6->s.tnl_csum;
 VAR_8.s.tsflag = VAR_6->s.timestamp;

 VAR_9->ossp = VAR_8.pkt_params32;
}
