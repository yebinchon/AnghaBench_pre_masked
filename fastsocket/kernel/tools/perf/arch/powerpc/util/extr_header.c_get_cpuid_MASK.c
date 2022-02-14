
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char) ;

int
FUNC_5(char *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0);

 VAR_4 = FUNC_3(VAR_1, VAR_2, "%lu,%lu$", FUNC_1(VAR_3), FUNC_0(VAR_3));


 if (FUNC_4(VAR_1, '$')) {
  VAR_1[VAR_4-1] = '\0';
  return 0;
 }
 return -1;
}
