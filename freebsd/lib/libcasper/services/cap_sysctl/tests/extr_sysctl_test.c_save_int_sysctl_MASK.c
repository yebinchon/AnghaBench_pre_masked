
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_6 (int,int*,size_t) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3, const char *VAR_4)
{
 ssize_t VAR_5;
 size_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = sizeof(VAR_9);
 VAR_7 = FUNC_5(VAR_3, &VAR_9, &VAR_6, ((void*)0), 0);
 FUNC_1(VAR_7 == 0,
     "sysctlbyname(%s): %s", VAR_3, FUNC_4(VAR_2));

 VAR_8 = FUNC_3(VAR_4, VAR_0 | VAR_1, 0600);
 FUNC_1(VAR_8 >= 0, "open(%s): %s", VAR_4, FUNC_4(VAR_2));
 VAR_5 = FUNC_6(VAR_8, &VAR_9, VAR_6);
 FUNC_0(VAR_5 >= 0 && (size_t)VAR_5 == VAR_6);
 VAR_7 = FUNC_2(VAR_8);
 FUNC_0(VAR_7 == 0);
}
