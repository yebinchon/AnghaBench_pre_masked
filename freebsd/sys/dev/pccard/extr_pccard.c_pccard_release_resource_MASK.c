
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int res; } ;
struct resource {int dummy; } ;
struct pccard_ivar {int resources; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 struct pccard_ivar* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct resource_list_entry* FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct pccard_ivar *VAR_6;
 int VAR_7 = (FUNC_3(VAR_2) != VAR_1);
 struct resource_list_entry *VAR_8 = ((void*)0);

 if (VAR_7)
  return FUNC_1(FUNC_3(VAR_1), VAR_2,
      VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_2);

 VAR_8 = FUNC_5(&VAR_6->resources, VAR_3, VAR_4);

 if (!VAR_8) {
  FUNC_4(VAR_1, "Allocated resource not found, "
      "%d %#x %#jx %#jx\n",
      VAR_3, VAR_4, FUNC_7(VAR_5), FUNC_6(VAR_5));
  return VAR_0;
 }
 if (!VAR_8->res) {
  FUNC_4(VAR_1, "Allocated resource not recorded\n");
  return VAR_0;
 }




 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8->res);
 FUNC_8(VAR_8->res, VAR_1);
 return (0);
}
