
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct a10_aintc_softc {int mtx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct a10_aintc_softc*,int ) ;
 int FUNC_3 (struct a10_aintc_softc*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct a10_aintc_softc *VAR_0, u_int VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = (VAR_1 % 32);
 VAR_3 = (VAR_1 / 32);

 FUNC_4(&VAR_0->mtx);
 VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_3));
 VAR_4 |= (1 << VAR_2);
 FUNC_3(VAR_0, FUNC_0(VAR_3), VAR_4);

 VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_3));
 VAR_4 &= ~(1 << VAR_2);
 FUNC_3(VAR_0, FUNC_1(VAR_3), VAR_4);
 FUNC_5(&VAR_0->mtx);
}
