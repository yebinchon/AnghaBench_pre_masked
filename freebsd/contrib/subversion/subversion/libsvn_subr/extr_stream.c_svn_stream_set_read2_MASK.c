
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* read_full_fn; void* read_fn; } ;
typedef TYPE_1__ svn_stream_t ;
typedef void* svn_read_fn_t ;



void
FUNC_0(svn_stream_t *VAR_0,
                     svn_read_fn_t VAR_1,
                     svn_read_fn_t VAR_2)
{
  VAR_0->read_fn = VAR_1;
  VAR_0->read_full_fn = VAR_2;
}
