
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(unsigned char *VAR_5, int VAR_6)
{
 unsigned char *VAR_7 = 0, *VAR_8 = 0;
 int VAR_9;

 switch(VAR_5[0]&0xff) {
 case 128:
  FUNC_2();
  if (VAR_6 == 1) {
   FUNC_0(((void*)0));
  } else for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
   switch (VAR_5[VAR_9]&0xff) {
   case 133:

   case 134:
    if (VAR_7) {
     *VAR_8 = 0;
     FUNC_0(VAR_7);
    }
    VAR_7 = VAR_8 = &VAR_5[VAR_9+1];
    break;
   case 135:
    VAR_9++;

   default:
    if (VAR_8)
     *VAR_8++ = VAR_5[VAR_9];
    break;
   }
  }
  if (VAR_7) {
   *VAR_8 = 0;
   FUNC_0(VAR_7);
  }
  FUNC_1(1);
  break;

 case 129:
 case 130:

  break;

 default:
  break;
 }
}
