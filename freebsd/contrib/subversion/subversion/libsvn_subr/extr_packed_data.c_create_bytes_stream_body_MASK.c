
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int byte_stream_count; TYPE_2__* last_byte_stream; TYPE_2__* first_byte_stream; int pool; } ;
typedef TYPE_1__ svn_packed__data_root_t ;
struct TYPE_7__ {struct TYPE_7__* next; int packed; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;


 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_packed__byte_stream_t *
FUNC_2(svn_packed__data_root_t *VAR_0)
{
  svn_packed__byte_stream_t *VAR_1
    = FUNC_0(VAR_0->pool, sizeof(*VAR_1));

  VAR_1->packed = FUNC_1(VAR_0->pool);

  if (VAR_0->last_byte_stream)
    VAR_0->last_byte_stream->next = VAR_1;
  else
    VAR_0->first_byte_stream = VAR_1;

  VAR_0->last_byte_stream = VAR_1;
  VAR_0->byte_stream_count++;

  return VAR_1;
}
