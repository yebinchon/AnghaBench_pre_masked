
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sm_sl; int sm_lid; } ;
typedef TYPE_1__ umad_port_t ;
typedef int uint8_t ;
struct TYPE_8__ {int sl; int lid; } ;
typedef TYPE_2__ ib_portid_t ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (char*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(char *VAR_0, uint8_t VAR_1, ib_portid_t *VAR_2)
{
 umad_port_t VAR_3;
 int VAR_4;

 if (!VAR_2)
  return (-1);

 if ((VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3)) < 0)
  return VAR_4;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->lid = VAR_3.sm_lid;
 VAR_2->sl = VAR_3.sm_sl;

 FUNC_2(&VAR_3);

 return 0;
}
