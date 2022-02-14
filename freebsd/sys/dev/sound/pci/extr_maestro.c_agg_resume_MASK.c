
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_info {int playchns; int active; int rch; scalar_t__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct agg_info*) ;
 int FUNC_1 (struct agg_info*,int ) ;
 int FUNC_2 (struct agg_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 struct agg_info* FUNC_7 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 int VAR_3;
 struct agg_info *VAR_4 = FUNC_7(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_4->playchns; VAR_3++)
  if (VAR_4->active & (1 << VAR_3))
   FUNC_4(VAR_4->pch + VAR_3);
 if (VAR_4->active & (1 << VAR_3))
  FUNC_3(&VAR_4->rch);

 FUNC_0(VAR_4);
 if (!VAR_4->active)
  FUNC_1(VAR_4, VAR_1);
 FUNC_2(VAR_4);

 if (FUNC_6(VAR_2)) {
  FUNC_5(VAR_2, "unable to reinitialize the mixer\n");
  return VAR_0;
 }

 return 0;
}
