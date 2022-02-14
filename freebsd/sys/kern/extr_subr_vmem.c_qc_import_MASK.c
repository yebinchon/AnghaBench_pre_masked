
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vmem_addr_t ;
struct TYPE_2__ {int qc_size; int qc_vmem; } ;
typedef TYPE_1__ qcache_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, void **VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 qcache_t *VAR_8;
 vmem_addr_t VAR_9;
 int VAR_10;

 FUNC_0((VAR_7 & VAR_0) == 0, ("blocking allocation"));

 VAR_8 = VAR_3;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (FUNC_1(VAR_8->qc_vmem, VAR_8->qc_size, 0, 0, 0,
      VAR_2, VAR_1, VAR_7, &VAR_9) != 0)
   break;
  VAR_4[VAR_10] = (void *)VAR_9;
 }
 return (VAR_10);
}
