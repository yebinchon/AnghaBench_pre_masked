
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_sha1_t ;
struct TYPE_3__ {unsigned char* key; int sha1ctx; } ;
typedef TYPE_1__ isc_hmacsha1_t ;
typedef int ipad ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

void
FUNC_5(isc_hmacsha1_t *VAR_2, const unsigned char *VAR_3,
    unsigned int VAR_4)
{
 unsigned char VAR_5[VAR_1];
 unsigned int VAR_6;

 FUNC_4(VAR_2->key, 0, sizeof(VAR_2->key));
 if (VAR_4 > sizeof(VAR_2->key)) {
  isc_sha1_t VAR_7;
  FUNC_1(&VAR_7);
  FUNC_2(&VAR_7, VAR_3, VAR_4);
  FUNC_0(&VAR_7, VAR_2->key);
 } else
  FUNC_3(VAR_2->key, VAR_3, VAR_4);

 FUNC_1(&VAR_2->sha1ctx);
 FUNC_4(VAR_5, VAR_0, sizeof(VAR_5));
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5[VAR_6] ^= VAR_2->key[VAR_6];
 FUNC_2(&VAR_2->sha1ctx, VAR_5, sizeof(VAR_5));
}
