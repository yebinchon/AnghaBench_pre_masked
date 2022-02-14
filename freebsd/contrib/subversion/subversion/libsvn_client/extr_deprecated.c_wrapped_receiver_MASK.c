
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct wrapped_receiver_baton_s {int orig_baton; int * (* orig_receiver ) (int ,int ,int ,char const*,char const*,int ,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int * FUNC_0 (int ,int ,int ,char const*,char const*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_2 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                 apr_int64_t VAR_1,
                 svn_revnum_t VAR_2,
                 const char *VAR_3,
                 const char *VAR_4,
                 const char *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct wrapped_receiver_baton_s *VAR_7 = VAR_0;
  svn_stringbuf_t *VAR_8 = FUNC_2(VAR_5, VAR_6);

  FUNC_1(VAR_8, '\r');

  return VAR_7->orig_receiver(VAR_7->orig_baton, VAR_1, VAR_2, VAR_3,
                          VAR_4, VAR_8->data, VAR_6);
}
