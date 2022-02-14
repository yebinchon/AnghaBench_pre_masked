
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int const) ;
 int FUNC_2 (char*,unsigned int const,char*,int) ;
 scalar_t__ FUNC_3 (unsigned int const,int) ;

__attribute__((used)) static char * FUNC_4(int VAR_0)
{
 const unsigned int VAR_1 = 20;
 char *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_2, VAR_1, "%d", VAR_0);
 if (FUNC_3(VAR_1, VAR_3)) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
