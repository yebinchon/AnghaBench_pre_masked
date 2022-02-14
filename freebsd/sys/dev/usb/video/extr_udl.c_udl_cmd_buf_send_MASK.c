
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_softc {int * sc_xfer; int sc_cmd_buf_pending; int sc_cmd_buf_free; scalar_t__ sc_gone; } ;
struct udl_cmd_buf {int dummy; } ;


 int FUNC_0 (int *,struct udl_cmd_buf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct udl_softc*) ;
 int FUNC_2 (struct udl_softc*) ;
 int VAR_4 ;
 int FUNC_3 (struct udl_cmd_buf*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct udl_softc *VAR_5, struct udl_cmd_buf *VAR_6)
{
 FUNC_1(VAR_5);
 if (VAR_5->sc_gone) {
  FUNC_0(&VAR_5->sc_cmd_buf_free, VAR_6, VAR_4);
 } else {

  FUNC_3(VAR_6, VAR_1);
  FUNC_3(VAR_6, VAR_0);

  FUNC_0(&VAR_5->sc_cmd_buf_pending, VAR_6, VAR_4);
  FUNC_4(VAR_5->sc_xfer[VAR_2]);
  FUNC_4(VAR_5->sc_xfer[VAR_3]);
 }
 FUNC_2(VAR_5);
}
