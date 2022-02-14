
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int request ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,void*,size_t,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(pqisrc_softstate_t *VAR_1, uint8_t VAR_2,
 void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 pqisrc_raid_req_t VAR_6;

 FUNC_0("IN\n");

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_5 = FUNC_2(VAR_1, &VAR_6, VAR_3,
    VAR_4, VAR_2, 0, (uint8_t *)VAR_0, ((void*)0));

 FUNC_0("OUT\n");

 return VAR_5;
}
