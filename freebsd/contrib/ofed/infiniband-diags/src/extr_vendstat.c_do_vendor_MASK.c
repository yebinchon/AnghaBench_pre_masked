
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ibmad_port {int dummy; } ;
struct TYPE_4__ {int mgmt_class; int method; int attrid; int mod; int timeout; } ;
typedef TYPE_1__ ib_vendor_call_t ;
typedef int ib_portid_t ;
typedef int call ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (void*,int *,TYPE_1__*,struct ibmad_port*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(ib_portid_t *VAR_2, struct ibmad_port *VAR_3,
       uint8_t VAR_4, uint8_t VAR_5, uint16_t VAR_6,
       uint32_t VAR_7, void *VAR_8)
{
 ib_vendor_call_t VAR_9;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.mgmt_class = VAR_4;
 VAR_9.method = VAR_5;
 VAR_9.timeout = VAR_0;
 VAR_9.attrid = VAR_6;
 VAR_9.mod = VAR_7;

 if (!FUNC_1(VAR_8, VAR_2, &VAR_9, VAR_3)) {
  FUNC_0(VAR_1,"vendstat: method %u, attribute %u failure\n", VAR_5, VAR_6);
  return -1;
 }
 return 0;
}
