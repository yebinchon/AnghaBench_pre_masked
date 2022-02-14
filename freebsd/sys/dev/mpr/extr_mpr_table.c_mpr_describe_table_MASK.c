
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mpr_table_lookup {char* string; scalar_t__ code; } ;



char *
FUNC_0(struct mpr_table_lookup *VAR_0, u_int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].string != ((void*)0); VAR_2++) {
  if (VAR_0[VAR_2].code == VAR_1)
   return(VAR_0[VAR_2].string);
 }
 return(VAR_0[VAR_2+1].string);
}
