
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dsl_dataset_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, dsl_dataset_t *VAR_2, cred_t *VAR_3)
{
 uint64_t VAR_4;

 if (FUNC_1(VAR_2, "jailed", &VAR_4))
  return (FUNC_0(VAR_0));

 return (FUNC_2(VAR_1, VAR_4, VAR_3));
}
