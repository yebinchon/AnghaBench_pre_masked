
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,size_t,char*) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*,size_t,int const*,int) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_0, size_t VAR_1,
        size_t VAR_2, const u8 *VAR_3)
{
 int VAR_4;
 size_t VAR_5 = VAR_2;

 VAR_4 = FUNC_0(VAR_0 + VAR_5, VAR_1 - VAR_5,
     "ht_mcs_bitmask=");
 if (FUNC_1(VAR_1 - VAR_5, VAR_4))
  return VAR_5;
 VAR_5 += VAR_4;


 VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, VAR_3, 10);

 VAR_4 = FUNC_0(VAR_0 + VAR_5, VAR_1 - VAR_5, "\n");
 if (FUNC_1(VAR_1 - VAR_5, VAR_4))
  return VAR_2;
 VAR_5 += VAR_4;

 return VAR_5;
}
