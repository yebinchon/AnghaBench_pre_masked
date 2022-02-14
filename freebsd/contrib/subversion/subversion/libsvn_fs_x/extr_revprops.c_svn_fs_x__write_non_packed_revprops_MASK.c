
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__**,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int *) ;

svn_error_t *
FUNC_7(apr_file_t *VAR_3,
                                    apr_hash_t *VAR_4,
                                    apr_pool_t *VAR_5)
{
  svn_stream_t *VAR_6;
  svn_checksum_t *VAR_7;

  VAR_6 = FUNC_6(VAR_3, VAR_1, VAR_5);
  VAR_6 = FUNC_1(&VAR_7, VAR_6,
                                           VAR_2,
                                           VAR_5);
  FUNC_0(FUNC_3(VAR_6, VAR_4, VAR_5));
  FUNC_0(FUNC_5(VAR_6));


  FUNC_0(FUNC_4(VAR_3, VAR_7->digest,
                                 FUNC_2(VAR_7), ((void*)0),
                                 VAR_5));

  return VAR_0;
}
