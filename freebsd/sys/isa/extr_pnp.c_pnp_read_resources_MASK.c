
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,int**,int*,int*) ;

__attribute__((used)) static int
FUNC_4(u_char **VAR_1, int *VAR_2, int *VAR_3)
{
 u_char *VAR_4 = *VAR_1;
 int VAR_5 = *VAR_2;
 int VAR_6 = 0;
 int VAR_7, VAR_8;
 u_char VAR_9;

 VAR_7 = 0;
 VAR_8 = 0;
 while (!VAR_8) {
  VAR_7 = FUNC_3(1, &VAR_4, &VAR_5, &VAR_6);
  if (VAR_7)
   goto out;
  VAR_9 = VAR_4[VAR_6-1];
  if (FUNC_0(VAR_9) == 0) {



   VAR_7 = FUNC_3(FUNC_1(VAR_9),
       &VAR_4, &VAR_5, &VAR_6);
   if (VAR_7)
    goto out;
   if (FUNC_2(VAR_9) == VAR_0)
    VAR_8 = 1;
  } else {



   VAR_7 = FUNC_3(2, &VAR_4, &VAR_5, &VAR_6);
   if (VAR_7)
    goto out;
   VAR_7 = FUNC_3(VAR_4[VAR_6-2]
       + (VAR_4[VAR_6-1] << 8), &VAR_4, &VAR_5,
       &VAR_6);
   if (VAR_7)
    goto out;
  }
 }

 out:
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;
 return (VAR_7);
}
