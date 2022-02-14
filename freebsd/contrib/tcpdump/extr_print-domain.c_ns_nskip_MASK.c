
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,int) ;

__attribute__((used)) static const u_char *
FUNC_1(netdissect_options *VAR_3,
         register const u_char *VAR_4)
{
 register u_char VAR_5;

 if (!FUNC_0(*VAR_4, 1))
  return (((void*)0));
 VAR_5 = *VAR_4++;
 while (VAR_5) {
  if ((VAR_5 & VAR_2) == VAR_2)
   return (VAR_4 + 1);
  if ((VAR_5 & VAR_2) == VAR_1) {
   int VAR_6, VAR_7;

   if ((VAR_5 & ~VAR_2) != VAR_0)
    return(((void*)0));
   if (!FUNC_0(*VAR_4, 1))
    return (((void*)0));
   if ((VAR_6 = *VAR_4++) == 0)
    VAR_6 = 256;
   VAR_7 = (VAR_6 + 7) / 8;
   VAR_4 += VAR_7;
  } else
   VAR_4 += VAR_5;
  if (!FUNC_0(*VAR_4, 1))
   return (((void*)0));
  VAR_5 = *VAR_4++;
 }
 return (VAR_4);
}
