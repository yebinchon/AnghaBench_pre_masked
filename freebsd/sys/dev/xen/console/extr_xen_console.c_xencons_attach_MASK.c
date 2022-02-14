
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xencons_priv {TYPE_1__* ops; int callout; } ;
struct tty {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int (* init ) (int ,struct tty*,int ) ;} ;


 int * FUNC_0 (int ,int ,struct tty*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct tty*) ;
 int VAR_1 ;
 struct xencons_priv VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,struct tty*,int ) ;
 struct tty* FUNC_5 (int *,struct xencons_priv*) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*,int *,char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct tty *VAR_8;




 struct xencons_priv *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_2;

 VAR_8 = FUNC_5(&VAR_6, VAR_9);
 FUNC_7(VAR_8, ((void*)0), "%s%r", VAR_1, 0);
 FUNC_3(VAR_7, VAR_8);

 FUNC_1(&VAR_9->callout, FUNC_6(VAR_8), 0);

 VAR_10 = VAR_9->ops->init(VAR_7, VAR_8, VAR_4);
 if (VAR_10 != 0) {
  FUNC_2(VAR_7, "Unable to initialize the console (%d)\n",
      VAR_10);
  return (VAR_10);
 }


 if ((FUNC_0(VAR_3, VAR_5,
     VAR_8, VAR_0)) == ((void*)0))
  FUNC_2(VAR_7, "shutdown event registration failed!\n");

 return (0);
}
