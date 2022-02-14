
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct icl_pdu {int dummy; } ;
struct icl_iser_pdu {struct ccb_scsiio* csio; } ;
struct icl_conn {int dummy; } ;
struct ccb_scsiio {int dummy; } ;


 struct icl_iser_pdu* FUNC_0 (struct icl_pdu*) ;

int
FUNC_1(struct icl_conn *VAR_0, struct icl_pdu *VAR_1,
       struct ccb_scsiio *VAR_2,
       uint32_t *VAR_3, void **VAR_4)
{
 struct icl_iser_pdu *VAR_5 = FUNC_0(VAR_1);

 *VAR_4 = VAR_1;
 VAR_5->csio = VAR_2;

 return (0);
}
