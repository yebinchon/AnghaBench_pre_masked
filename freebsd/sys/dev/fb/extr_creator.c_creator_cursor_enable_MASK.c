
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creator_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct creator_softc *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_7, VAR_1, VAR_5, VAR_2);
 if (VAR_7->sc_flags & VAR_0)
  VAR_9 = VAR_8 ? VAR_3 | VAR_4 : 0;
 else
  VAR_9 = VAR_8 ? 0 : VAR_3 | VAR_4;
 FUNC_0(VAR_7, VAR_1, VAR_6, VAR_9);
}
