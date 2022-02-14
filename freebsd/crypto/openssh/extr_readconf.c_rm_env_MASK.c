
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_send_env; char** send_env; } ;
typedef TYPE_1__ Options ;


 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(Options *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6;


 for (VAR_4 = 0; VAR_4 < VAR_0->num_send_env; ) {
  VAR_6 = FUNC_3(VAR_0->send_env[VAR_4]);
  if (!FUNC_2(VAR_6, VAR_1 + 1)) {
   FUNC_1(VAR_6);
   VAR_4++;
   continue;
  }
  FUNC_0("%s line %d: removing environment %s",
      VAR_2, VAR_3, VAR_6);
  FUNC_1(VAR_6);
  FUNC_1(VAR_0->send_env[VAR_4]);
  VAR_0->send_env[VAR_4] = ((void*)0);
  for (VAR_5 = VAR_4; VAR_5 < VAR_0->num_send_env - 1; VAR_5++) {
   VAR_0->send_env[VAR_5] = VAR_0->send_env[VAR_5 + 1];
   VAR_0->send_env[VAR_5 + 1] = ((void*)0);
  }
  VAR_0->num_send_env--;

 }
}
