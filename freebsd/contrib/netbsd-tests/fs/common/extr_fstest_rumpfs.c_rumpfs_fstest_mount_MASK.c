
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char const*,int,int *,int ) ;

int
FUNC_2(const atf_tc_t *VAR_1, void *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, 0777);
 if (VAR_5 == -1)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_3, VAR_4, ((void*)0), 0);
}
