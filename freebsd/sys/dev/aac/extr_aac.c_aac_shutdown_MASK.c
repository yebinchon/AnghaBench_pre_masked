
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_io_lock; int aac_dev; int aac_state; } ;
struct aac_fib {scalar_t__* data; } ;
struct aac_close_command {int ContainerId; int Command; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aac_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
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
FUNC_11(device_t VAR_6)
{
 struct aac_softc *VAR_7;
 struct aac_fib *VAR_8;
 struct aac_close_command *VAR_9;

 VAR_7 = FUNC_5(VAR_6);
 FUNC_7(VAR_7, VAR_4, "");

 VAR_7->aac_state |= VAR_1;






 FUNC_6(VAR_7->aac_dev, "shutting down controller...");

 FUNC_8(&VAR_7->aac_io_lock);
 FUNC_1(VAR_7, &VAR_8);
 VAR_9 = (struct aac_close_command *)&VAR_8->data[0];

 FUNC_4(VAR_9, sizeof(struct aac_close_command));
 VAR_9->Command = VAR_5;
 VAR_9->ContainerId = 0xffffffff;
 if (FUNC_3(VAR_7, VAR_2, 0, VAR_8,
     sizeof(struct aac_close_command)))
  FUNC_10("FAILED.\n");
 else
  FUNC_10("done\n");
 FUNC_0(VAR_7);
 FUNC_2(VAR_7);
 FUNC_9(&VAR_7->aac_io_lock);

 return(0);
}
