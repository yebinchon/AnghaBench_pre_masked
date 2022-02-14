
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

int
FUNC_2(const char* VAR_0)
{



 int VAR_1 = 0;
 while(*VAR_0) {
  while(*VAR_0 && FUNC_1((unsigned char)*VAR_0))
   VAR_0++;
  if(!*VAR_0)
   break;
  if(*VAR_0 == '-')
   VAR_0++;
  if(!*VAR_0)
   return 0;
  if(!FUNC_0((unsigned char)*VAR_0))
   return 0;
  while(*VAR_0 && FUNC_0((unsigned char)*VAR_0))
   VAR_0++;
  VAR_1++;
 }
 return VAR_1;
}
