
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,size_t*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(char* VAR_0, uint8_t** VAR_1, size_t* VAR_2)
{
 size_t VAR_3 = 0;
 while(FUNC_1((unsigned char)*VAR_0))
  VAR_0++;
 if(FUNC_4(VAR_0, "$ORIGIN", 7) != 0)
  return 0;
 FUNC_0(*VAR_1);
 VAR_0 += 7;
 while(FUNC_1((unsigned char)*VAR_0))
  VAR_0++;
 *VAR_1 = FUNC_3(VAR_0, &VAR_3);
 *VAR_2 = VAR_3;
 if(!*VAR_1)
  FUNC_2("malloc failure or parse error in $ORIGIN");
 return 1;
}
