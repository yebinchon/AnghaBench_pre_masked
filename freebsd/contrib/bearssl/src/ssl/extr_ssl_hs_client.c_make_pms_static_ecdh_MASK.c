
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {size_t qlen; int q; } ;
struct TYPE_13__ {TYPE_1__ ec; } ;
struct TYPE_14__ {TYPE_2__ key; } ;
typedef TYPE_3__ br_x509_pkey ;
struct TYPE_15__ {TYPE_3__* (* get_pkey ) (TYPE_4__ const**,int *) ;} ;
typedef TYPE_4__ br_x509_class ;
struct TYPE_11__ {TYPE_4__** x509ctx; } ;
struct TYPE_16__ {TYPE_10__ eng; TYPE_6__** client_auth_vtable; } ;
typedef TYPE_5__ br_ssl_client_context ;
struct TYPE_17__ {int (* do_keyx ) (TYPE_6__**,unsigned char*,size_t*) ;} ;


 int FUNC_0 (TYPE_10__*,int,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 TYPE_3__* FUNC_2 (TYPE_4__ const**,int *) ;
 int FUNC_3 (TYPE_6__**,unsigned char*,size_t*) ;

__attribute__((used)) static int
FUNC_4(br_ssl_client_context *VAR_0, int VAR_1)
{
 unsigned char VAR_2[133];
 size_t VAR_3;
 const br_x509_class **VAR_4;
 const br_x509_pkey *VAR_5;

 VAR_4 = VAR_0->eng.x509ctx;
 VAR_5 = (*VAR_4)->get_pkey(VAR_4, ((void*)0));
 VAR_3 = VAR_5->key.ec.qlen;
 if (VAR_3 > sizeof VAR_2) {
  return -1;
 }
 FUNC_1(VAR_2, VAR_5->key.ec.q, VAR_3);
 if (!(*VAR_0->client_auth_vtable)->do_keyx(
  VAR_0->client_auth_vtable, VAR_2, &VAR_3))
 {
  return -1;
 }
 FUNC_0(&VAR_0->eng,
  VAR_1, VAR_2, VAR_3);
 return 0;
}
