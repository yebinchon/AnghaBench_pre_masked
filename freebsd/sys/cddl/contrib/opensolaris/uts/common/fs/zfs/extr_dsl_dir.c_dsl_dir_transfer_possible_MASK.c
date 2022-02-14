
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int dsl_dir_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int *,int *) ;
 int FUNC_4 (int *,int ,int *) ;

int
FUNC_5(dsl_dir_t *VAR_4, dsl_dir_t *VAR_5,
    uint64_t VAR_6, uint64_t VAR_7, uint64_t VAR_8, cred_t *VAR_9)
{
 dsl_dir_t *VAR_10;
 int64_t VAR_11;
 uint64_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_1(VAR_4, VAR_5);
 VAR_11 = FUNC_4(VAR_4, -VAR_8, VAR_10);
 VAR_12 = FUNC_2(VAR_5, VAR_10, VAR_11, VAR_1);
 if (VAR_12 < VAR_8)
  return (FUNC_0(VAR_0));

 VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_2,
     VAR_10, VAR_9);
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_13 = FUNC_3(VAR_5, VAR_7, VAR_3,
     VAR_10, VAR_9);
 if (VAR_13 != 0)
  return (VAR_13);

 return (0);
}
