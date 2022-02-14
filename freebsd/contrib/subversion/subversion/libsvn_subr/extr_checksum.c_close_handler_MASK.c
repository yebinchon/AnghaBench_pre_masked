
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int digest; int kind; } ;
typedef TYPE_1__ svn_checksum_t ;
struct TYPE_5__ {int inner_stream; TYPE_1__** checksum; scalar_t__ digest; int pool; int context; } ;
typedef TYPE_2__ stream_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_1__**,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_0)
{
  stream_baton_t *VAR_1 = VAR_0;
  svn_checksum_t *VAR_2;


  if (!VAR_1->checksum)
    VAR_1->checksum = &VAR_2;


  FUNC_1(FUNC_3(VAR_1->checksum, VAR_1->context, VAR_1->pool));


  if (VAR_1->digest)
    {
      apr_size_t VAR_3 = FUNC_0((*VAR_1->checksum)->kind);
      FUNC_2(VAR_1->digest, (*VAR_1->checksum)->digest, VAR_3);
    }


  return FUNC_4(FUNC_5(VAR_1->inner_stream));
}
