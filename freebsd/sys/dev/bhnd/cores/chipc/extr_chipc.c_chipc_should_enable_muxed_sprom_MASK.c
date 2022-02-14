
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {scalar_t__ dev; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (struct chipc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__**,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool
FUNC_9(struct chipc_softc *VAR_3)
{
 device_t *VAR_4;
 device_t VAR_5;
 device_t VAR_6;
 int VAR_7;
 int VAR_8;
 bool VAR_9;


 if (!FUNC_0(VAR_3, VAR_1))
  return (1);

 FUNC_7(&VAR_0);

 VAR_6 = FUNC_3(VAR_3->dev);
 VAR_5 = FUNC_1(VAR_6);

 if ((VAR_8 = FUNC_2(VAR_6, &VAR_4, &VAR_7))) {
  FUNC_8(&VAR_0);
  return (0);
 }



 VAR_9 = 1;
 for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_4[VAR_10] == VAR_5 || VAR_4[VAR_10] == VAR_3->dev)
   continue;

  if (!FUNC_4(VAR_4[VAR_10]))
   continue;

  if (FUNC_5(VAR_4[VAR_10]))
   continue;


  VAR_9 = 0;
  break;
 }

 FUNC_6(VAR_4, VAR_2);
 FUNC_8(&VAR_0);
 return (VAR_9);
}
