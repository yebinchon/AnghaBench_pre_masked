
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,size_t,int,int const**,size_t const*,unsigned char*) ;
 int FUNC_1 (int const*,size_t,int,int const**,size_t const*,unsigned char*) ;
 int FUNC_2 (int const*,size_t,int,int const**,size_t const*,unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,int ) ;
 int FUNC_4 (int ,char*,unsigned char*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(const u8 *VAR_4, size_t VAR_5, const u8 *VAR_6, const u8 *VAR_7,
        u8 *VAR_8, int VAR_9)
{
 char *VAR_10 = "PMK Name";
 const u8 *VAR_11[3];
 const size_t VAR_12[3] = { 8, VAR_0, VAR_0 };
 unsigned char VAR_13[VAR_3];

 VAR_11[0] = (u8 *) VAR_10;
 VAR_11[1] = VAR_6;
 VAR_11[2] = VAR_7;

 if (0) {
 } else {
  FUNC_7(VAR_1, "RSN: Derive PMKID using HMAC-SHA-1");
  FUNC_0(VAR_4, VAR_5, 3, VAR_11, VAR_12, VAR_13);
 }
 FUNC_4(VAR_1, "RSN: Derived PMKID", VAR_13, VAR_2);
 FUNC_3(VAR_8, VAR_13, VAR_2);
}
