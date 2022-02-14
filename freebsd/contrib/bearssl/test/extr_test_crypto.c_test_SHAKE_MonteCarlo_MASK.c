
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_shake_context ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,unsigned int,unsigned int) ;
 size_t FUNC_9 (unsigned char*,char const*) ;
 int FUNC_10 (unsigned char*,int ,int) ;
 int FUNC_11 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_12(int VAR_3,
 size_t VAR_4, size_t VAR_5, const char *VAR_6, const char *VAR_7)
{
 unsigned char VAR_8[250], VAR_9[250];
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_9(VAR_8, VAR_6);
 VAR_12 = VAR_5;
 VAR_13 = VAR_5 - VAR_4 + 1;
 for (VAR_15 = 0; VAR_15 < 100; VAR_15 ++) {
  for (VAR_14 = 1; VAR_14 < 1001; VAR_14 ++) {
   br_shake_context VAR_16;

   VAR_10 = VAR_12;
   FUNC_2(&VAR_16, VAR_3);
   FUNC_3(&VAR_16, VAR_8, 16);
   FUNC_1(&VAR_16);
   FUNC_4(&VAR_16, VAR_8, VAR_10);
   if (VAR_10 < 16) {
    FUNC_10(VAR_8 + VAR_10, 0, 16 - VAR_10);
   }
   VAR_12 = VAR_4
    + (FUNC_0(VAR_8 + VAR_10 - 2) % VAR_13);
  }
  FUNC_11(".");
  FUNC_7(VAR_2);
 }
 VAR_11 = FUNC_9(VAR_9, VAR_7);
 if (VAR_11 != VAR_10) {
  FUNC_8(VAR_1, "MC: bad length (%u vs %u)\n",
   (unsigned)VAR_10, (unsigned)VAR_11);
  FUNC_6(VAR_0);
 }
 FUNC_5("KAT MC", VAR_8, VAR_9, VAR_10);
}
