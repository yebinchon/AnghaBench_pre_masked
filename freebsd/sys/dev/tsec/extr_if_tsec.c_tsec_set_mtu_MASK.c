
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tsec_softc*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tsec_softc*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct tsec_softc *VAR_6, unsigned int VAR_7)
{

 VAR_7 += VAR_1 + VAR_2 + VAR_0;

 FUNC_0(VAR_6);

 if (VAR_7 >= VAR_4 && VAR_7 <= VAR_3) {
  FUNC_1(VAR_6, VAR_5, VAR_7);
  return (VAR_7);
 }

 return (0);
}
