
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,unsigned int,char const*,int *,unsigned int) ;
 int FUNC_1 (unsigned int,int *,unsigned int,int const*,size_t,int *) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (int ,char*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(const u8 *VAR_2, size_t VAR_3, u8 *VAR_4,
    unsigned int VAR_5)
{
 u8 VAR_6[VAR_0], VAR_7[VAR_0];
 const char *VAR_8 = "second intermediate key";
 int VAR_9;




 FUNC_2(VAR_6, 0, VAR_5);
 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_5, VAR_2, VAR_3, VAR_7);
 if (VAR_9 < 0)
  return -1;
 FUNC_3(VAR_1, "DPP: PRK = HKDF-Extract(<>, IKM=N.x)",
   VAR_7, VAR_5);


 VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_5, VAR_8, VAR_4, VAR_5);
 FUNC_2(VAR_7, 0, VAR_5);
 if (VAR_9 < 0)
  return -1;

 FUNC_3(VAR_1, "DPP: k2 = HKDF-Expand(PRK, info, L)",
   VAR_4, VAR_5);
 return 0;
}
