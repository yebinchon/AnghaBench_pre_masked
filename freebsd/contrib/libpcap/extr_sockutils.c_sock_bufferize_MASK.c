
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int,char*) ;

int FUNC_2(const char *VAR_0, int VAR_1, char *VAR_2, int *VAR_3, int VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 if ((*VAR_3 + VAR_1) > VAR_4)
 {
  if (VAR_6)
   FUNC_1(VAR_6, VAR_7, "Not enough space in the temporary send buffer.");
  return -1;
 }

 if (!VAR_5)
  FUNC_0(VAR_2 + (*VAR_3), VAR_0, VAR_1);

 (*VAR_3) += VAR_1;

 return 0;
}
