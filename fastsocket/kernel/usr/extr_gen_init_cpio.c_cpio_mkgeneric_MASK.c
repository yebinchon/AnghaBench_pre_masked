
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ time_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,char*,int ,unsigned int,long,long,int,long,int ,int,int,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, unsigned int VAR_2,
         uid_t VAR_3, gid_t VAR_4)
{
 char VAR_5[256];
 time_t VAR_6 = FUNC_4(((void*)0));

 FUNC_2(VAR_5,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_0++,
  VAR_2,
  (long) VAR_3,
  (long) VAR_4,
  2,
  (long) VAR_6,
  0,
  3,
  1,
  0,
  0,
  (unsigned)FUNC_3(VAR_1) + 1,
  0);
 FUNC_0(VAR_5);
 FUNC_1(VAR_1);
 return 0;
}
