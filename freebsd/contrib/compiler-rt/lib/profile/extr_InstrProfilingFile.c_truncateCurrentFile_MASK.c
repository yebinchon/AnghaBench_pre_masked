
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ MergePoolSize; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_6(void) {
  const char *VAR_1;
  char *VAR_2;
  FILE *VAR_3;
  int VAR_4;

  VAR_4 = FUNC_5();
  VAR_2 = (char *)FUNC_0(VAR_4 + 1);
  VAR_1 = FUNC_4(VAR_2, 0);
  if (!VAR_1)
    return;



  if (VAR_0.MergePoolSize)
    return;

  FUNC_1(VAR_1);


  VAR_3 = FUNC_3(VAR_1, "w");
  if (!VAR_3)
    return;
  FUNC_2(VAR_3);
}
