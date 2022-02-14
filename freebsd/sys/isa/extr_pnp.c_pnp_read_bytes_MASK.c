
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, u_char **VAR_5, int *VAR_6, int *VAR_7)
{
 u_char *VAR_8 = *VAR_5;
 u_char *VAR_9;
 int VAR_10 = *VAR_6;
 int VAR_11 = *VAR_7;

 if (VAR_10 == 0) {
  VAR_10 = 1024;
  VAR_8 = FUNC_2(VAR_10, VAR_3, VAR_2);
  if (!VAR_8)
   return (VAR_1);
 }

 if (VAR_11 + VAR_4 > VAR_10) {
  int VAR_12 = 1024;
  while (VAR_11 + VAR_4 > VAR_10 + VAR_12)
   VAR_12 += 1024;
  VAR_9 = FUNC_2(VAR_10 + VAR_12, VAR_3, VAR_2);
  if (!VAR_9) {

   return (VAR_1);
  }
  FUNC_0(VAR_8, VAR_9, VAR_11);
  FUNC_1(VAR_8, VAR_3);
  VAR_8 = VAR_9;
  VAR_10 += VAR_12;
 }

 if (FUNC_3(VAR_8 + VAR_11, VAR_4) != VAR_4)
  return (VAR_0);
 VAR_11 += VAR_4;

 *VAR_5 = VAR_8;
 *VAR_6 = VAR_10;
 *VAR_7 = VAR_11;

 return (0);
}
