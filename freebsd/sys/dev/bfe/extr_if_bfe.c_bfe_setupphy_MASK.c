
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int dummy; } ;


 int FUNC_0 (struct bfe_softc*,int,int*) ;
 int FUNC_1 (struct bfe_softc*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct bfe_softc *VAR_0)
{
 u_int32_t VAR_1;


 FUNC_0(VAR_0, 26, &VAR_1);
 FUNC_1(VAR_0, 26, VAR_1 & 0x7fff);
 FUNC_0(VAR_0, 26, &VAR_1);


 FUNC_0(VAR_0, 27, &VAR_1);
 FUNC_1(VAR_0, 27, VAR_1 | (1 << 6));

 return (0);
}
