
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bge_softc {scalar_t__ bge_asicrev; } ;
typedef int * caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bge_softc*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct bge_softc *VAR_1, caddr_t VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6;
 uint8_t VAR_7 = 0;

 if (VAR_1->bge_asicrev != VAR_0)
  return (1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_3 + VAR_6, &VAR_7);
  if (VAR_5)
   break;
  *(VAR_2 + VAR_6) = VAR_7;
 }

 return (VAR_5 ? 1 : 0);
}
