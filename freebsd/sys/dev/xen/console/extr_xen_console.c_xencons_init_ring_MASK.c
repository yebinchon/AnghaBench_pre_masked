
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {scalar_t__ evtchn; int intr_handle; } ;
struct tty {int dummy; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xencons_priv* FUNC_0 (struct tty*) ;
 int FUNC_1 (int ,scalar_t__,int *,int ,struct tty*,int,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct tty *VAR_4, driver_intr_t VAR_5)
{
 struct xencons_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->evtchn == 0)
  return (VAR_0);

 VAR_7 = FUNC_1(VAR_3, VAR_6->evtchn, ((void*)0),
     VAR_5, VAR_4, VAR_2 | VAR_1, &VAR_6->intr_handle);
 if (VAR_7 != 0)
  return (VAR_7);

 return (0);
}
