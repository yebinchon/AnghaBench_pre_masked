
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 long FUNC_5 (long) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_4)
{
 static int VAR_5 = 1;

 FUNC_4("Automatic memory scanning thread started\n");
 FUNC_6(VAR_1, 10);




 if (VAR_5) {
  VAR_5 = 0;
  FUNC_7(VAR_0);
 }

 while (!FUNC_1()) {
  signed long VAR_6 = VAR_2;

  FUNC_2(&VAR_3);
  FUNC_0();
  FUNC_3(&VAR_3);


  while (VAR_6 && !FUNC_1())
   VAR_6 = FUNC_5(VAR_6);
 }

 FUNC_4("Automatic memory scanning thread ended\n");

 return 0;
}
