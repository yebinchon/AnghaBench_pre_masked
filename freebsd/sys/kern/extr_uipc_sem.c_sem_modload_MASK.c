
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct module *VAR_5, int VAR_6, void *VAR_7)
{
        int VAR_8 = 0;

        switch (VAR_6) {
        case 130:
  VAR_8 = FUNC_1();
  if (VAR_8)
   FUNC_0();
                break;

        case 128:
  FUNC_2(&VAR_2);
  if (VAR_4 != 0) {
   VAR_8 = VAR_1;
   FUNC_3(&VAR_2);
   break;
  }
  VAR_3 = 1;
  FUNC_3(&VAR_2);
  FUNC_0();
                break;

        case 129:
                break;
        default:
                VAR_8 = VAR_0;
                break;
        }
        return (VAR_8);
}
