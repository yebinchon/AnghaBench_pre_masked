
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct blame_receiver_wrapper_baton2 {int baton; int * (* receiver ) (int ,int ,int ,char const*,char const*,int ,char const*,char const*,char const*,char const*,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ,char const*,char const*,int ,char const*,char const*,char const*,char const*,int *) ;
 char* FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3,
   svn_revnum_t VAR_4,
   svn_revnum_t VAR_5,
   apr_int64_t VAR_6,
   svn_revnum_t VAR_7,
   apr_hash_t *VAR_8,
   svn_revnum_t VAR_9,
   apr_hash_t *VAR_10,
   const char *VAR_11,
   const char *VAR_12,
   svn_boolean_t VAR_13,
   apr_pool_t *VAR_14)
{
  struct blame_receiver_wrapper_baton2 *VAR_15 = VAR_3;
  const char *VAR_16 = ((void*)0);
  const char *VAR_17 = ((void*)0);
  const char *VAR_18 = ((void*)0);
  const char *VAR_19 = ((void*)0);

  if (VAR_8 != ((void*)0))
    {
      VAR_16 = FUNC_1(VAR_8, VAR_1);
      VAR_17 = FUNC_1(VAR_8, VAR_2);
    }
  if (VAR_10 != ((void*)0))
    {
      VAR_18 = FUNC_1(VAR_10,
                                         VAR_1);
      VAR_19 = FUNC_1(VAR_10,
                                       VAR_2);
    }

  if (VAR_15->receiver)
    return VAR_15->receiver(VAR_15->baton, VAR_6, VAR_7, VAR_16, VAR_17,
                          VAR_9, VAR_18, VAR_19,
                          VAR_11, VAR_12, VAR_14);

  return VAR_0;
}
