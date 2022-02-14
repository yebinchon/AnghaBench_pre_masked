
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ time_t ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,char*,int ,unsigned int,long,long,int,long,int ,int,int,unsigned int,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, unsigned int VAR_4,
         uid_t VAR_5, gid_t VAR_6, char VAR_7,
         unsigned int VAR_8, unsigned int VAR_9)
{
 char VAR_10[256];
 time_t VAR_11 = FUNC_4(((void*)0));

 if (VAR_7 == 'b')
  VAR_4 |= VAR_0;
 else
  VAR_4 |= VAR_1;

 FUNC_2(VAR_10,"%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  VAR_2++,
  VAR_4,
  (long) VAR_5,
  (long) VAR_6,
  1,
  (long) VAR_11,
  0,
  3,
  1,
  VAR_8,
  VAR_9,
  (unsigned)FUNC_3(VAR_3) + 1,
  0);
 FUNC_0(VAR_10);
 FUNC_1(VAR_3);
 return 0;
}
