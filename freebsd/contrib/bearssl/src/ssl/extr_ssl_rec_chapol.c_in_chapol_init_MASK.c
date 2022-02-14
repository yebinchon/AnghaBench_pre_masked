
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * in; } ;
struct TYPE_6__ {TYPE_1__ vtable; } ;
typedef TYPE_2__ br_sslrec_chapol_context ;
typedef int br_poly1305_run ;
typedef int br_chacha20_run ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,void const*,void const*) ;

__attribute__((used)) static void
FUNC_1(br_sslrec_chapol_context *VAR_1,
 br_chacha20_run VAR_2, br_poly1305_run VAR_3,
 const void *VAR_4, const void *VAR_5)
{
 VAR_1->vtable.in = &VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
