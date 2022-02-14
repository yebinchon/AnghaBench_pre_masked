
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfstestargs {int ta_uargs; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char const*,int,int *,int) ;

int
FUNC_2(const atf_tc_t *VAR_1, void *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 struct tmpfstestargs *VAR_6 = VAR_2;

 VAR_5 = FUNC_0(VAR_3, 0777);
 if (VAR_5 == -1)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4, &VAR_6->ta_uargs,
     sizeof(VAR_6->ta_uargs));
 return VAR_5;
}
