
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_channel {int mtx; scalar_t__ oslots; int sim; } ;
typedef int device_t ;


 int VAR_0 ;
 struct siis_channel* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct siis_channel*,int *,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct siis_channel *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->mtx);
 FUNC_5(VAR_3->sim, 1);
 while (VAR_3->oslots)
  FUNC_1(VAR_3, &VAR_3->mtx, VAR_0, "siissusp", VAR_1/100);
 FUNC_4(VAR_2);
 FUNC_3(&VAR_3->mtx);
 return (0);
}
