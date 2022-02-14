
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siosc {int conf_lock; int io_res; int io_rid; int * chardev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct siosc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct siosc *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);
 if (VAR_2->chardev != ((void*)0))
  FUNC_2(VAR_2->chardev);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1, VAR_0, VAR_2->io_rid, VAR_2->io_res);
 FUNC_5(&VAR_2->conf_lock);
 return (0);
}
