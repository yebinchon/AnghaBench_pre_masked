
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hbuf_out; scalar_t__ saved_hbuf_out; int hlen_out; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(br_ssl_engine_context *VAR_0)
{
 if (VAR_0->hbuf_out != VAR_0->saved_hbuf_out) {
  FUNC_1(VAR_0, VAR_0->hbuf_out - VAR_0->saved_hbuf_out);
 }
 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, 0);
 }
 VAR_0->saved_hbuf_out = VAR_0->hbuf_out = FUNC_2(VAR_0, &VAR_0->hlen_out);
}
