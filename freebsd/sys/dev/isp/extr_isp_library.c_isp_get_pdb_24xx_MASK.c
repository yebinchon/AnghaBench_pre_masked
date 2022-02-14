
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * pdb_reserved1; int * pdb_portname; int * pdb_nodename; int pdb_prli_svc3; int pdb_prli_svc0; int pdb_reserved0; int pdb_rcv_dsize; int pdb_handle; int pdb_retry_timer; int * pdb_portid_bits; int * pdb_hardaddr_bits; int pdb_laststate; int pdb_curstate; int pdb_flags; } ;
typedef TYPE_1__ isp_pdb_24xx_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(ispsoftc_t *VAR_0, isp_pdb_24xx_t *VAR_1, isp_pdb_24xx_t *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0, &VAR_1->pdb_flags, VAR_2->pdb_flags);
        FUNC_1(VAR_0, &VAR_1->pdb_curstate, VAR_2->pdb_curstate);
        FUNC_1(VAR_0, &VAR_1->pdb_laststate, VAR_2->pdb_laststate);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_hardaddr_bits[VAR_3], VAR_2->pdb_hardaddr_bits[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_portid_bits[VAR_3], VAR_2->pdb_portid_bits[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->pdb_retry_timer, VAR_2->pdb_retry_timer);
 FUNC_0(VAR_0, &VAR_1->pdb_handle, VAR_2->pdb_handle);
 FUNC_0(VAR_0, &VAR_1->pdb_rcv_dsize, VAR_2->pdb_rcv_dsize);
 FUNC_0(VAR_0, &VAR_1->pdb_reserved0, VAR_2->pdb_reserved0);
 FUNC_0(VAR_0, &VAR_1->pdb_prli_svc0, VAR_2->pdb_prli_svc0);
 FUNC_0(VAR_0, &VAR_1->pdb_prli_svc3, VAR_2->pdb_prli_svc3);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_nodename[VAR_3], VAR_2->pdb_nodename[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_portname[VAR_3], VAR_2->pdb_portname[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 24; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->pdb_reserved1[VAR_3], VAR_2->pdb_reserved1[VAR_3]);
 }
}
