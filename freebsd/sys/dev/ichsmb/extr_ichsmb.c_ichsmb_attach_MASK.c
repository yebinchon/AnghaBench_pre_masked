
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int ich_func_t ;
typedef int device_t ;
struct TYPE_4__ {int mutex; int irq_handle; int irq_res; int io_res; int * smb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int,int *,int ,TYPE_1__* const,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*,int ) ;

int
FUNC_9(device_t VAR_8)
{
 const sc_p VAR_9 = FUNC_5(VAR_8);
 int VAR_10;


 FUNC_8(&VAR_9->mutex, FUNC_4(VAR_8), "ichsmb", VAR_5);


 if ((VAR_9->smb = FUNC_3(VAR_8, VAR_0, -1)) == ((void*)0)) {
  FUNC_6(VAR_8, "no \"%s\" child found\n", VAR_0);
  VAR_10 = VAR_1;
  goto fail;
 }


 FUNC_1(VAR_9->io_res, VAR_2, 0xff);


 VAR_10 = FUNC_0(VAR_8, VAR_9->irq_res, VAR_4 | VAR_3,
     ((void*)0), VAR_7, VAR_9, &VAR_9->irq_handle);
 if (VAR_10 != 0) {
  FUNC_6(VAR_8, "can't setup irq\n");
  goto fail;
 }


 FUNC_2((ich_func_t)VAR_6, VAR_8);

 return (0);

fail:
 FUNC_7(&VAR_9->mutex);
 return (VAR_10);
}
