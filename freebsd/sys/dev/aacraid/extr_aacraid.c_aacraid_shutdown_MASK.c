
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_io_lock; int aac_dev; int aac_state; } ;
struct aac_fib {int * data; } ;
struct aac_close_command {int ContainerId; int Command; } ;
typedef int device_t ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_2 (struct aac_softc*) ;
 scalar_t__ FUNC_3 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_4 (struct aac_close_command*,int) ;
 struct aac_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct aac_softc*,char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

int
FUNC_11(device_t VAR_5)
{
 struct aac_softc *VAR_6;
 struct aac_fib *VAR_7;
 struct aac_close_command *VAR_8;

 VAR_6 = FUNC_5(VAR_5);
 FUNC_7(VAR_6, VAR_3, "");

 VAR_6->aac_state |= VAR_1;






 FUNC_6(VAR_6->aac_dev, "shutting down controller...");

 FUNC_8(&VAR_6->aac_io_lock);
 FUNC_1(VAR_6, &VAR_7);
 VAR_8 = (struct aac_close_command *)&VAR_7->data[0];

 FUNC_4(VAR_8, sizeof(struct aac_close_command));
 VAR_8->Command = VAR_4;
 VAR_8->ContainerId = 0xfffffffe;
 if (FUNC_3(VAR_6, VAR_2, 0, VAR_7,
     sizeof(struct aac_close_command)))
  FUNC_10("FAILED.\n");
 else
  FUNC_10("done\n");

 FUNC_0(VAR_6, VAR_0);
 FUNC_2(VAR_6);
 FUNC_9(&VAR_6->aac_io_lock);

 return(0);
}
