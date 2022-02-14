
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ca_name; } ;
typedef TYPE_1__ umad_ca_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(umad_ca_t * VAR_1)
{
 int VAR_2;

 FUNC_1("ca_name %s", VAR_1->ca_name);
 if (!VAR_1)
  return -VAR_0;

 if ((VAR_2 = FUNC_2(VAR_1)) < 0)
  return VAR_2;

 FUNC_0("releasing %s", VAR_1->ca_name);
 return 0;
}
