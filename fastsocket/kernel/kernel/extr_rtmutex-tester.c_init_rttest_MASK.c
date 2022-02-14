
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_8, VAR_9;

 FUNC_3(&VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_2(&VAR_4[VAR_9]);

 VAR_8 = FUNC_4(&VAR_6);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = FUNC_0(VAR_9);
  if (VAR_8)
   break;
  VAR_8 = FUNC_5(&VAR_7[VAR_9].sysdev, &VAR_3);
  if (VAR_8)
   break;
  VAR_8 = FUNC_5(&VAR_7[VAR_9].sysdev, &VAR_2);
  if (VAR_8)
   break;
 }

 FUNC_1("Initializing RT-Tester: %s\n", VAR_8 ? "Failed" : "OK" );

 return VAR_8;
}
