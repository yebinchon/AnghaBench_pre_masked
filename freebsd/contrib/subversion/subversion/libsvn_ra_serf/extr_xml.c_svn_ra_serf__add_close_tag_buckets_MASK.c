
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;


 int * FUNC_0 (char const*,int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(serf_bucket_t *VAR_0,
                                   serf_bucket_alloc_t *VAR_1,
                                   const char *VAR_2)
{
  serf_bucket_t *VAR_3;

  VAR_3 = FUNC_1("</", 2, VAR_1);
  FUNC_2(VAR_0, VAR_3);

  VAR_3 = FUNC_0(VAR_2, VAR_1);
  FUNC_2(VAR_0, VAR_3);

  VAR_3 = FUNC_1(">", 1, VAR_1);
  FUNC_2(VAR_0, VAR_3);
}
