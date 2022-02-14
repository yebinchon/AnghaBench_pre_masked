
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int * info; int base_lid; int portnum; TYPE_2__* node; int * ext_info; } ;
typedef TYPE_3__ ibnd_port_t ;
typedef int ib_portid_t ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__** ports; } ;
struct TYPE_5__ {int info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int,int,int ,int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,int,int*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(ib_portid_t * VAR_10, ibnd_port_t * VAR_11)
{
 char VAR_12[64], VAR_13[64];
 int VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint8_t *VAR_18;
 uint32_t VAR_19;

 VAR_14 = FUNC_3(VAR_11->info, 0, VAR_7);
 VAR_15 = FUNC_3(VAR_11->info, 0, VAR_5);
 VAR_16 = FUNC_3(VAR_11->ext_info, 0,
         VAR_1);

 if (VAR_11->node->type == VAR_2)
  VAR_18 = (uint8_t *)&VAR_11->node->ports[0]->info;
 else
  VAR_18 = (uint8_t *)&VAR_11->info;
 VAR_19 = FUNC_3(VAR_18, 0, VAR_3);
 if (VAR_19 & FUNC_0(VAR_4))
  VAR_17 = FUNC_3(VAR_11->info, 0, VAR_6);
 else
  VAR_17 = 0;
 FUNC_1
     ("portid %s portnum %d: base lid %d state %d physstate %d %s %s %s %s\n",
      FUNC_4(VAR_10), VAR_11->portnum, VAR_11->base_lid,
      FUNC_3(VAR_11->info, 0, VAR_9),
      FUNC_3(VAR_11->info, 0, VAR_8),
      FUNC_2(VAR_7, VAR_12, 64, &VAR_14),
      FUNC_2(VAR_5, VAR_13, 64, &VAR_15),
      (VAR_16 & VAR_0) ? "FDR10" : "",
      FUNC_2(VAR_6, VAR_13, 64, &VAR_17));
}
