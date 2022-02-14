
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 () ;
 int VAR_3 ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ,int*,int *) ;

__attribute__((used)) static unsigned
FUNC_11 (tree VAR_4)
{
  rtx VAR_5, VAR_6;
  tree VAR_7 = FUNC_1 (VAR_4);
  unsigned VAR_8;

  int VAR_9 = VAR_1 + 1;

  FUNC_10 (&VAR_4, VAR_3, &VAR_9, ((void*)0));
  FUNC_9 ();
  VAR_6 = FUNC_6 (VAR_4, VAR_2, FUNC_2 (VAR_7), VAR_0);
  VAR_5 = FUNC_7 ();
  FUNC_5 ();

  VAR_8 = FUNC_8 (VAR_5);
  if (FUNC_0 (VAR_6))
    VAR_8 += FUNC_4 (FUNC_3 (VAR_6, 0), FUNC_2 (VAR_7));

  return VAR_8;
}
