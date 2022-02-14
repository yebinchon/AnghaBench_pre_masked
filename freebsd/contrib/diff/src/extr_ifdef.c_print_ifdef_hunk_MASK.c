
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {int dummy; } ;
typedef scalar_t__ lin ;
typedef enum changes { ____Placeholder_changes } changes ;


 size_t VAR_0 ;
 int FUNC_0 (struct change*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3 (struct change *VAR_4)
{
  lin VAR_5, VAR_6, VAR_7, VAR_8;


  enum changes VAR_9 = FUNC_0 (VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
  if (!VAR_9)
    return;

  FUNC_1 ();


  if (VAR_2 < VAR_5 || VAR_3 < VAR_7)
    FUNC_2 (VAR_1[VAR_0],
    VAR_2, VAR_5,
    VAR_3, VAR_7);


  VAR_2 = VAR_6 + 1;
  VAR_3 = VAR_8 + 1;
  FUNC_2 (VAR_1[VAR_9],
  VAR_5, VAR_2,
  VAR_7, VAR_3);
}
