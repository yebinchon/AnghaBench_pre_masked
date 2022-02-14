
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* ns_nname_ct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;

int
FUNC_1(ns_nname_ct VAR_4, size_t VAR_5, ns_nname_ct VAR_6, size_t VAR_7) {
 ns_nname_ct VAR_8 = VAR_4 + VAR_5, VAR_9 = VAR_6 + VAR_7;
 int VAR_10, VAR_11;

 while (VAR_10 = *VAR_4, VAR_11 = *VAR_6, VAR_10 != 0 && VAR_11 != 0) {
  if ((VAR_10 & VAR_2) != 0 || (VAR_11 & VAR_2) != 0) {
   VAR_3 = VAR_0;
   return (-1);
  }
  if (VAR_4 + VAR_10 >= VAR_8 || VAR_6 + VAR_11 >= VAR_9) {
   VAR_3 = VAR_1;
   return (-1);
  }
  if (VAR_10 != VAR_11 || FUNC_0((const char *) ++VAR_4,
         (const char *) ++VAR_6, VAR_10) != 0)
   return (0);
  VAR_4 += VAR_10, VAR_6 += VAR_11;
 }
 return (VAR_10 == 0 && VAR_11 == 0);
}
