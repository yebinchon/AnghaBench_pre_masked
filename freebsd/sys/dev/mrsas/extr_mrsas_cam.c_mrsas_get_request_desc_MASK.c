
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct mrsas_softc {int max_fw_cmds; int * req_desc; } ;
typedef int MRSAS_REQUEST_DESCRIPTOR_UNION ;


 int FUNC_0 (int,char*) ;

MRSAS_REQUEST_DESCRIPTOR_UNION *
FUNC_1(struct mrsas_softc *VAR_0, u_int16_t VAR_1)
{
 u_int8_t *VAR_2;

 FUNC_0(VAR_1 < VAR_0->max_fw_cmds, ("req_desc is out of range"));
 VAR_2 = VAR_0->req_desc + sizeof(MRSAS_REQUEST_DESCRIPTOR_UNION) * VAR_1;

 return (MRSAS_REQUEST_DESCRIPTOR_UNION *) VAR_2;
}
