
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int * VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int * VAR_5 ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_8 (int ) ;

void
FUNC_9 (void)
{
  rtx VAR_11;
  rtx VAR_12 = FUNC_3 (VAR_3, VAR_0);
  rtx VAR_13 = FUNC_3 (VAR_3, VAR_0 + 1);
  rtx VAR_14 = FUNC_3 (VAR_2, VAR_0 + 2);
  rtx VAR_15 = FUNC_8 (FUNC_4 (VAR_3, VAR_14));
  unsigned VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
    if (FUNC_0 (VAR_5[VAR_1], VAR_16)
 && !VAR_4[VAR_16])
      VAR_6++;

  VAR_8 = 3;



  FUNC_7 ();
  FUNC_1 (VAR_12, VAR_13);
  VAR_11 = FUNC_5 ();
  FUNC_2 ();
  VAR_9 = FUNC_6 (VAR_11);
  VAR_7 = 2 * VAR_9;

  FUNC_7 ();
  FUNC_1 (VAR_15, VAR_12);
  FUNC_1 (VAR_13, VAR_15);
  VAR_11 = FUNC_5 ();
  FUNC_2 ();
  VAR_10 = FUNC_6 (VAR_11);
}
