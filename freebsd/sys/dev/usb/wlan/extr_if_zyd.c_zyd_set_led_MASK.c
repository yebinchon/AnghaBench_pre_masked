
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zyd_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct zyd_softc*,int ,int*) ;
 int FUNC_1 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct zyd_softc *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_1, VAR_0, &VAR_5);
 VAR_5 &= ~VAR_2;
 if (VAR_3)
  VAR_5 |= VAR_2;
 FUNC_1(VAR_1, VAR_0, VAR_5);
fail:
 return (VAR_4);
}
