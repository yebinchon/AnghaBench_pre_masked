
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ voidp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;

voidp
FUNC_6(int VAR_4)
{
  voidp VAR_5;
  int VAR_6 = 600;




  if (VAR_4 == 0)
    VAR_4 = 1;

  do {
    VAR_5 = (voidp) FUNC_3((unsigned) VAR_4);
    if (VAR_5) {
      if (FUNC_1(VAR_0))
 FUNC_4(VAR_1, "Allocated size %d; block %p", VAR_4, VAR_5);
      return VAR_5;
    }
    if (VAR_6 > 0) {
      FUNC_4(VAR_2, "Retrying memory allocation");
      FUNC_5(1);
    }
  } while (--VAR_6);

  FUNC_4(VAR_3, "Out of memory");
  FUNC_2(1);

  FUNC_0();

  return 0;
}
