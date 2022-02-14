
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int request ;
typedef int raid_path_error_info_elem_t ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int *,int,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(pqisrc_softstate_t *VAR_2,
 uint8_t *VAR_3, uint16_t VAR_4, uint8_t *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_0;
 pqisrc_raid_req_t VAR_8;
 raid_path_error_info_elem_t VAR_9;

 FUNC_0("IN\n");

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_7 = FUNC_2(VAR_2, &VAR_8, VAR_5, VAR_6,
        VAR_1, VAR_4, VAR_3, &VAR_9);

 FUNC_0("OUT\n");
 return VAR_7;
}
