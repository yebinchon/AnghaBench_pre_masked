
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int portnum; int port_guid; int gid_prefix; int sm_sl; int base_lid; } ;
typedef TYPE_1__ umad_port_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_11__ {int sl; int lid; } ;
typedef TYPE_2__ ibmad_gid_t ;
typedef TYPE_2__ ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(char *VAR_2, uint8_t VAR_3, ib_portid_t *VAR_4,
   int *VAR_5, ibmad_gid_t *VAR_6)
{
 umad_port_t VAR_7;
 uint64_t VAR_8, VAR_9;
 int VAR_10;

 if (!(VAR_4 || VAR_5 || VAR_6))
  return (-1);

 if ((VAR_10 = FUNC_3(VAR_2, VAR_3, &VAR_7)) < 0)
  return VAR_10;

 if (VAR_4) {
  FUNC_2(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->lid = VAR_7.base_lid;
  VAR_4->sl = VAR_7.sm_sl;
 }
 if (VAR_5)
  *VAR_5 = VAR_7.portnum;
 if (VAR_6) {
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));
  VAR_8 = FUNC_0(VAR_7.gid_prefix);
  VAR_9 = FUNC_0(VAR_7.port_guid);
  FUNC_1(*VAR_6, VAR_1, &VAR_8);
  FUNC_1(*VAR_6, VAR_0, &VAR_9);
 }

 FUNC_4(&VAR_7);

 return 0;
}
