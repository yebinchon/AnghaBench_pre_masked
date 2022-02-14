
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; int md5ctx; } ;
typedef TYPE_1__ isc_hmacmd5_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(isc_hmacmd5_t *VAR_0) {
 FUNC_0(&VAR_0->md5ctx);
 FUNC_1(VAR_0->key, 0, sizeof(VAR_0->key));
}
