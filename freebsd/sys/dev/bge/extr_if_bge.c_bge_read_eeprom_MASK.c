
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bge_softc {int dummy; } ;
typedef int * caddr_t ;


 int FUNC_0 (struct bge_softc*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct bge_softc *VAR_0, caddr_t VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 uint8_t VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_2 + VAR_4, &VAR_6);
  if (VAR_5)
   break;
  *(VAR_1 + VAR_4) = VAR_6;
 }

 return (VAR_5 ? 1 : 0);
}
