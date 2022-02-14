
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_2(VAR_1, "%u", &VAR_2) != 1)
  FUNC_1(1, "skinny_port: port parameter required");

 FUNC_0(VAR_0, VAR_2);
}
