
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static bool
FUNC_7 (void)
{
  unsigned int VAR_6 = 0;
  int VAR_7;
  int VAR_8;

  if (VAR_2)
    FUNC_1 (VAR_2,
      "* Phase 1: Propagate extensions to uses.  *\n");


  FUNC_4 ();
  FUNC_5 ();





  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    FUNC_6 (VAR_1, FUNC_0 (VAR_1, VAR_6), VAR_0, VAR_4,
  VAR_3);



  VAR_7 = FUNC_3 ();

  if (VAR_7 < 0)
    return 0;



  VAR_8 = FUNC_2 ();

  if (VAR_8 < 0)
    return 0;

 return VAR_7 > 0 || VAR_8 > 0;
}
