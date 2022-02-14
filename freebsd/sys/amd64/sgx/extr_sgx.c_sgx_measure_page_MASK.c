
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sgx_softc {int mtx_encls; } ;
struct epc_page {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,void*) ;

__attribute__((used)) static int
FUNC_3(struct sgx_softc *VAR_2, struct epc_page *VAR_3,
    struct epc_page *VAR_4, uint16_t VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 FUNC_0(&VAR_2->mtx_encls);

 for (VAR_6 = 0, VAR_7 = 1; VAR_6 < VAR_0; VAR_6 += 0x100, VAR_7 <<= 1) {
  if (!(VAR_7 & VAR_5))
   continue;

  VAR_8 = FUNC_2((void *)VAR_3->base,
      (void *)(VAR_4->base + VAR_6));
  if (VAR_8 == VAR_1) {
   FUNC_1(&VAR_2->mtx_encls);
   return (VAR_8);
  }
 }

 FUNC_1(&VAR_2->mtx_encls);

 return (0);
}
