
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pl310_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct pl310_softc *VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 VAR_6 = (VAR_9 & VAR_1) >>
     VAR_2;
 VAR_6 = 1 << (VAR_6 + 13);
 if (VAR_9 & (1 << VAR_0))
  VAR_7 = 16;
 else
  VAR_7 = 8;
 VAR_5 = (1 << VAR_7) - 1;
 VAR_4 = VAR_6 * VAR_7;
}
