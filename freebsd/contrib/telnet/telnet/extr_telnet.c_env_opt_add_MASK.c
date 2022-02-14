
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* FUNC_0 (int,int) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_7 ;

void
FUNC_6(unsigned char *VAR_8)
{
 unsigned char *VAR_9, VAR_10;

 if (VAR_4 == ((void*)0))
  return;

 if (VAR_8 == ((void*)0) || *VAR_8 == '\0') {

  FUNC_0(1, 0);
  while ((VAR_8 = FUNC_0(0, 0)))
   FUNC_6(VAR_8);


  FUNC_0(1, 1);
  while ((VAR_8 = FUNC_0(0, 1)))
   FUNC_6(VAR_8);
  return;
 }
 VAR_9 = FUNC_1(VAR_8);
        if (VAR_6 + (VAR_9 ? 2 * FUNC_5((char *)VAR_9) : 0) +
                                2 * FUNC_5((char *)VAR_8) + 6 > VAR_5)
        {
  int VAR_11;
  VAR_5 += VAR_0;
  VAR_11 = VAR_5 - VAR_4;
  VAR_4 = (unsigned char *)FUNC_4(VAR_4, VAR_11);
  if (VAR_4 == ((void*)0)) {
        FUNC_3("env_opt_add: realloc() failed!!!\n");
   VAR_4 = VAR_6 = VAR_5 = ((void*)0);
   return;
  }
  VAR_6 = VAR_4 + VAR_11 - (VAR_5 - VAR_6);
  VAR_5 = VAR_4 + VAR_11;
 }
 if (FUNC_2(VAR_8))





   *VAR_6++ = 128;
 else
  *VAR_6++ = 131;
 for (;;) {
  while ((VAR_10 = *VAR_8++)) {
   if (VAR_6 + (2 + 2) > VAR_5)
    return;
   switch(VAR_10&0xff) {
   case 130:
    *VAR_6++ = 130;
    break;
   case 128:
   case 129:
   case 132:
   case 131:
    *VAR_6++ = 132;
    break;
   }
   *VAR_6++ = VAR_10;
  }
  if ((VAR_8 = VAR_9)) {
   if (VAR_6 + (1 + 2 + 2) > VAR_5)
    return;





    *VAR_6++ = 129;
   VAR_9 = ((void*)0);
  } else
   break;
 }
}
