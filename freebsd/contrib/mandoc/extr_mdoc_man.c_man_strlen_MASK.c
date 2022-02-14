
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,int *,int *) ;
 size_t FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 size_t VAR_1;
 int VAR_2, VAR_3;

 VAR_3 = 0;
 VAR_2 = 0;
 for (;;) {
  VAR_1 = FUNC_1(VAR_0, "\\");
  if (VAR_1) {
   VAR_0 += VAR_1;
   if (VAR_2) {
    VAR_2 = 0;
    VAR_1--;
   }
   VAR_3 += VAR_1;
  }
  if ('\0' == *VAR_0)
   break;
  VAR_0++;
  switch (FUNC_0(&VAR_0, ((void*)0), ((void*)0))) {
  case 134:
   return VAR_3;
  case 128:
  case 133:
  case 130:
  case 129:
  case 132:
   if (VAR_2)
    VAR_2 = 0;
   else
    VAR_3++;
   break;
  case 131:
   VAR_2 = 1;
   break;
  default:
   break;
  }
 }
 return VAR_3;
}
