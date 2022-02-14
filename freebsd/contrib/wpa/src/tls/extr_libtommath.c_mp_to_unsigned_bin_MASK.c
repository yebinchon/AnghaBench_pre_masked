
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* dp; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5 (mp_int * VAR_1, unsigned char *VAR_2)
{
  int VAR_3, VAR_4;
  mp_int VAR_5;

  if ((VAR_4 = FUNC_3 (&VAR_5, VAR_1)) != VAR_0) {
    return VAR_4;
  }

  VAR_3 = 0;
  while (FUNC_4 (&VAR_5) == 0) {

      VAR_2[VAR_3++] = (unsigned char) (VAR_5.dp[0] & 255);



    if ((VAR_4 = FUNC_2 (&VAR_5, 8, &VAR_5, ((void*)0))) != VAR_0) {
      FUNC_1 (&VAR_5);
      return VAR_4;
    }
  }
  FUNC_0 (VAR_2, VAR_3);
  FUNC_1 (&VAR_5);
  return VAR_0;
}
