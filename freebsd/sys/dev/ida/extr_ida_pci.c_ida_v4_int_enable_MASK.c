
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ida_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ida_softc *VAR_4, int VAR_5)
{
 if (VAR_5)
  VAR_4->flags |= VAR_0;
 else
  VAR_4->flags &= ~VAR_0;
 FUNC_0(VAR_4, VAR_3,
     VAR_5 ? VAR_2 : VAR_1);
}
