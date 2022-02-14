
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_2 (int ,char*,unsigned char*,int ) ;

void FUNC_3(const u8 *VAR_4, size_t VAR_5,
         const u8 *VAR_6, u16 VAR_7,
         const u8 *VAR_8, size_t VAR_9,
         int VAR_10, const u8 *VAR_11, u8 *VAR_12)
{
 u8 VAR_13[2];
 const unsigned char *VAR_14[5];
 size_t VAR_15[5];

 VAR_14[0] = VAR_4;
 VAR_15[0] = VAR_5;
 VAR_14[1] = VAR_11;
 VAR_15[1] = VAR_10 * VAR_0;
 VAR_14[2] = VAR_6;
 VAR_15[2] = VAR_2;
 VAR_14[3] = VAR_8;
 VAR_15[3] = VAR_9;
 VAR_14[4] = VAR_13;
 VAR_15[4] = 2;

 FUNC_0(VAR_13, VAR_7);


 FUNC_1(5, VAR_14, VAR_15, VAR_12);
 FUNC_2(VAR_3, "EAP-SIM: MK", VAR_12, VAR_1);
}
