
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_softc {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (size_t,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct i2s_softc *VAR_6)
{
 if (VAR_4[VAR_0]) {
  FUNC_1(("resetting codec\n"));

  FUNC_2(VAR_0, !VAR_5);
  FUNC_0(VAR_3);

  FUNC_2(VAR_0, VAR_5);
  FUNC_0(VAR_1);

  FUNC_2(VAR_0, !VAR_5);
  FUNC_0(VAR_2);

 } else {
  FUNC_1(("no audio_hw_reset\n"));
 }
}
