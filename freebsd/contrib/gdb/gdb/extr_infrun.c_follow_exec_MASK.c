
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 struct target_ops* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct target_ops*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 () ;
 int * VAR_6 ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14 (int VAR_7, char *VAR_8)
{
  int VAR_9 = VAR_7;
  struct target_ops *VAR_10;

  if (!VAR_2)
    return;
  FUNC_13 ();



  VAR_5 = ((void*)0);
  VAR_4 = 0;
  VAR_3 = 0;


  VAR_6 = ((void*)0);


  FUNC_9 ("Executing new program: %s\n", VAR_8);





  VAR_10 = FUNC_5 ();

  if (VAR_10 == ((void*)0))
    FUNC_3 ("Could find run target to save before following exec");

  FUNC_6 (VAR_0);
  FUNC_12 ();
  VAR_1 = FUNC_8 (VAR_9);

  FUNC_10 (VAR_10);


  FUNC_4 (VAR_8, 0);


  FUNC_11 (VAR_8, 0);
  FUNC_7 ();





}
