
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sm_lid; int sm_sl; } ;
typedef TYPE_1__ umad_port_t ;
struct ibmad_port {int portnum; int ca_name; } ;
struct TYPE_9__ {int sl; } ;
typedef TYPE_2__ ib_portid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(ib_portid_t * VAR_2, int VAR_3,
    const struct ibmad_port *VAR_4)
{
 umad_port_t VAR_5;
 int VAR_6;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_6 = FUNC_3(VAR_4->ca_name, VAR_4->portnum, &VAR_5);
 if (VAR_6)
  return -1;

 if (!FUNC_0(VAR_5.sm_lid)) {
  VAR_1 = VAR_0;
  return -1;
 }
 VAR_2->sl = VAR_5.sm_sl;

 VAR_6 = FUNC_1(VAR_2, VAR_5.sm_lid, 0, 0);
 FUNC_4(&VAR_5);
 return VAR_6;
}
