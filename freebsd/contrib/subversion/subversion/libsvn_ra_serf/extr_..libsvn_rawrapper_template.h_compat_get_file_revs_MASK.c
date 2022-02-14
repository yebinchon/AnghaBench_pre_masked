
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_file_rev_handler_t ;
typedef int svn_file_rev_handler_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* get_file_revs ) (void*,char const*,int ,int ,int ,int ,void*,int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (void*,char const*,int ,int ,int ,int ,void*,int *) ;
 int FUNC_1 (int *,void**,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_2(void *VAR_2,
                                         const char *VAR_3,
                                         svn_revnum_t VAR_4,
                                         svn_revnum_t VAR_5,
                                         svn_ra_file_rev_handler_t VAR_6,
                                         void *VAR_7,
                                         apr_pool_t *VAR_8)
{
  svn_file_rev_handler_t VAR_9;
  void *VAR_10;

  FUNC_1(&VAR_9, &VAR_10,
                                   VAR_6, VAR_7,
                                   VAR_8);

  return VAR_1.get_file_revs(VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_0,
                            VAR_9, VAR_10, VAR_8);
}
