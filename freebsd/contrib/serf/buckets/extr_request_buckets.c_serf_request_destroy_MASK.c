
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ body; scalar_t__ headers; } ;
typedef TYPE_2__ request_context_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(serf_bucket_t *VAR_0)
{
  request_context_t *VAR_1 = VAR_0->data;

  FUNC_0(VAR_1->headers);

  if (VAR_1->body)
    FUNC_0(VAR_1->body);

  FUNC_1(VAR_0);
}
