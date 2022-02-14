
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int const,int*,int ) ;

__attribute__((used)) static void
FUNC_5(const pid_t VAR_1, const char *VAR_2)
{
 int VAR_3;

 (void)FUNC_4(VAR_1, &VAR_3, 0);

 if (FUNC_2(VAR_3))
  FUNC_0(VAR_0, FUNC_1(VAR_3));
 else
  FUNC_3("%s; raw exit status was %d", VAR_2, VAR_3);
}
