
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ context_size; int pool; int output_stream; TYPE_2__* context_saver; } ;
typedef TYPE_1__ svn_diff3__file_output_baton_t ;
struct TYPE_6__ {scalar_t__ context_size; void* len; void* data; int stream; } ;
typedef TYPE_2__ context_saver_t ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(svn_diff3__file_output_baton_t *VAR_1)
{
  context_saver_t *VAR_2;

  FUNC_1(VAR_1->context_size > 0);

  FUNC_2(VAR_1->pool);
  VAR_2 = FUNC_0(VAR_1->pool, sizeof(*VAR_2));
  VAR_2->stream = FUNC_3(VAR_1->pool);
  FUNC_4(VAR_2->stream, VAR_2);
  FUNC_5(VAR_2->stream, VAR_0);
  VAR_1->context_saver = VAR_2;
  VAR_1->output_stream = VAR_2->stream;
  VAR_2->context_size = VAR_1->context_size;
  VAR_2->data = FUNC_0(VAR_1->pool, sizeof(*VAR_2->data) * VAR_2->context_size);
  VAR_2->len = FUNC_0(VAR_1->pool, sizeof(*VAR_2->len) * VAR_2->context_size);
}
