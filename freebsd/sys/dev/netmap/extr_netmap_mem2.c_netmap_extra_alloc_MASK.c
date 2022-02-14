
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct netmap_mem_d {int dummy; } ;
struct netmap_adapter {struct netmap_mem_d* nm_mem; } ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 scalar_t__* FUNC_2 (struct netmap_mem_d*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

uint32_t
FUNC_5(struct netmap_adapter *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
 struct netmap_mem_d *VAR_3 = VAR_0->nm_mem;
 uint32_t VAR_4, VAR_5 = 0;

 FUNC_0(VAR_3);

 *VAR_1 = 0;
 for (VAR_4 = 0 ; VAR_4 < VAR_2; VAR_4++) {
  uint32_t VAR_6 = *VAR_1;
  uint32_t *VAR_7 = FUNC_2(VAR_3, &VAR_5, VAR_1);
  if (VAR_7 == ((void*)0)) {
   FUNC_4("no more buffers after %d of %d", VAR_4, VAR_2);
   *VAR_1 = VAR_6;
   break;
  }
  FUNC_3(5, "allocate buffer %d -> %d", *VAR_1, VAR_6);
  *VAR_7 = VAR_6;
 }

 FUNC_1(VAR_3);

 return VAR_4;
}
