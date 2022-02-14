
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MDX_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 char* FUNC_1 (int) ;

char *
FUNC_2(MDX_CTX *VAR_1, char *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4[VAR_0];
 static const char VAR_5[]="0123456789abcdef";

 if (!VAR_2)
  VAR_2 = FUNC_1(2*VAR_0 + 1);
 if (!VAR_2)
  return 0;
 FUNC_0(VAR_4, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3+VAR_3] = VAR_5[VAR_4[VAR_3] >> 4];
  VAR_2[VAR_3+VAR_3+1] = VAR_5[VAR_4[VAR_3] & 0x0f];
 }
 VAR_2[VAR_3+VAR_3] = '\0';
 return VAR_2;
}
