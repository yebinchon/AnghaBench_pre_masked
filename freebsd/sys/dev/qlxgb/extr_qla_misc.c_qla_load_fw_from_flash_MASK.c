
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int data_uhi; int data_ulo; int data_hi; int data_lo; } ;
typedef TYPE_1__ offchip_mem_val_t ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_0)
{
 uint64_t VAR_1 = 0x10000;
 uint32_t VAR_2 = 0x10000;
 uint32_t VAR_3;
 offchip_mem_val_t VAR_4;



 for (VAR_3 = 0; VAR_3 < 0x20000 ; ) {
  FUNC_0(VAR_0, VAR_2, &VAR_4.data_lo);
  VAR_3 = VAR_3 + 4;
  VAR_2 = VAR_2 + 4;

  FUNC_0(VAR_0, VAR_2, &VAR_4.data_hi);
  VAR_3 = VAR_3 + 4;
  VAR_2 = VAR_2 + 4;

  FUNC_0(VAR_0, VAR_2, &VAR_4.data_ulo);
  VAR_3 = VAR_3 + 4;
  VAR_2 = VAR_2 + 4;

  FUNC_0(VAR_0, VAR_2, &VAR_4.data_uhi);
  VAR_3 = VAR_3 + 4;
  VAR_2 = VAR_2 + 4;

  FUNC_1(VAR_0, VAR_1, &VAR_4, 0);

  VAR_1 = VAR_1 + 16;
 }
 return;
}
