
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct urndis_softc {int dummy; } ;
struct rndis_halt_req {void* rm_rid; void* rm_len; void* rm_type; } ;
typedef int msg ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct urndis_softc*,struct rndis_halt_req*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct urndis_softc *VAR_2)
{
 struct rndis_halt_req VAR_3;
 uint32_t VAR_4;

 VAR_3.rm_type = FUNC_1(VAR_0);
 VAR_3.rm_len = FUNC_1(sizeof(VAR_3));
 VAR_3.rm_rid = 0;

 FUNC_0("type %u len %u rid %u\n",
     FUNC_2(VAR_3.rm_type),
     FUNC_2(VAR_3.rm_len),
     FUNC_2(VAR_3.rm_rid));

 VAR_4 = FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3));

 if (VAR_4 != VAR_1)
  FUNC_0("halt failed\n");

 return (VAR_4);
}
