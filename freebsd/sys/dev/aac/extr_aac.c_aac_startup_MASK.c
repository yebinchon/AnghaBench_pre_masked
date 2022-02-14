
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_ich; int aac_dev; int aac_state; int aac_io_lock; } ;
struct aac_mntinforesp {int MntRespCount; } ;
struct aac_fib {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_softc*) ;
 char* VAR_2 ;
 int FUNC_1 (struct aac_softc*,struct aac_mntinforesp*,int ) ;
 int FUNC_2 (struct aac_softc*,struct aac_fib**) ;
 struct aac_mntinforesp* FUNC_3 (struct aac_softc*,struct aac_fib*,int) ;
 int FUNC_4 (struct aac_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct aac_softc*,char*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
 struct aac_softc *VAR_4;
 struct aac_fib *VAR_5;
 struct aac_mntinforesp *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 VAR_4 = (struct aac_softc *)VAR_3;
 FUNC_8(VAR_4, VAR_2, "");

 FUNC_9(&VAR_4->aac_io_lock);
 FUNC_2(VAR_4, &VAR_5);


 do {
  if ((VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_8)) == ((void*)0))
   continue;
  if (VAR_8 == 0)
   VAR_7 = VAR_6->MntRespCount;
  FUNC_1(VAR_4, VAR_6, 0);
  VAR_8++;
 } while ((VAR_8 < VAR_7) && (VAR_8 < VAR_0));

 FUNC_4(VAR_4);
 FUNC_10(&VAR_4->aac_io_lock);


 VAR_4->aac_state &= ~VAR_1;


 if (FUNC_5(VAR_4->aac_dev))
  FUNC_7(VAR_4->aac_dev, "bus_generic_attach failed\n");


 FUNC_6(&VAR_4->aac_ich);


 FUNC_0(VAR_4);
}
