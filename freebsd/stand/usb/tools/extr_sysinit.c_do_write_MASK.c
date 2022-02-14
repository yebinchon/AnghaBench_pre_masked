
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char const*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_1, VAR_2, VAR_3) != VAR_3)
  FUNC_0(VAR_0, "Could not write to output file");
}
