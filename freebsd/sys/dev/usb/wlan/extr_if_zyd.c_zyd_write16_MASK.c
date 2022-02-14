
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zyd_softc {int dummy; } ;
struct zyd_pair {void* val; void* reg; } ;
typedef int pair ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct zyd_softc*,int ,struct zyd_pair*,int,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct zyd_softc *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 struct zyd_pair VAR_4;

 VAR_4.reg = FUNC_0(VAR_2);
 VAR_4.val = FUNC_0(VAR_3);

 return FUNC_1(VAR_1, VAR_0, &VAR_4, sizeof(VAR_4), ((void*)0), 0, 0);
}
