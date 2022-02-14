
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codec_softc {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct codec_softc *VAR_3)
{
 device_t VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = VAR_0;
 VAR_5 = VAR_1;

 VAR_4 = FUNC_3(FUNC_2("gpio"), VAR_5);
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_2);
 if (VAR_6 != 0) {
  FUNC_5(VAR_4, "Cannot configure GPIO pin %d on %s\n",
      VAR_7, FUNC_4(VAR_4));
  return (VAR_6);
 }

 VAR_6 = FUNC_0(VAR_4, VAR_7, 0);
 if (VAR_6 != 0) {
  FUNC_5(VAR_4, "Cannot configure GPIO pin %d on %s\n",
      VAR_7, FUNC_4(VAR_4));
  return (VAR_6);
 }

 return (0);
}
