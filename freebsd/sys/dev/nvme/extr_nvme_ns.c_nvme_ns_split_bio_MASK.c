
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_namespace {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio**,int ) ;
 int FUNC_1 (struct bio*) ;
 int VAR_2 ;
 int FUNC_2 (struct bio*,int) ;
 struct bio** FUNC_3 (struct bio*,int ,int*) ;
 int FUNC_4 (struct nvme_namespace*,struct bio*,int ) ;

__attribute__((used)) static int
FUNC_5(struct nvme_namespace *VAR_3, struct bio *VAR_4,
    uint32_t VAR_5)
{
 struct bio *VAR_6;
 struct bio **VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_10);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_6 = VAR_7[VAR_9];
  VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_2);
  if (VAR_8 != 0) {
   FUNC_2(VAR_4, VAR_8);
   FUNC_1(VAR_6);
  }
 }

 FUNC_0(VAR_7, VAR_1);
 return (0);
}
