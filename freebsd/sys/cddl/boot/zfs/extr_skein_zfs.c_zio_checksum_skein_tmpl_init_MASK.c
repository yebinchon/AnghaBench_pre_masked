
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_3__ {int zcs_bytes; } ;
typedef TYPE_1__ zio_cksum_salt_t ;
typedef void Skein_512_Ctxt_t ;


 int FUNC_0 (void*,int,int ,int ,int) ;
 int FUNC_1 (void*,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void *
FUNC_3(const zio_cksum_salt_t *VAR_0)
{
 Skein_512_Ctxt_t *VAR_1;

 VAR_1 = FUNC_2(sizeof (*VAR_1));
 FUNC_1(VAR_1, sizeof (*VAR_1));
 (void) FUNC_0(VAR_1, sizeof (zio_cksum_t) * 8, 0,
     VAR_0->zcs_bytes, sizeof (VAR_0->zcs_bytes));
 return (VAR_1);
}
