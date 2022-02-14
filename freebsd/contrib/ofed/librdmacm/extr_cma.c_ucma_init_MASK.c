
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_device {int dummy; } ;
struct TYPE_3__ {int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ibv_device**) ;
 int FUNC_6 (struct ibv_device*) ;
 struct ibv_device** FUNC_7 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

int FUNC_11(void)
{
 struct ibv_device **VAR_6 = ((void*)0);
 int VAR_7, VAR_8, VAR_9;


 if (VAR_3)
  return 0;

 FUNC_8(&VAR_5);
 if (VAR_3) {
  FUNC_9(&VAR_5);
  return 0;
 }

 FUNC_4(&VAR_4);
 VAR_8 = FUNC_2();
 if (VAR_8)
  goto err1;

 VAR_6 = FUNC_7(&VAR_9);
 if (!VAR_6) {
  VAR_8 = FUNC_0(VAR_0);
  goto err1;
 }

 if (!VAR_9) {
  VAR_8 = FUNC_0(VAR_0);
  goto err2;
 }

 VAR_2 = FUNC_1(VAR_9, sizeof(*VAR_2));
 if (!VAR_2) {
  VAR_8 = FUNC_0(VAR_1);
  goto err2;
 }

 for (VAR_7 = 0; VAR_6[VAR_7]; VAR_7++)
  VAR_2[VAR_7].guid = FUNC_6(VAR_6[VAR_7]);

 VAR_3 = VAR_9;
 FUNC_10();
 FUNC_9(&VAR_5);
 FUNC_5(VAR_6);
 return 0;

err2:
 FUNC_5(VAR_6);
err1:
 FUNC_3(&VAR_4);
 FUNC_9(&VAR_5);
 return VAR_8;
}
