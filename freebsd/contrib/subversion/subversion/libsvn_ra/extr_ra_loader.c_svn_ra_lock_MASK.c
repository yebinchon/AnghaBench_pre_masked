
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_lock_callback_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_5__ {int * (* lock ) (TYPE_2__*,int *,char const*,int ,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (TYPE_2__*,int *,char const*,int ,int ,void*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int ) ;

svn_error_t *FUNC_10(svn_ra_session_t *VAR_1,
                         apr_hash_t *VAR_2,
                         const char *VAR_3,
                         svn_boolean_t VAR_4,
                         svn_ra_lock_callback_t VAR_5,
                         void *VAR_6,
                         apr_pool_t *VAR_7)
{
  apr_hash_index_t *VAR_8;

  for (VAR_8 = FUNC_2(VAR_7, VAR_2); VAR_8; VAR_8 = FUNC_3(VAR_8))
    {
      const char *VAR_9 = FUNC_4(VAR_8);

      FUNC_0(FUNC_8(VAR_9));
    }

  if (VAR_3 && ! FUNC_9(VAR_3, FUNC_5(VAR_3)))
    return FUNC_7
      (VAR_0, ((void*)0),
       FUNC_1("Lock comment contains illegal characters"));

  return VAR_1->vtable->lock(VAR_1, VAR_2, VAR_3, VAR_4,
                               VAR_5, VAR_6, VAR_7);
}
