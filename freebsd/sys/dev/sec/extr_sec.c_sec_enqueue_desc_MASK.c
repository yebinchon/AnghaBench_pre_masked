
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int ;
struct sec_softc {scalar_t__ sc_channel_idle_mask; int sc_version; } ;
struct sec_desc {int sd_desc_paddr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sec_softc*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct sec_softc*,int ) ;
 int FUNC_4 (struct sec_softc*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct sec_softc *VAR_7, struct sec_desc *VAR_8, int VAR_9)
{
 u_int VAR_10 = VAR_5;
 uint64_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_7, VAR_6);


 if (VAR_9 < 0) {
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   VAR_11 = FUNC_3(VAR_7, FUNC_0(VAR_9));

   if ((VAR_11 & VAR_7->sc_channel_idle_mask) == 0) {
    VAR_9 = VAR_12;
    break;
   }
  }
 }


 if (VAR_9 < 0)
  return (-1);


 VAR_11 = FUNC_3(VAR_7, FUNC_0(VAR_9));

 switch(VAR_7->sc_version) {
 case 2:
  VAR_10 = (VAR_11 >> VAR_2) & VAR_1;
  break;
 case 3:
  VAR_10 = (VAR_11 >> VAR_4) & VAR_3;
  break;
 }

 if (VAR_10 >= VAR_5)
  return (-1);


 FUNC_4(VAR_7, FUNC_1(VAR_9), VAR_8->sd_desc_paddr);

 return (VAR_9);
}
