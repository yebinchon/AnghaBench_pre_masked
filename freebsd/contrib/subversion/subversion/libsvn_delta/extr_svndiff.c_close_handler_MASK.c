
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct decode_baton {int header_bytes; int pool; int consumer_baton; int * (* consumer_func ) (int *,int ) ;TYPE_1__* buffer; scalar_t__ error_on_early_close; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1)
{
  struct decode_baton *VAR_2 = (struct decode_baton *) VAR_1;
  svn_error_t *VAR_3;



  if ((VAR_2->error_on_early_close)
      && (VAR_2->header_bytes < 4 || VAR_2->buffer->len != 0))
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Unexpected end of svndiff input"));


  VAR_3 = VAR_2->consumer_func(((void*)0), VAR_2->consumer_baton);
  FUNC_3(VAR_2->pool);
  return VAR_3;
}
