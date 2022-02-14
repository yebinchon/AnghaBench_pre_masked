
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,char*,unsigned int,char const*,size_t,char*) ;
 int FUNC_1 (char*,unsigned int,int *,char*,size_t,char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,int *,char*,size_t,char*,unsigned int) ;
 int FUNC_3 (char*,unsigned int,int *,char*,size_t,char*,unsigned int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,int ,unsigned int) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (int ,char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_10(const u8 *VAR_3, const u8 *VAR_4,
        const u8 *VAR_5, size_t VAR_6,
        const u8 *VAR_7, size_t VAR_8,
        const char *VAR_9,
        const u8 *VAR_10, size_t VAR_11,
        u8 *VAR_12, unsigned int VAR_13)
{
 u8 VAR_14[VAR_0], VAR_15[VAR_0];
 int VAR_16;
 u8 *VAR_17, *VAR_18;
 size_t VAR_19;





 FUNC_7(VAR_14, 0, VAR_13);
 if (FUNC_0(VAR_13, VAR_14, VAR_13, VAR_10, VAR_11, VAR_15) < 0)
  return -1;
 FUNC_9(VAR_2, "DPP: PRK = HKDF-Extract(<>, IKM)",
   VAR_15, VAR_13);
 VAR_19 = 2 * VAR_1 + VAR_6 + VAR_8 + FUNC_8(VAR_9);
 VAR_17 = FUNC_5(VAR_19);
 if (!VAR_17)
  return -1;
 VAR_18 = VAR_17;
 FUNC_6(VAR_18, VAR_3, VAR_1);
 VAR_18 += VAR_1;
 FUNC_6(VAR_18, VAR_4, VAR_1);
 VAR_18 += VAR_1;
 FUNC_6(VAR_18, VAR_5, VAR_6);
 VAR_18 += VAR_6;
 FUNC_6(VAR_18, VAR_7, VAR_8);
 VAR_18 += VAR_8;
 FUNC_6(VAR_18, VAR_9, FUNC_8(VAR_9));


 if (VAR_13 == 32)
  VAR_16 = FUNC_1(VAR_15, VAR_13, ((void*)0), VAR_17, VAR_19,
          VAR_12, VAR_13);
 else if (VAR_13 == 48)
  VAR_16 = FUNC_2(VAR_15, VAR_13, ((void*)0), VAR_17, VAR_19,
          VAR_12, VAR_13);
 else if (VAR_13 == 64)
  VAR_16 = FUNC_3(VAR_15, VAR_13, ((void*)0), VAR_17, VAR_19,
          VAR_12, VAR_13);
 else
  VAR_16 = -1;
 FUNC_4(VAR_17);
 FUNC_7(VAR_15, 0, VAR_13);
 if (VAR_16 < 0)
  return -1;

 FUNC_9(VAR_2, "DPP: z = HKDF-Expand(PRK, info, L)",
   VAR_12, VAR_13);
 return 0;
}
