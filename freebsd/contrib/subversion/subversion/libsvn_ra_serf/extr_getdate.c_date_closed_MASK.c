
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__* revision; } ;
typedef TYPE_2__ date_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_serf__xml_estate_t *VAR_2,
            void *VAR_3,
            int VAR_4,
            const svn_string_t *VAR_5,
            apr_hash_t *VAR_6,
            apr_pool_t *VAR_7)
{
  date_context_t *VAR_8 = VAR_3;
  apr_int64_t VAR_9;

  FUNC_1(VAR_4 == VAR_1);
  FUNC_1(VAR_5 != ((void*)0));

  FUNC_0(FUNC_2(&VAR_9, VAR_5->data));

  *VAR_8->revision = (svn_revnum_t)VAR_9;

  return VAR_0;
}
