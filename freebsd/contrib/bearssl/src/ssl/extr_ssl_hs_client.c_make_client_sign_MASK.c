
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pad; int mhash; } ;
struct TYPE_6__ {TYPE_1__ eng; scalar_t__ hash_id; TYPE_3__** client_auth_vtable; } ;
typedef TYPE_2__ br_ssl_client_context ;
struct TYPE_7__ {size_t (* do_sign ) (TYPE_3__**,scalar_t__,size_t,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (TYPE_3__**,scalar_t__,size_t,int ,int) ;

__attribute__((used)) static size_t
FUNC_2(br_ssl_client_context *VAR_2)
{
 size_t VAR_3;







 if (VAR_2->hash_id) {
  VAR_3 = FUNC_0(&VAR_2->eng.mhash,
   VAR_2->hash_id, VAR_2->eng.pad);
 } else {
  FUNC_0(&VAR_2->eng.mhash,
   VAR_0, VAR_2->eng.pad);
  FUNC_0(&VAR_2->eng.mhash,
   VAR_1, VAR_2->eng.pad + 16);
  VAR_3 = 36;
 }
 return (*VAR_2->client_auth_vtable)->do_sign(
  VAR_2->client_auth_vtable, VAR_2->hash_id, VAR_3,
  VAR_2->eng.pad, sizeof VAR_2->eng.pad);
}
