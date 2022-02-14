
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int const**,size_t*,int const*) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;

void FUNC_2(const u8 *VAR_4, size_t VAR_5,
         const u8 *VAR_6, const u8 *VAR_7, u8 *VAR_8)
{
 const u8 *VAR_9[3];
 size_t VAR_10[3];

 VAR_9[0] = VAR_4;
 VAR_10[0] = VAR_5;
 VAR_9[1] = VAR_6;
 VAR_10[1] = VAR_1;
 VAR_9[2] = VAR_7;
 VAR_10[2] = VAR_0;


 FUNC_0(3, VAR_9, VAR_10, VAR_8);
 FUNC_1(VAR_3, "EAP-AKA: IK", VAR_6, VAR_1);
 FUNC_1(VAR_3, "EAP-AKA: CK", VAR_7, VAR_0);
 FUNC_1(VAR_3, "EAP-AKA: MK", VAR_8, VAR_2);
}
