
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int qla_host_t ;
typedef int q8_rdmwr_hdr_t ;
struct TYPE_4__ {int wr_addr; int rd_addr; } ;
typedef TYPE_1__ q8_rdmwr_e_t ;
struct TYPE_5__ {int opcount; scalar_t__ delay_to; } ;
typedef TYPE_2__ q8_ce_hdr_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_0, q8_ce_hdr_t *VAR_1)
{
 int VAR_2;
 q8_rdmwr_hdr_t *VAR_3;
 q8_rdmwr_e_t *VAR_4;

 VAR_3 = (q8_rdmwr_hdr_t *)((uint8_t *)VAR_1 +
      sizeof (q8_ce_hdr_t));
 VAR_4 = (q8_rdmwr_e_t *)((uint8_t *)VAR_3 +
     sizeof(q8_rdmwr_hdr_t));

 for (VAR_2 = 0; VAR_2 < VAR_1->opcount; VAR_2++, VAR_4++) {

  if (FUNC_1(VAR_0, VAR_4->rd_addr, VAR_4->wr_addr,
   VAR_3)) {
   return -1;
  }
  if (VAR_1->delay_to) {
   FUNC_0(VAR_1->delay_to);
  }
 }
 return 0;
}
