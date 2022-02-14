
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int match_length; } ;
typedef TYPE_1__ passwdqc_params_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(passwdqc_params_t *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 char VAR_4[7];
 char *VAR_5;
 int VAR_6;

 VAR_4[6] = '\0';
 for (VAR_6 = 0; VAR_6 < 0x1000; VAR_6++) {
  FUNC_2(VAR_4, VAR_0[VAR_6], 6);
  if ((int)FUNC_3(VAR_4) < VAR_1->match_length) continue;
  VAR_5 = FUNC_4(VAR_4);
  if (FUNC_1(VAR_1, VAR_5, VAR_2, VAR_3)) {
   FUNC_0(VAR_5);
   return 1;
  }
  FUNC_0(VAR_5);
 }

 return 0;
}
