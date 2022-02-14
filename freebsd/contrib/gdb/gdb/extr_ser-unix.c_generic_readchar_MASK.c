
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int bufcnt; int* bufp; } ;
typedef enum serial_rc { ____Placeholder_serial_rc } serial_rc ;





 int FUNC_0 (struct serial*) ;

__attribute__((used)) static int
FUNC_1 (struct serial *VAR_0, int VAR_1,
    int (VAR_2) (struct serial *VAR_3, int VAR_4))
{
  int VAR_5;
  if (VAR_0->bufcnt > 0)
    {
      VAR_5 = *VAR_0->bufp;
      VAR_0->bufcnt--;
      VAR_0->bufp++;
    }
  else if (VAR_0->bufcnt < 0)
    {

      VAR_5 = VAR_0->bufcnt;
    }
  else
    {
      VAR_5 = VAR_2 (VAR_0, VAR_1);
      if (VAR_5 < 0)
 {
   switch ((enum serial_rc) VAR_5)
     {
     case 130:
     case 129:

       VAR_0->bufcnt = VAR_5;
       break;
     case 128:
       VAR_0->bufcnt = 0;
       break;
     }
 }
    }
  FUNC_0 (VAR_0);
  return VAR_5;
}
