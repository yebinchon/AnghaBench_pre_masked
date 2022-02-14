
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_ic_desc {int * ic_desc; int ic_guid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct vmbus_ic_desc* VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 device_t VAR_4 = FUNC_2(VAR_3);
 const struct vmbus_ic_desc *VAR_5;

 if (FUNC_4(FUNC_1(VAR_3), 0))
  return (VAR_1);

 for (VAR_5 = VAR_2; VAR_5->ic_desc != ((void*)0); ++VAR_5) {
  if (FUNC_0(VAR_4, VAR_3, &VAR_5->ic_guid) == 0) {
   FUNC_3(VAR_3, VAR_5->ic_desc);
   return (VAR_0);
  }
 }
 return (VAR_1);
}
