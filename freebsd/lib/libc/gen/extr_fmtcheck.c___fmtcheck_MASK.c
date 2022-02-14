
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EFT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const**,scalar_t__) ;

const char *
FUNC_1(const char *VAR_3, const char *VAR_4)
{
 const char *VAR_5, *VAR_6;
 EFT VAR_7, VAR_8;

 if (!VAR_3) return VAR_4;

 VAR_5 = VAR_3;
 VAR_7 = VAR_1;
 VAR_6 = VAR_4;
 VAR_8 = VAR_1;
 while ((VAR_7 = FUNC_0(&VAR_5, VAR_7)) != VAR_0) {
  if (VAR_7 == VAR_2)
   return VAR_4;
  VAR_8 = FUNC_0(&VAR_6, VAR_8);
  if (VAR_7 != VAR_8)
   return VAR_4;
 }
 return VAR_3;
}
