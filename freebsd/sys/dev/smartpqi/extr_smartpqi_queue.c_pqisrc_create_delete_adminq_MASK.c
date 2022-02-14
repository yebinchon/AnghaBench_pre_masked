
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_1__* pqi_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_6__ {int admin_q_config; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(pqisrc_softstate_t *VAR_7,
     uint32_t VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = VAR_5;



 FUNC_4(VAR_7, &VAR_7->pqi_reg->admin_q_config, VAR_2, FUNC_2(VAR_8));

 if (VAR_8 == VAR_3)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;


 FUNC_0((FUNC_3(VAR_7, &VAR_7->pqi_reg->admin_q_config, VAR_2) ==
    VAR_4), VAR_9);
 if (VAR_9 <= 0) {
  FUNC_1("Unable to create/delete admin queue pair\n");
  VAR_10 = VAR_6;
 }

 return VAR_10;
}
