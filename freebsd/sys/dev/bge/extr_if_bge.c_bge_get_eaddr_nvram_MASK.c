
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bge_softc {scalar_t__ bge_asicrev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bge_softc*,int *,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct bge_softc *VAR_4, uint8_t VAR_5[])
{
 int VAR_6 = VAR_1;

 if (VAR_4->bge_asicrev == VAR_0)
  VAR_6 = VAR_2;

 return (FUNC_0(VAR_4, VAR_5, VAR_6 + 2,
     VAR_3));
}
