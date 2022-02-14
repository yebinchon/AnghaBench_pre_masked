
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device {int dummy; } ;


 int VAR_0 ;
 struct ibv_device** FUNC_0 (int,int) ;
 int VAR_1 ;
 struct ibv_device** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;

struct ibv_device **FUNC_2(int *VAR_6)
{
 struct ibv_device **VAR_7;
 int VAR_8;

 if (VAR_6)
  *VAR_6 = 0;

 FUNC_1(&VAR_3, VAR_1);

 if (VAR_5 < 0) {
  VAR_4 = -VAR_5;
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_5 + 1, sizeof (struct ibv_device *));
 if (!VAR_7) {
  VAR_4 = VAR_0;
  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8)
  VAR_7[VAR_8] = VAR_2[VAR_8];
 if (VAR_6)
  *VAR_6 = VAR_5;

 return VAR_7;
}
