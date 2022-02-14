
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t qlen; int q; } ;
struct TYPE_12__ {TYPE_3__ ec; } ;
struct TYPE_14__ {TYPE_2__ key; } ;
typedef TYPE_4__ br_x509_pkey ;
struct TYPE_15__ {TYPE_4__* (* get_pkey ) (TYPE_5__ const**,int *) ;} ;
typedef TYPE_5__ br_x509_class ;
struct TYPE_11__ {TYPE_5__** x509ctx; } ;
struct TYPE_16__ {TYPE_1__ eng; } ;
typedef TYPE_6__ br_ssl_server_context ;


 int FUNC_0 (TYPE_6__*,int,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 TYPE_4__* FUNC_2 (TYPE_5__ const**,int *) ;

__attribute__((used)) static void
FUNC_3(br_ssl_server_context *VAR_0, int VAR_1)
{
 unsigned char VAR_2[133];
 size_t VAR_3;
 const br_x509_class **VAR_4;
 const br_x509_pkey *VAR_5;

 VAR_4 = VAR_0->eng.x509ctx;
 VAR_5 = (*VAR_4)->get_pkey(VAR_4, ((void*)0));
 VAR_3 = VAR_5->key.ec.qlen;
 if (VAR_3 > sizeof VAR_2) {





  VAR_3 = 2;
 }
 FUNC_1(VAR_2, VAR_5->key.ec.q, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
