
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int intr_handle; } ;
struct tty {int dummy; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct xencons_priv* FUNC_1 (struct tty*) ;
 int FUNC_2 (int ,int ,int ,int *,int ,struct tty*,int,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct tty *VAR_4,
    driver_intr_t VAR_5)
{
 struct xencons_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4);

 VAR_7 = FUNC_2(VAR_3, VAR_2, 0, ((void*)0),
     VAR_5, VAR_4, VAR_1 | VAR_0, &VAR_6->intr_handle);
 if (VAR_7 != 0)
  FUNC_0(VAR_3, "Can't register console interrupt\n");

 return (VAR_7);
}
