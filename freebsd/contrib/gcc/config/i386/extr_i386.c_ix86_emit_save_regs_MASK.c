
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_FRAME_RELATED_P ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  unsigned int VAR_2;
  rtx VAR_3;

  for (VAR_2 = VAR_0; VAR_2-- > 0; )
    if (FUNC_3 (VAR_2, 1))
      {
 VAR_3 = FUNC_0 (FUNC_1 (FUNC_2 (VAR_1, VAR_2)));
 RTX_FRAME_RELATED_P (VAR_4) = 1;
      }
}
