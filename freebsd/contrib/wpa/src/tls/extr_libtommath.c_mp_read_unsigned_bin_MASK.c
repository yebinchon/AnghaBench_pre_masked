
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int alloc; unsigned char* dp; int used; } ;
typedef TYPE_1__ mp_int ;


 unsigned char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (mp_int * VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  int VAR_5;


  if (VAR_2->alloc < 2) {
     if ((VAR_5 = FUNC_1(VAR_2, 2)) != VAR_1) {
        return VAR_5;
     }
  }


  FUNC_3 (VAR_2);


  while (VAR_4-- > 0) {
    if ((VAR_5 = FUNC_2 (VAR_2, 8, VAR_2)) != VAR_1) {
      return VAR_5;
    }


      VAR_2->dp[0] |= *VAR_3++;
      VAR_2->used += 1;





  }
  FUNC_0 (VAR_2);
  return VAR_1;
}
