
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ,int,int const**,size_t*,unsigned char*) ;
 int FUNC_1 (int const*,unsigned char*,size_t) ;
 int FUNC_2 (int const*,int ,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,int const*,int ) ;

void FUNC_5(const u8 *VAR_4, const u8 *VAR_5, size_t VAR_6, u8 *VAR_7,
       const u8 *VAR_8, size_t VAR_9)
{
 unsigned char VAR_10[VAR_3];
 const u8 *VAR_11[2];
 size_t VAR_12[2];

 VAR_11[0] = VAR_5;
 VAR_12[0] = VAR_6;
 VAR_11[1] = VAR_8;
 VAR_12[1] = VAR_9;


 FUNC_2(VAR_7, 0, VAR_1);
 FUNC_3(VAR_2, "EAP-SIM: Add MAC - msg", VAR_5, VAR_6);
 FUNC_3(VAR_2, "EAP-SIM: Add MAC - extra data",
      VAR_8, VAR_9);
 FUNC_4(VAR_2, "EAP-SIM: Add MAC - K_aut",
   VAR_4, VAR_0);
 FUNC_0(VAR_4, VAR_0, 2, VAR_11, VAR_12, VAR_10);
 FUNC_1(VAR_7, VAR_10, VAR_1);
 FUNC_3(VAR_2, "EAP-SIM: Add MAC: MAC",
      VAR_7, VAR_1);
}
