
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int (* read_status ) (struct davbus_softc*,int) ;int mutex; int reg; int (* set_outputs ) (struct davbus_softc*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct davbus_softc*,int) ;
 int FUNC_5 (struct davbus_softc*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct davbus_softc *VAR_4 = VAR_3;
 u_int VAR_5, VAR_6, VAR_7;

 FUNC_2(&VAR_4->mutex);

 VAR_5 = FUNC_0(VAR_4->reg, VAR_2);
 if (VAR_5 & VAR_1) {

  VAR_6 = FUNC_0(VAR_4->reg, VAR_0);

  if (VAR_4->read_status && VAR_4->set_outputs) {

   VAR_7 = (*VAR_4->read_status)(VAR_4, VAR_6);
   (*VAR_4->set_outputs)(VAR_4, VAR_7);
  }


  FUNC_1(VAR_4->reg, VAR_2, VAR_5);
 }

 FUNC_3(&VAR_4->mutex);
}
