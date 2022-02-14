
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct icmptypeent {scalar_t__ type; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 struct icmptypeent const* VAR_1 ;
 struct icmptypeent const* VAR_2 ;
 unsigned int FUNC_0 (struct icmptypeent const*) ;

const struct icmptypeent *
FUNC_1(u_int8_t VAR_3, sa_family_t VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 != VAR_0) {
  for (VAR_5=0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
   if (VAR_3 == VAR_2[VAR_5].type)
    return (&VAR_2[VAR_5]);
  }
 } else {
  for (VAR_5=0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   if (VAR_3 == VAR_1[VAR_5].type)
     return (&VAR_1[VAR_5]);
  }
 }
 return (((void*)0));
}
