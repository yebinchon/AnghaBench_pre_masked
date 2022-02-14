
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

void
FUNC_3(unsigned char *VAR_0, int VAR_1)
{
 unsigned char *VAR_2 = 0, *VAR_3 = 0;
 int VAR_4;

 switch(VAR_0[0]&0xff) {
 case 128:
  FUNC_2();
  if (VAR_1 == 1) {
   FUNC_0(((void*)0));
  } else for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
   switch (VAR_0[VAR_4]&0xff) {
   case 133:

   case 134:
    if (VAR_2) {
     *VAR_3 = 0;
     FUNC_0(VAR_2);
    }
    VAR_2 = VAR_3 = &VAR_0[VAR_4+1];
    break;
   case 135:
    VAR_4++;

   default:
    if (VAR_3)
     *VAR_3++ = VAR_0[VAR_4];
    break;
   }
  }
  if (VAR_2) {
   *VAR_3 = 0;
   FUNC_0(VAR_2);
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
