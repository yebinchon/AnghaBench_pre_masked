
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef size_t u_char ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(u_char *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u_int VAR_7;


 for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_3[VAR_7] = VAR_7;


 for(VAR_7 = 48; VAR_7 < VAR_1; VAR_7++) {
  VAR_4 = VAR_2[VAR_7] % VAR_0;
  VAR_5 = (VAR_2[VAR_7] / VAR_0) % VAR_0;
  VAR_6 = VAR_3[VAR_4];
  VAR_3[VAR_4] = VAR_3[VAR_5];
  VAR_3[VAR_5] = VAR_6;
 }
}
