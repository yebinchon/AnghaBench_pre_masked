
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned int FUNC_0 (unsigned int,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

unsigned long FUNC_3(const char *VAR_3)
{
 char VAR_4[VAR_0];
 unsigned long VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(VAR_6, VAR_4);

  if (FUNC_2(VAR_4, VAR_3) == 0)
   return VAR_1[VAR_5];
 }
 return FUNC_1(VAR_3);
}
