
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_3__ {int zcs_bytes; } ;
typedef TYPE_1__ zio_cksum_salt_t ;
typedef void Skein_512_Ctxt_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ,int ,int) ;
 void* FUNC_1 (int,int ) ;

void *
FUNC_2(const zio_cksum_salt_t *VAR_1)
{
 Skein_512_Ctxt_t *VAR_2;

 VAR_2 = FUNC_1(sizeof (*VAR_2), VAR_0);
 (void) FUNC_0(VAR_2, sizeof (zio_cksum_t) * 8, 0,
     VAR_1->zcs_bytes, sizeof (VAR_1->zcs_bytes));
 return (VAR_2);
}
