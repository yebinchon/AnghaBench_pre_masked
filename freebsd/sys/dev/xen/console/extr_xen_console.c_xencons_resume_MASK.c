
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xencons_priv {TYPE_1__* ops; int intr_handle; } ;
struct tty {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int (* init ) (int ,struct tty*,int ) ;} ;


 struct tty* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct tty*,int ) ;
 struct xencons_priv* FUNC_3 (struct tty*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct xencons_priv *VAR_2;
 struct tty *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = FUNC_3(VAR_3);
 FUNC_4(&VAR_2->intr_handle);

 VAR_4 = VAR_2->ops->init(VAR_1, VAR_3, VAR_0);
 if (VAR_4 != 0) {
  FUNC_1(VAR_1, "Unable to resume the console (%d)\n", VAR_4);
  return (VAR_4);
 }

 return (0);
}
