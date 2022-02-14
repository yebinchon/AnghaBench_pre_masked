
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * k; } ;
typedef int TValue ;
typedef TYPE_1__ Proto ;


 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (TYPE_1__*,int,int,char const**) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (Proto *VAR_0, int VAR_1, int VAR_2, const char **VAR_3) {
  if (FUNC_1(VAR_2)) {
    TValue *VAR_4 = &VAR_0->k[FUNC_0(VAR_2)];
    if (FUNC_4(VAR_4)) {
      *VAR_3 = FUNC_3(VAR_4);
      return;
    }

  }
  else {
    const char *VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_5 && *VAR_5 == 'c') {
      return;
    }

  }
  *VAR_3 = "?";
}
