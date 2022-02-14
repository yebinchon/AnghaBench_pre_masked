
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_FRAME_RELATED_P ;
typedef int HOST_WIDE_INT ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_3, HOST_WIDE_INT VAR_4)
{
  unsigned int VAR_5;
  rtx VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    if (FUNC_4 (VAR_5, 1))
      {
 VAR_6 = FUNC_1 (FUNC_0 (FUNC_2 (VAR_1, VAR_3),
            VAR_1, VAR_4),
          FUNC_3 (VAR_1, VAR_5));
 RTX_FRAME_RELATED_P (VAR_7) = 1;
 VAR_4 += VAR_2;
      }
}
