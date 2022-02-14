
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log {int l_logsize; } ;
typedef scalar_t__ int64_t ;
typedef int atomic64_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int*,int*) ;

__attribute__((used)) static void
FUNC_4(
 struct log *VAR_0,
 atomic64_t *VAR_1,
 int VAR_2)
{
 int64_t VAR_3 = FUNC_1(VAR_1);
 int64_t VAR_4, VAR_5;

 do {
  int VAR_6;
  int VAR_7, VAR_8;

  FUNC_3(VAR_3, &VAR_7, &VAR_8);

  VAR_6 = VAR_0->l_logsize - VAR_8;
  if (VAR_6 > VAR_2)
   VAR_8 += VAR_2;
  else {
   VAR_8 = VAR_2 - VAR_6;
   VAR_7++;
  }

  VAR_5 = VAR_3;
  VAR_4 = FUNC_2(VAR_7, VAR_8);
  VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_4);
 } while (VAR_3 != VAR_5);
}
