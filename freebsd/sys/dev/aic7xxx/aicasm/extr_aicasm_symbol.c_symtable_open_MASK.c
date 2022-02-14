
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * VAR_5 ;

void
FUNC_3(void)
{
 VAR_5 = FUNC_0( ((void*)0),
     VAR_2 | VAR_3 | VAR_4, 0, VAR_0,
                 ((void*)0));

 if (VAR_5 == ((void*)0)) {
  FUNC_2("Symbol table creation failed");
  FUNC_1(VAR_1);

 }
}
