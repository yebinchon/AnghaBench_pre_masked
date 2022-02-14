
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct null_args {int nulla_target; } ;
typedef int nargs ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct null_args*,int ,int) ;
 int FUNC_3 (int ,char const*,int,struct null_args*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 struct null_args VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.nulla_target = FUNC_0(VAR_1);
 if (FUNC_3(VAR_0, VAR_2, VAR_3, &VAR_4, sizeof(VAR_4)) == -1)
  FUNC_1("could not mount nullfs");

}
