
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int int_stream_count; } ;
typedef TYPE_1__ svn_packed__data_root_t ;
struct TYPE_9__ {int lengths_stream; int lengths_stream_index; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

svn_packed__byte_stream_t *
FUNC_2(svn_packed__data_root_t *VAR_1)
{
  svn_packed__byte_stream_t *VAR_2
    = FUNC_0(VAR_1);

  VAR_2->lengths_stream_index = VAR_1->int_stream_count;
  VAR_2->lengths_stream = FUNC_1(VAR_1, VAR_0, VAR_0);

  return VAR_2;
}
