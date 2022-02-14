
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int uid_t ;
typedef int longlong_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int *,char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(zfsvfs_t *VAR_1, const char *VAR_2, uid_t VAR_3,
    char *VAR_4, boolean_t VAR_5)
{
 uint64_t VAR_6;
 int VAR_7 = 0;

 if (VAR_2 && VAR_2[0]) {
  VAR_7 = FUNC_3(VAR_1, VAR_2, ((void*)0), VAR_5);
  if (VAR_7 == -1)
   return (FUNC_1(VAR_0));
 }
 VAR_6 = FUNC_0(VAR_7, VAR_3);
 (void) FUNC_2(VAR_4, "%llx", (longlong_t)VAR_6);
 return (0);
}
