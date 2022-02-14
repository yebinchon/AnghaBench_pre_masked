
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_ssize_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__,void const*) ;
 int FUNC_2 (int ,void const*,scalar_t__) ;
 scalar_t__ FUNC_3 (void const*) ;

__attribute__((used)) static void
FUNC_4(apr_hash_t *VAR_1,
              const void *VAR_2,
              apr_ssize_t VAR_3,
              const void *VAR_4)
{
  if (VAR_3 == VAR_0)
    VAR_3 = FUNC_3(VAR_2);
  FUNC_1(VAR_1, FUNC_2(FUNC_0(VAR_1), VAR_2, VAR_3),
               VAR_3, VAR_4);
}
