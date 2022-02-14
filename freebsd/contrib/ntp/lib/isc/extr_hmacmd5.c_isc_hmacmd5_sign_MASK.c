
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int opad ;
struct TYPE_4__ {unsigned char* key; int md5ctx; } ;
typedef TYPE_1__ isc_hmacmd5_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

void
FUNC_5(isc_hmacmd5_t *VAR_3, unsigned char *VAR_4) {
 unsigned char VAR_5[VAR_2];
 int VAR_6;

 FUNC_1(&VAR_3->md5ctx, VAR_4);

 FUNC_4(VAR_5, VAR_1, sizeof(VAR_5));
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_5[VAR_6] ^= VAR_3->key[VAR_6];

 FUNC_2(&VAR_3->md5ctx);
 FUNC_3(&VAR_3->md5ctx, VAR_5, sizeof(VAR_5));
 FUNC_3(&VAR_3->md5ctx, VAR_4, VAR_0);
 FUNC_1(&VAR_3->md5ctx, VAR_4);
 FUNC_0(VAR_3);
}
