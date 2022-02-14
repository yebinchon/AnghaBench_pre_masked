
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct resource {int dummy; } ;
struct isa_config {int ic_ndrq; scalar_t__* ic_drqmask; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, struct isa_config *VAR_3,
    struct isa_config *VAR_4)
{
 int VAR_5, VAR_6;
 struct resource *VAR_7[VAR_0];




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_1(VAR_2, VAR_1, VAR_6);
  VAR_7[VAR_6] = ((void*)0);
 }

 VAR_5 = 1;
 VAR_4->ic_ndrq = VAR_3->ic_ndrq;
 for (VAR_6 = 0; VAR_6 < VAR_3->ic_ndrq; VAR_6++) {
  uint32_t VAR_8 = VAR_3->ic_drqmask[VAR_6];
  int VAR_9;


  if (VAR_8 == 0) {
   VAR_4->ic_drqmask[VAR_6] = 0;
   continue;
  }

  for (VAR_9 = FUNC_4(VAR_8);
       VAR_9 != -1;
       VAR_9 = FUNC_5(VAR_8, VAR_9)) {
   FUNC_3(VAR_2, VAR_1, VAR_6,
      VAR_9, 1);
   VAR_7[VAR_6] = FUNC_0(VAR_2,
       VAR_1, &VAR_6,
       0 );
   if (VAR_7[VAR_6]) {
    VAR_4->ic_drqmask[VAR_6] = (1 << VAR_9);
    break;
   }
  }





  if (!VAR_7[VAR_6]) {
   VAR_5 = 0;
   break;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_7[VAR_6])
   FUNC_2(VAR_2, VAR_1,
          VAR_6, VAR_7[VAR_6]);
 }

 return (VAR_5);
}
