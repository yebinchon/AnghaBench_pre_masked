
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct zyd_softc {int dummy; } ;
struct zyd_pair {void* val; void* reg; } ;
typedef int pair ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct zyd_softc*,int ,struct zyd_pair*,int,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct zyd_softc *VAR_1, uint16_t VAR_2, uint32_t VAR_3)
{
 struct zyd_pair VAR_4[2];

 VAR_4[0].reg = FUNC_2(FUNC_0(VAR_2));
 VAR_4[0].val = FUNC_2(VAR_3 >> 16);
 VAR_4[1].reg = FUNC_2(FUNC_1(VAR_2));
 VAR_4[1].val = FUNC_2(VAR_3 & 0xffff);

 return FUNC_3(VAR_1, VAR_0, VAR_4, sizeof(VAR_4), ((void*)0), 0, 0);
}
