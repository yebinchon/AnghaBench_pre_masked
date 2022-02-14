
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer_used; TYPE_2__* private_data; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_5__ {scalar_t__ item_count; } ;
typedef TYPE_2__ packed_int_private_t ;
typedef scalar_t__ apr_size_t ;



apr_size_t
FUNC_0(svn_packed__int_stream_t *VAR_0)
{
  packed_int_private_t *VAR_1 = VAR_0->private_data;
  return VAR_1->item_count + VAR_0->buffer_used;
}
