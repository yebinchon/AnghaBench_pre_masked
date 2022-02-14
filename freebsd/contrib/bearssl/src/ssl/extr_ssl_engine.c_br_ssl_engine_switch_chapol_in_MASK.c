
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int in; } ;
struct TYPE_10__ {TYPE_2__ vtable; } ;
struct TYPE_11__ {TYPE_3__ chapol; } ;
struct TYPE_12__ {int incrypt; int ipoly; int ichacha; TYPE_4__ in; TYPE_1__* ichapol_in; } ;
typedef TYPE_5__ br_ssl_engine_context ;
struct TYPE_8__ {int (* init ) (int *,int ,int ,unsigned char*,unsigned char*) ;} ;


 int FUNC_0 (TYPE_5__*,int,int,unsigned char*) ;
 int FUNC_1 (int *,int ,int ,unsigned char*,unsigned char*) ;

void
FUNC_2(br_ssl_engine_context *VAR_0,
 int VAR_1, int VAR_2)
{
 unsigned char VAR_3[88];
 unsigned char *VAR_4, *VAR_5;

 FUNC_0(VAR_0, VAR_2, 44, VAR_3);
 if (VAR_1) {
  VAR_4 = &VAR_3[32];
  VAR_5 = &VAR_3[76];
 } else {
  VAR_4 = &VAR_3[0];
  VAR_5 = &VAR_3[64];
 }
 VAR_0->ichapol_in->init(&VAR_0->in.chapol.vtable.in,
  VAR_0->ichacha, VAR_0->ipoly, VAR_4, VAR_5);
 VAR_0->incrypt = 1;
}
