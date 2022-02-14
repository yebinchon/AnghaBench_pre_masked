
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct resource_list*,int,int) ;
 int FUNC_3 (struct resource_list*,int,int) ;
 int FUNC_4 (struct resource_list*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
    struct resource_list *VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1);
    if (FUNC_2(VAR_4, VAR_2, VAR_3)) {
 FUNC_1(VAR_0, "delete_resource: Resource still owned by child"
     " (type=%d, rid=%d)\n", VAR_2, VAR_3);
 return;
    }
    FUNC_4(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_3(VAR_4, VAR_2, VAR_3);
}
