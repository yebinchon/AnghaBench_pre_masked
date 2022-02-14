
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ time_t ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,char*,int ,unsigned int,long,long,int,long,unsigned int,int,int,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, const char *VAR_3,
    unsigned int VAR_4, uid_t VAR_5, gid_t VAR_6)
{
 char VAR_7[256];
 time_t VAR_8 = FUNC_5(((void*)0));

 FUNC_3(VAR_7,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_1++,
  VAR_0 | VAR_4,
  (long) VAR_5,
  (long) VAR_6,
  1,
  (long) VAR_8,
  (unsigned)FUNC_4(VAR_3)+1,
  3,
  1,
  0,
  0,
  (unsigned)FUNC_4(VAR_2) + 1,
  0);
 FUNC_0(VAR_7);
 FUNC_2(VAR_2);
 FUNC_1();
 FUNC_2(VAR_3);
 FUNC_1();
 return 0;
}
