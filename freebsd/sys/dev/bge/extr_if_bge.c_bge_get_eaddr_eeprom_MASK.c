
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bge_softc {scalar_t__ bge_asicrev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bge_softc*,int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(struct bge_softc *VAR_3, uint8_t VAR_4[])
{

 if (VAR_3->bge_asicrev == VAR_0)
  return (1);

 return (FUNC_0(VAR_3, VAR_4, VAR_1 + 2,
    VAR_2));
}
