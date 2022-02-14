
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int opad ;
typedef int newdigest ;
struct TYPE_3__ {unsigned char* key; int sha224ctx; } ;
typedef TYPE_1__ isc_hmacsha224_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,int ,int) ;

void
FUNC_6(isc_hmacsha224_t *VAR_3, unsigned char *VAR_4, size_t VAR_5) {
 unsigned char VAR_6[VAR_0];
 unsigned char VAR_7[VAR_1];
 unsigned int VAR_8;

 FUNC_0(VAR_5 <= VAR_1);
 FUNC_1(VAR_7, &VAR_3->sha224ctx);

 FUNC_5(VAR_6, VAR_2, sizeof(VAR_6));
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6[VAR_8] ^= VAR_3->key[VAR_8];

 FUNC_2(&VAR_3->sha224ctx);
 FUNC_3(&VAR_3->sha224ctx, VAR_6, sizeof(VAR_6));
 FUNC_3(&VAR_3->sha224ctx, VAR_7, VAR_1);
 FUNC_1(VAR_7, &VAR_3->sha224ctx);
 FUNC_4(VAR_4, VAR_7, VAR_5);
 FUNC_5(VAR_7, 0, sizeof(VAR_7));
}
