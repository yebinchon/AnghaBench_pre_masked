
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void** VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_7 ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

void
FUNC_7(void)
{
 int VAR_8, VAR_9;

 FUNC_4(&VAR_5, "ap boot", ((void*)0), VAR_1);


 for(VAR_9 = 0; VAR_9 < (VAR_7 - 1); VAR_9++)
  VAR_6[VAR_9] = (void *)FUNC_3(VAR_0, VAR_2 | VAR_3);

 FUNC_2();


 FUNC_5();


 VAR_8 = FUNC_1();
 if (VAR_8)
  FUNC_6("WARNING: Some AP's failed to start\n");
 else
  for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
   FUNC_0(VAR_9, &VAR_4);
}
