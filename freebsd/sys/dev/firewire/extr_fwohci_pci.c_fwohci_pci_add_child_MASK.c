
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int * bdev; } ;
struct fwohci_softc {TYPE_1__ fc; } ;
typedef int * device_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;

__attribute__((used)) static device_t
FUNC_11(device_t VAR_1, u_int VAR_2, const char *VAR_3, int VAR_4)
{
 struct fwohci_softc *VAR_5;
 device_t VAR_6;
 int VAR_7 = 0;

 VAR_5 = (struct fwohci_softc *)FUNC_3(VAR_1);
 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (VAR_6);

 VAR_5->fc.bdev = VAR_6;
 FUNC_6(VAR_6, &VAR_5->fc);

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_1, "probe_and_attach failed with err=%d\n",
      VAR_7);
  FUNC_7(VAR_1);
  FUNC_2(VAR_1, VAR_6);
  return ((void*)0);
 }





 if (VAR_0) {
  int VAR_8;
  FUNC_0(250);
  VAR_8 = FUNC_9();
  FUNC_8(&VAR_5->fc, 0, -1);
  FUNC_10(VAR_8);
 }

 return (VAR_6);
}
