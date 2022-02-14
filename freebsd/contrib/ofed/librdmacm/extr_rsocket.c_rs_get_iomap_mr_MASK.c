
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct rsocket {struct rs_iomap_mr* remote_iomappings; TYPE_1__ remote_iomap; } ;
struct rs_iomap_mr {int index; int mr; } ;


 struct rs_iomap_mr* FUNC_0 (int,int) ;

__attribute__((used)) static struct rs_iomap_mr *FUNC_1(struct rsocket *VAR_0)
{
 int VAR_1;

 if (!VAR_0->remote_iomappings) {
  VAR_0->remote_iomappings = FUNC_0(VAR_0->remote_iomap.length,
            sizeof(*VAR_0->remote_iomappings));
  if (!VAR_0->remote_iomappings)
   return ((void*)0);

  for (VAR_1 = 0; VAR_1 < VAR_0->remote_iomap.length; VAR_1++)
   VAR_0->remote_iomappings[VAR_1].index = VAR_1;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->remote_iomap.length; VAR_1++) {
  if (!VAR_0->remote_iomappings[VAR_1].mr)
   return &VAR_0->remote_iomappings[VAR_1];
 }
 return ((void*)0);
}
