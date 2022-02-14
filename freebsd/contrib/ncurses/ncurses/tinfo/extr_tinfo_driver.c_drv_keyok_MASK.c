
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _key_ok; int _keytry; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef TYPE_1__ SCREEN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,unsigned int) ;
 char* FUNC_3 (int ,unsigned int,int*,size_t) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(TERMINAL_CONTROL_BLOCK * VAR_2, int VAR_3, int VAR_4)
{
    SCREEN *VAR_5;
    int VAR_6 = VAR_0;
    int VAR_7 = 0;
    char *VAR_8;

    FUNC_0();
    FUNC_1();

    if (VAR_3 >= 0) {
 unsigned VAR_9 = (unsigned) VAR_3;
 if (VAR_4) {
     while ((VAR_8 = FUNC_3(VAR_5->_key_ok,
           VAR_9, &VAR_7, (size_t) 0)) != 0
     && FUNC_4(&(VAR_5->_key_ok), VAR_9)) {
  VAR_6 = FUNC_2(&(VAR_5->_keytry), VAR_8, VAR_9);
  FUNC_5(VAR_8);
  VAR_7 = 0;
  if (VAR_6 != VAR_1)
      break;
     }
 } else {
     while ((VAR_8 = FUNC_3(VAR_5->_keytry,
           VAR_9, &VAR_7, (size_t) 0)) != 0
     && FUNC_4(&(VAR_5->_keytry), VAR_9)) {
  VAR_6 = FUNC_2(&(VAR_5->_key_ok), VAR_8, VAR_9);
  FUNC_5(VAR_8);
  VAR_7 = 0;
  if (VAR_6 != VAR_1)
      break;
     }
 }
    }
    return (VAR_6);
}
