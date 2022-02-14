
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct sbni_softc {int framelen; int state; scalar_t__ outpos; scalar_t__ tx_frameno; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct sbni_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct sbni_softc *VAR_8, u_int32_t *VAR_9)
{
 u_int32_t VAR_10;
 u_int VAR_11;
 u_char VAR_12;

 VAR_10 = *VAR_9;
 VAR_11 = VAR_8->framelen + 6;

 if (VAR_8->state & VAR_1)
  VAR_11 |= VAR_4;

 if (VAR_8->outpos == 0)
  VAR_11 |= VAR_3;

 VAR_11 |= (VAR_8->state & VAR_2) ? VAR_6 : VAR_5;
 FUNC_1(VAR_8, VAR_0, VAR_7);

 VAR_12 = (u_char)VAR_11;
 FUNC_1(VAR_8, VAR_0, VAR_12);
 VAR_10 = FUNC_0(VAR_12, VAR_10);
 VAR_12 = (u_char)(VAR_11 >> 8);
 FUNC_1(VAR_8, VAR_0, VAR_12);
 VAR_10 = FUNC_0(VAR_12, VAR_10);

 FUNC_1(VAR_8, VAR_0, VAR_8->tx_frameno);
 VAR_10 = FUNC_0(VAR_8->tx_frameno, VAR_10);
 FUNC_1(VAR_8, VAR_0, 0);
 VAR_10 = FUNC_0(0, VAR_10);
 *VAR_9 = VAR_10;
}
