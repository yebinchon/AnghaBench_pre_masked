
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_3,
         const u_char *VAR_4)
{
 register u_int VAR_5;

 if (!FUNC_1(*VAR_4, 1))
  return(-1);
 VAR_5 = *VAR_4;
 if ((VAR_5 & VAR_2) == VAR_1) {
  int VAR_6, VAR_7;
  if ((VAR_7 = (VAR_5 & ~VAR_2)) != VAR_0) {
   FUNC_0((VAR_3, "<ELT %d>", VAR_7));
   return(-1);
  }
  if (!FUNC_1(*(VAR_4 + 1), 1))
   return(-1);
  if ((VAR_6 = *(VAR_4 + 1)) == 0)
   VAR_6 = 256;
  return(((VAR_6 + 7) / 8) + 1);
 } else
  return(VAR_5);
}
