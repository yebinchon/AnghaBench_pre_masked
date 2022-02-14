
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfstestargs {int ta_cleanerloop; int ta_cleanerthread; int ta_mntpath; int ta_uargs; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,struct lfstestargs*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char const*,int,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*) ;

int
FUNC_5(const atf_tc_t *VAR_2, void *VAR_3, const char *VAR_4, int VAR_5)
{
 struct lfstestargs *VAR_6 = VAR_3;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, 0777);
 if (VAR_7 == -1)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_4, VAR_5, &VAR_6->ta_uargs,
     sizeof(VAR_6->ta_uargs));
 if (VAR_7 == -1)
  return VAR_7;

 FUNC_4(VAR_6->ta_mntpath, VAR_4);
 VAR_7 = FUNC_0(&VAR_6->ta_cleanerthread, ((void*)0), VAR_1, VAR_6);
 if (VAR_7)
  return VAR_7;


 FUNC_3(&VAR_6->ta_cleanerloop);

 return 0;
}
