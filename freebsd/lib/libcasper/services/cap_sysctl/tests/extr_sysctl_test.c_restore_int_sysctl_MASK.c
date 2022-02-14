
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (int,int*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int *,int *,int*,size_t) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_2, const char *VAR_3)
{
 ssize_t VAR_4;
 size_t VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 FUNC_0(VAR_7 >= 0);
 VAR_5 = sizeof(VAR_8);
 VAR_4 = FUNC_4(VAR_7, &VAR_8, VAR_5);
 FUNC_0(VAR_4 >= 0 && (size_t)VAR_4 == VAR_5);
 VAR_6 = FUNC_7(VAR_3);
 FUNC_0(VAR_6 == 0);
 VAR_6 = FUNC_2(VAR_7);
 FUNC_0(VAR_6 == 0);

 VAR_6 = FUNC_6(VAR_2, ((void*)0), ((void*)0), &VAR_8, VAR_5);
 FUNC_1(VAR_6 == 0,
     "sysctlbyname(%s): %s", VAR_2, FUNC_5(VAR_1));
}
