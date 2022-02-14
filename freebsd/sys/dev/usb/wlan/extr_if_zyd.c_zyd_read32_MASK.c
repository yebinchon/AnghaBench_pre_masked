
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int tmp ;
struct zyd_softc {int dummy; } ;
struct zyd_pair {int val; } ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct zyd_softc*,int ,int *,int,struct zyd_pair*,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct zyd_softc *VAR_2, uint16_t VAR_3, uint32_t *VAR_4)
{
 struct zyd_pair VAR_5[2];
 uint16_t VAR_6[2];
 int VAR_7;

 VAR_6[0] = FUNC_2(FUNC_0(VAR_3));
 VAR_6[1] = FUNC_2(FUNC_1(VAR_3));
 VAR_7 = FUNC_4(VAR_2, VAR_1, VAR_6, sizeof(VAR_6), VAR_5, sizeof(VAR_5),
     VAR_0);
 if (VAR_7 == 0)
  *VAR_4 = FUNC_3(VAR_5[0].val) << 16 | FUNC_3(VAR_5[1].val);
 return (VAR_7);
}
