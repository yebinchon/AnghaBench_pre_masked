
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct nvme_request {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void)
{
 uint32_t VAR_4;

 VAR_3 = FUNC_0("nvme_request",
     sizeof(struct nvme_request), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_2[VAR_4].id = VAR_0;
}
