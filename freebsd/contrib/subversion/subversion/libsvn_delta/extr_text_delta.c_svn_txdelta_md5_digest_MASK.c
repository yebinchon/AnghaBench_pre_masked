
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* (* md5_digest ) (int ) ;int baton; } ;
typedef TYPE_1__ svn_txdelta_stream_t ;


 unsigned char const* FUNC_0 (int ) ;

const unsigned char *
FUNC_1(svn_txdelta_stream_t *VAR_0)
{
  return VAR_0->md5_digest(VAR_0->baton);
}
