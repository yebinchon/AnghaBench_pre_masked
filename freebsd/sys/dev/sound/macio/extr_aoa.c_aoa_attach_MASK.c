
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoa_softc {int sc_dev; } ;
typedef int status ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,struct aoa_softc*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,struct aoa_softc*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,char*,char*) ;

int
FUNC_7(void *VAR_5)
{
 char VAR_6[VAR_3];
 struct aoa_softc *VAR_7;
 device_t VAR_8;
 int VAR_9;

 VAR_7 = VAR_5;
 VAR_8 = VAR_7->sc_dev;

 if (FUNC_4(VAR_8, VAR_7, 1, 0))
  return (VAR_1);

 VAR_9 = FUNC_3(VAR_8, VAR_0, VAR_0,
     VAR_0);
 FUNC_0(("pcm_getbuffersize returned %d\n", VAR_9));

 FUNC_2(VAR_8, VAR_2, &VAR_4, VAR_7);

 FUNC_6(VAR_6, sizeof(VAR_6), "at %s", FUNC_1(VAR_8));
 FUNC_5(VAR_8, VAR_6);

 return (0);
}
