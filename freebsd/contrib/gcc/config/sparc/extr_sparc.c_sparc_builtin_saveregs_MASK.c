
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int words; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static rtx
FUNC_6 (void)
{
  int VAR_7 = VAR_4.words;
  rtx VAR_8;
  int VAR_9;

  for (VAR_9 = VAR_7; VAR_9 < VAR_2; VAR_9++)
    FUNC_2 (FUNC_3 (VAR_6,
     FUNC_4 (VAR_0,
            VAR_5,
            FUNC_1 (FUNC_0 (0)
       + (VAR_3
          * VAR_9)))),
      FUNC_5 (VAR_6,
     VAR_1 + VAR_9));

  VAR_8 = FUNC_4 (VAR_0,
     VAR_5,
     FUNC_1 (FUNC_0 (0)
       + VAR_3 * VAR_7));

  return VAR_8;
}
