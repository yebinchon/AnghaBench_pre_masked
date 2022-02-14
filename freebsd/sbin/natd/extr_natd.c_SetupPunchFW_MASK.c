
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 int FUNC_4 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (FUNC_4(VAR_2, "%u:%u", &VAR_3, &VAR_4) != 2)
  FUNC_3(1, "punch_fw: basenumber:count parameter required");

 if (FUNC_0(VAR_3 + VAR_4 - 1) == -1)
  FUNC_3(1, "punch_fw: basenumber:count parameter should fit "
   "the maximum allowed rule numbers");

 FUNC_1(VAR_1, VAR_3, VAR_4);
 (void)FUNC_2(VAR_1, VAR_0, VAR_0);
}
