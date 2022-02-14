
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int SIPHASH_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*,int) ;
 scalar_t__ FUNC_4 (int*,int ,int) ;
 int FUNC_5 (char*,int) ;
 int * VAR_1 ;

int
FUNC_6(void)
{
 int VAR_2, VAR_3 = 0;
 uint8_t VAR_4[VAR_0], VAR_5[8], VAR_6[16];
 SIPHASH_CTX VAR_7;


 for (VAR_2 = 0; VAR_2 < 16; ++VAR_2)
  VAR_6[VAR_2] = VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  VAR_4[VAR_2] = VAR_2;

  FUNC_0(&VAR_7);
  FUNC_2(&VAR_7, VAR_6);
  FUNC_3(&VAR_7, VAR_4, VAR_2);
  FUNC_1(VAR_5, &VAR_7);

  if (FUNC_4(VAR_5, VAR_1[VAR_2], 8))





   VAR_3++;

 }

 return ((VAR_3 == 0));
}
