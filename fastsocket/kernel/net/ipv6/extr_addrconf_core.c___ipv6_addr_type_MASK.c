
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct in6_addr const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(const struct in6_addr *VAR_11)
{
 __be32 VAR_12;

 VAR_12 = VAR_11->s6_addr32[0];




 if ((VAR_12 & FUNC_2(0xE0000000)) != FUNC_2(0x00000000) &&
     (VAR_12 & FUNC_2(0xE0000000)) != FUNC_2(0xE0000000))
  return (VAR_10 |
   FUNC_1(VAR_6));

 if ((VAR_12 & FUNC_2(0xFF000000)) == FUNC_2(0xFF000000)) {


  return (VAR_5 |
   FUNC_3(FUNC_0(VAR_11)));
 }

 if ((VAR_12 & FUNC_2(0xFFC00000)) == FUNC_2(0xFE800000))
  return (VAR_2 | VAR_10 |
   FUNC_1(VAR_7));
 if ((VAR_12 & FUNC_2(0xFFC00000)) == FUNC_2(0xFEC00000))
  return (VAR_9 | VAR_10 |
   FUNC_1(VAR_8));
 if ((VAR_12 & FUNC_2(0xFE000000)) == FUNC_2(0xFC000000))
  return (VAR_10 |
   FUNC_1(VAR_6));

 if ((VAR_11->s6_addr32[0] | VAR_11->s6_addr32[1]) == 0) {
  if (VAR_11->s6_addr32[2] == 0) {
   if (VAR_11->s6_addr32[3] == 0)
    return VAR_0;

   if (VAR_11->s6_addr32[3] == FUNC_2(0x00000001))
    return (VAR_3 | VAR_10 |
     FUNC_1(VAR_7));

   return (VAR_1 | VAR_10 |
    FUNC_1(VAR_6));
  }

  if (VAR_11->s6_addr32[2] == FUNC_2(0x0000ffff))
   return (VAR_4 |
    FUNC_1(VAR_6));
 }

 return (VAR_10 |
  FUNC_1(VAR_6));
}
