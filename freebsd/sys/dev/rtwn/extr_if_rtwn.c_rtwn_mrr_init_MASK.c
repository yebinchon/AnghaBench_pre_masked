
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtwn_softc*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_3, VAR_0 + VAR_4, VAR_4 + 1);
  FUNC_0(VAR_3, VAR_2 + VAR_4, VAR_4 + 1);
 }
}
