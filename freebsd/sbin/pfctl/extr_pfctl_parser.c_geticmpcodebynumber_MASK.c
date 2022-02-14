
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct icmpcodeent {scalar_t__ type; scalar_t__ code; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 struct icmpcodeent const* VAR_1 ;
 struct icmpcodeent const* VAR_2 ;
 unsigned int FUNC_0 (struct icmpcodeent const*) ;

const struct icmpcodeent *
FUNC_1(u_int8_t VAR_3, u_int8_t VAR_4, sa_family_t VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5 != VAR_0) {
  for (VAR_6=0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   if (VAR_3 == VAR_2[VAR_6].type &&
       VAR_4 == VAR_2[VAR_6].code)
    return (&VAR_2[VAR_6]);
  }
 } else {
  for (VAR_6=0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   if (VAR_3 == VAR_1[VAR_6].type &&
       VAR_4 == VAR_1[VAR_6].code)
    return (&VAR_1[VAR_6]);
  }
 }
 return (((void*)0));
}
