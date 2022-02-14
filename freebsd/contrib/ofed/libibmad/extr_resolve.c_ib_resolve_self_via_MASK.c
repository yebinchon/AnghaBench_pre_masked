
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct ibmad_port {int dummy; } ;
typedef int ibmad_gid_t ;
struct TYPE_4__ {int lid; int sl; int member_0; } ;
typedef TYPE_1__ ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int ,struct ibmad_port const*) ;

int FUNC_3(ib_portid_t * VAR_9, int *VAR_10, ibmad_gid_t * VAR_11,
   const struct ibmad_port *VAR_12)
{
 ib_portid_t VAR_13 = { 0 };
 uint8_t VAR_14[64];
 uint8_t VAR_15[64];
 uint64_t VAR_16, VAR_17;

 if (!FUNC_2(VAR_15, &VAR_13, VAR_0, 0, 0, VAR_12))
  return -1;

 if (!FUNC_2(VAR_14, &VAR_13, VAR_1, 0, 0, VAR_12))
  return -1;

 FUNC_0(VAR_14, VAR_7, &VAR_9->lid);
 FUNC_0(VAR_14, VAR_8, &VAR_9->sl);
 FUNC_0(VAR_14, VAR_6, &VAR_17);
 FUNC_0(VAR_15, VAR_5, &VAR_16);

 if (VAR_10)
  FUNC_0(VAR_15, VAR_4, VAR_10);
 if (VAR_11) {
  FUNC_1(*VAR_11, VAR_3, &VAR_17);
  FUNC_1(*VAR_11, VAR_2, &VAR_16);
 }
 return 0;
}
