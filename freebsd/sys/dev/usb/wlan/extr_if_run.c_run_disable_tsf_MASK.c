
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct run_softc*,int ,int*) ;
 int FUNC_1 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_4)
{
 uint32_t VAR_5;

 if (FUNC_0(VAR_4, VAR_0, &VAR_5) == 0) {
  VAR_5 &= ~(VAR_1 | VAR_3 |
      VAR_2);
  FUNC_1(VAR_4, VAR_0, VAR_5);
 }
}
