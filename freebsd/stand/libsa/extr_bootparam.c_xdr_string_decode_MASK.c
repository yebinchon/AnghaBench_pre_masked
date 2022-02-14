
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(char **VAR_0, char *VAR_1, int *VAR_2)
{
 uint32_t *VAR_3;
 char *VAR_4;
 int VAR_5;
 int VAR_6;


 VAR_3 = (uint32_t *) *VAR_0;
 *VAR_0 += sizeof(*VAR_3);
 VAR_5 = FUNC_1(*VAR_3);
 VAR_6 = (VAR_5 + 3) & ~3;

 if (VAR_5 > *VAR_2)
  VAR_5 = *VAR_2;
 VAR_4 = *VAR_0;
 *VAR_0 += VAR_6;
 FUNC_0(VAR_4, VAR_1, VAR_5);

 VAR_1[VAR_5] = '\0';
 *VAR_2 = VAR_5;

 return (0);
}
