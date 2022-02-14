
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {struct uchcom_softc* sc_parent; } ;
struct uchcom_softc {scalar_t__ sc_version; } ;
struct termios {int c_ospeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct uchcom_softc*,int ,int,int) ;
 int FUNC_1 (struct uchcom_softc*,int *) ;
 int FUNC_2 (struct uchcom_softc*,int ,int *,int ,int *) ;
 int FUNC_3 (struct uchcom_softc*,int ) ;
 int FUNC_4 (struct uchcom_softc*) ;
 int FUNC_5 (struct uchcom_softc*) ;
 int FUNC_6 (struct uchcom_softc*,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct ucom_softc *VAR_7, struct termios *VAR_8)
{
 struct uchcom_softc *VAR_9 = VAR_7->sc_parent;

 FUNC_1(VAR_9, ((void*)0));
 FUNC_0(VAR_9, VAR_5, 0, 0);
 FUNC_3(VAR_9, VAR_8->c_ospeed);
 if (VAR_9->sc_version < VAR_6) {
  FUNC_2(VAR_9, VAR_3, ((void*)0),
      VAR_4, ((void*)0));
  FUNC_6(VAR_9, VAR_3, 0x50,
      VAR_4, 0x00);
 } else {






  FUNC_6(VAR_9,
      VAR_3,
      VAR_1 | VAR_2 | VAR_0,
      VAR_4, 0x00);
 }
 FUNC_5(VAR_9);
 FUNC_0(VAR_9, VAR_5, 0x501f, 0xd90a);
 FUNC_3(VAR_9, VAR_8->c_ospeed);
 FUNC_4(VAR_9);
 FUNC_5(VAR_9);
}
