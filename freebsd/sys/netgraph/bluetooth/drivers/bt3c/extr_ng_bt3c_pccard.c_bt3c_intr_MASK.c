
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int16_t ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_7__ {int status; int * ith; int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 char* VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 bt3c_softc_p VAR_2 = (bt3c_softc_p) VAR_1;
 u_int16_t VAR_3, VAR_4;

 if (VAR_2 == ((void*)0) || VAR_2->ith == ((void*)0)) {
  FUNC_7("%s: bogus interrupt\n", VAR_0);
  return;
 }

 FUNC_3(VAR_2, VAR_3);
 if ((VAR_3 & 0x80) == 0)
  return;

 FUNC_2(VAR_2, 0x7001, VAR_4);
 FUNC_0(VAR_2->dev, "control=%#x, status=%#x\n", VAR_3, VAR_4);

 if ((VAR_4 & 0xff) == 0x7f || (VAR_4 & 0xff) == 0xff) {
  FUNC_1(VAR_2->dev, "Strange status=%#x\n", VAR_4);
  return;
 }


 if (VAR_4 & 0x0001)
  FUNC_4(VAR_2);


 VAR_2->status |= VAR_4;
 FUNC_8(VAR_2->ith, 0);


 FUNC_5(VAR_2, 0x7001, 0x0000);
 FUNC_6(VAR_2, VAR_3);
}
