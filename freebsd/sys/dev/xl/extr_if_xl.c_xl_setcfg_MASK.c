
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct xl_softc {int xl_media; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
 int FUNC_2 (struct xl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(struct xl_softc *VAR_10)
{
 u_int32_t VAR_11;



 FUNC_3(3);
 VAR_11 = FUNC_0(VAR_10, VAR_7);
 VAR_11 &= ~VAR_3;
 if (VAR_10->xl_media & VAR_6 ||
  VAR_10->xl_media & VAR_4)
  VAR_11 |= (VAR_9 << VAR_2);
 if (VAR_10->xl_media & VAR_5)
  VAR_11 |= (VAR_8 << VAR_2);

 FUNC_2(VAR_10, VAR_7, VAR_11);
 FUNC_1(VAR_10, VAR_1, VAR_0);
}
