
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_softc {int sc_power_save; } ;
struct udl_cmd_buf {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct udl_cmd_buf* FUNC_1 (struct udl_softc*,int) ;
 int FUNC_2 (struct udl_softc*,struct udl_cmd_buf*) ;
 int FUNC_3 (struct udl_cmd_buf*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct udl_softc *VAR_5, int VAR_6, int VAR_7)
{
 struct udl_cmd_buf *VAR_8;


 VAR_8 = FUNC_1(VAR_5, VAR_7);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 FUNC_0("screen %s\n", VAR_6 ? "ON" : "OFF");

 VAR_5->sc_power_save = VAR_6 ? 0 : 1;

 if (VAR_6)
  FUNC_3(VAR_8, VAR_1, VAR_3);
 else
  FUNC_3(VAR_8, VAR_1, VAR_2);

 FUNC_3(VAR_8, VAR_4, 0xff);
 FUNC_2(VAR_5, VAR_8);
 return (0);
}
