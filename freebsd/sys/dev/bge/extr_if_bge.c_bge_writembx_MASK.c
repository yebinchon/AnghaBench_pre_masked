
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_asicrev; int bge_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bge_softc*,int) ;
 int FUNC_1 (struct bge_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_4->bge_asicrev == VAR_0)
  VAR_5 += VAR_2 - VAR_3;

 FUNC_1(VAR_4, VAR_5, VAR_6);
 if ((VAR_4->bge_flags & VAR_1) != 0)
  FUNC_0(VAR_4, VAR_5);
}
