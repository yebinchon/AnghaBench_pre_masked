
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* ioa_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_6__ {int host_to_ioa_db; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_5(pqisrc_softstate_t *VAR_6, uint32_t VAR_7)
{
 int VAR_8 = VAR_3;
 uint32_t VAR_9;
 uint32_t VAR_10 = 0;

 FUNC_1("IN\n");

 while (1) {
  VAR_9 = FUNC_4(VAR_6, &VAR_6->ioa_reg->host_to_ioa_db,
    VAR_0);
  if ((VAR_9 & VAR_7) == 0)
   break;
  if (FUNC_2(VAR_6) & VAR_1) {
   FUNC_0("controller kernel panic\n");
   VAR_8 = VAR_2;
   break;
  }
  if (VAR_10++ == VAR_5) {
   FUNC_0("door-bell reg bit 0x%x not cleared\n", VAR_7);
   VAR_8 = VAR_4;
   break;
  }
  FUNC_3(500);
 }

 FUNC_1("OUT\n");

 return VAR_8;
}
