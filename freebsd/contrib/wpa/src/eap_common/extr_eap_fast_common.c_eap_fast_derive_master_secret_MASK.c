
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int seed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int const*,int ,char*,int *,int,int *,int ) ;
 int FUNC_2 (int ,char*,int const*,int) ;
 int FUNC_3 (int ,char*,int *,int ) ;

void FUNC_4(const u8 *VAR_4, const u8 *VAR_5,
       const u8 *VAR_6, u8 *VAR_7)
{


 u8 VAR_8[2 * 32];

 FUNC_2(VAR_1, "EAP-FAST: client_random",
      VAR_6, 32);
 FUNC_2(VAR_1, "EAP-FAST: server_random",
      VAR_5, 32);






 FUNC_0(VAR_8, VAR_5, 32);
 FUNC_0(VAR_8 + 32, VAR_6, 32);
 FUNC_1(VAR_4, VAR_0,
     "PAC to master secret label hash",
     VAR_8, sizeof(VAR_8), VAR_7, 48);

 FUNC_3(VAR_1, "EAP-FAST: master_secret",
   VAR_7, 48);
}
