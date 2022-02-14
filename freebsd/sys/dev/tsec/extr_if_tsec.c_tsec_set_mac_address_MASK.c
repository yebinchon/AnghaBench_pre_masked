
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {int tsec_ifp; } ;
typedef int macbuf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct tsec_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tsec_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct tsec_softc *VAR_3)
{
 uint32_t VAR_4[2] = { 0, 0 };
 char *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_2(VAR_3);

 FUNC_1((VAR_0 <= sizeof(VAR_4)),
     ("tsec_set_mac_address: (%d <= %zd", VAR_0,
     sizeof(VAR_4)));

 VAR_5 = (char *)VAR_4;
 VAR_6 = (char *)FUNC_0(VAR_3->tsec_ifp);


 for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++)
  VAR_5[VAR_0-VAR_7] = VAR_6[VAR_7-1];


 FUNC_3(VAR_3, VAR_2, VAR_4[1]);
 FUNC_3(VAR_3, VAR_1, VAR_4[0]);
}
