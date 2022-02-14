
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_5__ {int ich_cmd; int * irq_res; scalar_t__ irq_rid; int * io_res; int io_rid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 void* FUNC_1 (int ,int ,int *,int,int) ;
 int FUNC_2 (TYPE_1__* const,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__* const) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8)
{
 const sc_p VAR_9 = FUNC_3(VAR_8);
 int VAR_10;


 FUNC_2(VAR_9, sizeof(*VAR_9));
 VAR_9->ich_cmd = -1;
 VAR_9->dev = VAR_8;


 VAR_9->io_rid = VAR_3;
 VAR_9->io_res = FUNC_1(VAR_8, VAR_6,
     &VAR_9->io_rid, 16, VAR_4);
 if (VAR_9->io_res == ((void*)0))
  VAR_9->io_res = FUNC_1(VAR_8, VAR_6,
      &VAR_9->io_rid, 32, VAR_4);
 if (VAR_9->io_res == ((void*)0)) {
  FUNC_4(VAR_8, "can't map I/O\n");
  VAR_10 = VAR_0;
  goto fail;
 }


 VAR_9->irq_rid = 0;
 VAR_9->irq_res = FUNC_0(VAR_8, VAR_7,
     &VAR_9->irq_rid, VAR_4 | VAR_5);
 if (VAR_9->irq_res == ((void*)0)) {
  FUNC_4(VAR_8, "can't get IRQ\n");
  VAR_10 = VAR_0;
  goto fail;
 }


 FUNC_7(VAR_8, VAR_1, VAR_2, 1);


 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto fail;
 return (0);

fail:

 FUNC_6(VAR_9);
 return (VAR_10);
}
