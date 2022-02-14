
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int,char const*,char const*) ;
 int FUNC_3 (int,char* const*,char* const*) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, int VAR_1, char * const *VAR_2,
        const char *VAR_3, const char *VAR_4)
{
 pid_t VAR_5 = FUNC_1();

 if (VAR_5 == 0) {
  char * const VAR_6[] = { "target", ((void*)0) };

  FUNC_3(VAR_0, VAR_6, VAR_2);
  FUNC_0("fexecve() failed");
 }

 FUNC_2(VAR_5, VAR_1, VAR_3, VAR_4);
}
