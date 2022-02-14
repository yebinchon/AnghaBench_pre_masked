
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ value; int name; } ;
typedef TYPE_1__ ahd_reg_parse_entry_t ;


 int FUNC_0 (char*,...) ;

int
FUNC_1(ahd_reg_parse_entry_t *VAR_0, u_int VAR_1,
     const char *VAR_2, u_int VAR_3, u_int VAR_4,
     u_int *VAR_5, u_int VAR_6)
{
 int VAR_7;
 u_int VAR_8;
 u_int VAR_9;

 if (VAR_5 == ((void*)0)) {
  VAR_9 = 0;
  VAR_5 = &VAR_9;
 }

 if (VAR_5 != ((void*)0) && *VAR_5 >= VAR_6) {
  FUNC_0("\n");
  *VAR_5 = 0;
 }
 VAR_7 = FUNC_0("%s[0x%x]", VAR_2, VAR_4);
 if (VAR_0 == ((void*)0)) {
  VAR_7 += FUNC_0(" ");
  *VAR_5 += VAR_7;
  return (VAR_7);
 }
 VAR_8 = 0;
 while (VAR_8 != 0xFF) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (((VAR_4 & VAR_0[VAR_10].mask)
     != VAR_0[VAR_10].value)
    || ((VAR_8 & VAR_0[VAR_10].mask)
     == VAR_0[VAR_10].mask))
    continue;

   VAR_7 += FUNC_0("%s%s",
       VAR_8 == 0 ? ":(" : "|",
       VAR_0[VAR_10].name);
   VAR_8 |= VAR_0[VAR_10].mask;

   break;
  }
  if (VAR_10 >= VAR_1)
   break;
 }
 if (VAR_8 != 0)
  VAR_7 += FUNC_0(") ");
 else
  VAR_7 += FUNC_0(" ");
 *VAR_5 += VAR_7;
 return (VAR_7);
}
