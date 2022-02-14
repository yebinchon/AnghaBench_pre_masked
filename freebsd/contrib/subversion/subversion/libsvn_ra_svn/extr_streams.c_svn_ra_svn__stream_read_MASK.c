
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_stream; } ;
typedef TYPE_1__ svn_ra_svn__stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,char*,scalar_t__*) ;

svn_error_t *
FUNC_3(svn_ra_svn__stream_t *VAR_2, char *VAR_3,
                        apr_size_t *VAR_4)
{
  FUNC_0(FUNC_2(VAR_2->in_stream, VAR_3, VAR_4));

  if (*VAR_4 == 0)
    return FUNC_1(VAR_0, ((void*)0), ((void*)0));

  return VAR_1;
}
