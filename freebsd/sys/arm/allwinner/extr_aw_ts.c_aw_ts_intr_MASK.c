
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ts_softc {int temp_data; int temp_step; int temp_offset; } ;


 int FUNC_0 (struct aw_ts_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aw_ts_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3)
{
 struct aw_ts_softc *VAR_4;
 int VAR_5;

 VAR_4= (struct aw_ts_softc *)VAR_3;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 & VAR_2) {

  VAR_4->temp_data = (FUNC_0(VAR_4, VAR_0) * VAR_4->temp_step - VAR_4->temp_offset)
   + 273150;
 }

 FUNC_1(VAR_4, VAR_1, VAR_5);
}
