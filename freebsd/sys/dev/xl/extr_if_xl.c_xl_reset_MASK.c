
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_flags; int xl_dev; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct xl_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_7(struct xl_softc *VAR_15)
{
 int VAR_16;

 FUNC_3(VAR_15);

 FUNC_4(0);
 FUNC_1(VAR_15, VAR_3, VAR_0 |
     ((VAR_15->xl_flags & VAR_7) ?
      VAR_8:0));
 if (VAR_15->xl_flags & VAR_6)
  FUNC_2(100000);

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  FUNC_2(10);
  if (!(FUNC_0(VAR_15, VAR_11) & VAR_12))
   break;
 }

 if (VAR_16 == VAR_13)
  FUNC_5(VAR_15->xl_dev, "reset didn't complete\n");
 FUNC_1(VAR_15, VAR_3, VAR_1);
 FUNC_2(100000);
 FUNC_6(VAR_15);
 FUNC_1(VAR_15, VAR_3, VAR_2);
 FUNC_6(VAR_15);

 if (VAR_15->xl_flags & VAR_4 ||
     VAR_15->xl_flags & VAR_5) {
  FUNC_4(2);
  FUNC_1(VAR_15, VAR_14,
      FUNC_0(VAR_15, VAR_14) |
      ((VAR_15->xl_flags & VAR_4) ?
      VAR_9 : 0) |
      ((VAR_15->xl_flags & VAR_5) ?
      VAR_10 : 0));
 }


 FUNC_2(100000);
}
