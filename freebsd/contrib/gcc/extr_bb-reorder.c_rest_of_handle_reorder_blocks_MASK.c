
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_7 (void)
{
  bool VAR_10;
  unsigned int VAR_11;



  VAR_11 = (!VAR_2 ? VAR_1 : 0);
  VAR_10 = FUNC_0 (VAR_0 | VAR_11);

  if (VAR_8 && VAR_9)
    {
      FUNC_4 (VAR_4);
      FUNC_5 (VAR_11);
      FUNC_3 (VAR_4);
    }

  if (VAR_6 || VAR_7)
    FUNC_2 (VAR_11);
  if (VAR_6 || VAR_7
      || (VAR_8 && VAR_9))
    VAR_10 |= FUNC_0 (VAR_0 | VAR_11);




  if (VAR_10 && VAR_2)
    FUNC_6 (((void*)0), VAR_5,
        VAR_3);


  FUNC_1 ();
  return 0;
}
