
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* vtable; } ;
struct TYPE_7__ {void const* iv; TYPE_1__ bc; } ;
typedef TYPE_2__ br_sslrec_gcm_context ;
struct TYPE_8__ {int (* run ) (TYPE_3__**,unsigned char*,int,void*,int) ;} ;


 int FUNC_0 (unsigned char*,void const*,int) ;
 int FUNC_1 (TYPE_3__**,unsigned char*,int,void*,size_t) ;
 int FUNC_2 (TYPE_3__**,unsigned char*,int,void*,int) ;

__attribute__((used)) static void
FUNC_3(br_sslrec_gcm_context *VAR_0, const void *VAR_1, void *VAR_2, size_t VAR_3,
 void *VAR_4)
{
 unsigned char VAR_5[12];

 FUNC_0(VAR_5, VAR_0->iv, 4);
 FUNC_0(VAR_5 + 4, VAR_1, 8);
 VAR_0->bc.vtable->run(&VAR_0->bc.vtable, VAR_5, 2, VAR_2, VAR_3);
 VAR_0->bc.vtable->run(&VAR_0->bc.vtable, VAR_5, 1, VAR_4, 16);
}
