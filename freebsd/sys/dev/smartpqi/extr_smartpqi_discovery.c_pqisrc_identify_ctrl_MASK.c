
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int request ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;
typedef int bmic_ident_ctrl_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int *,int,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(pqisrc_softstate_t *VAR_3,
 bmic_ident_ctrl_t *VAR_4)
{
 int VAR_5 = VAR_1;
 pqisrc_raid_req_t VAR_6;

 FUNC_0("IN\n");

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_5 = FUNC_2(VAR_3, &VAR_6, VAR_4, sizeof(*VAR_4),
    VAR_0, 0, (uint8_t *)VAR_2, ((void*)0));
 FUNC_0("OUT\n");

 return VAR_5;
}
