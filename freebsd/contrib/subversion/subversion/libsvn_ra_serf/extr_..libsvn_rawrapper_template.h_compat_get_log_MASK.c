
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_log_message_receiver_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_2__ {int * (* get_log ) (void*,int const*,int ,int ,int ,int ,int ,int ,int ,int ,void*,int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (void*,int const*,int ,int ,int ,int ,int ,int ,int ,int ,void*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void**,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_3(void *VAR_2,
                                   const apr_array_header_t *VAR_3,
                                   svn_revnum_t VAR_4,
                                   svn_revnum_t VAR_5,
                                   svn_boolean_t VAR_6,
                                   svn_boolean_t VAR_7,
                                   svn_log_message_receiver_t VAR_8,
                                   void *VAR_9,
                                   apr_pool_t *VAR_10)
{
  svn_log_entry_receiver_t VAR_11;
  void *VAR_12;

  FUNC_2(&VAR_11, &VAR_12,
                               VAR_8, VAR_9,
                               VAR_10);

  return VAR_1.get_log(VAR_2, VAR_3, VAR_4, VAR_5, 0,
                      VAR_6, VAR_7,
                      VAR_0,
                      FUNC_1(VAR_10),
                      VAR_11, VAR_12, VAR_10);
}
