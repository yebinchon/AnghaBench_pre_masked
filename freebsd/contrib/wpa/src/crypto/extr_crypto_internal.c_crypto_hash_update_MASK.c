
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sha512; int sha384; int sha256; int sha1; int md5; } ;
struct crypto_hash {int alg; TYPE_1__ u; } ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int *,int const*,size_t) ;

void FUNC_5(struct crypto_hash *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 if (VAR_0 == ((void*)0))
  return;

 switch (VAR_0->alg) {
 case 132:
 case 135:
  FUNC_0(&VAR_0->u.md5, VAR_1, VAR_2);
  break;
 case 131:
 case 134:
  FUNC_1(&VAR_0->u.sha1, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
