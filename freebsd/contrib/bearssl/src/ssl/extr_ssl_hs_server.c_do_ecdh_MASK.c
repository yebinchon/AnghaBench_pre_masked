
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__** policy_vtable; } ;
typedef TYPE_1__ br_ssl_server_context ;
struct TYPE_6__ {int (* do_keyx ) (TYPE_2__**,unsigned char*,size_t*) ;} ;


 int FUNC_0 (TYPE_1__*,int,unsigned char*,size_t,int ) ;
 int FUNC_1 (TYPE_2__**,unsigned char*,size_t*) ;

__attribute__((used)) static void
FUNC_2(br_ssl_server_context *VAR_0, int VAR_1,
 unsigned char *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4;




 VAR_4 = (*VAR_0->policy_vtable)->do_keyx(VAR_0->policy_vtable,
  VAR_2, &VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
