
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 void *VAR_5;

 while (1) {

  FUNC_6("Cuse: Please exit all /dev/cuse instances "
      "and processes which have used this device.\n");

  FUNC_5("DRAIN", 2 * VAR_3);

  FUNC_1();
  VAR_5 = FUNC_0(&VAR_2);
  FUNC_2();

  if (VAR_5 == ((void*)0))
   break;
 }

 if (VAR_0 != ((void*)0))
  FUNC_3(VAR_0);

 FUNC_4(&VAR_1);
}
