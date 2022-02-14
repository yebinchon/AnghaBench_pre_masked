
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_if {scalar_t__ ni_bufs_head; } ;
struct netmap_adapter {int nm_mem; } ;


 int FUNC_0 (struct netmap_adapter*,scalar_t__) ;
 int FUNC_1 (int ,struct netmap_if*) ;

__attribute__((used)) static void
FUNC_2(struct netmap_adapter *VAR_0, struct netmap_if *VAR_1)
{
 if (VAR_1 == ((void*)0))

  return;
 if (VAR_1->ni_bufs_head)
  FUNC_0(VAR_0, VAR_1->ni_bufs_head);
 FUNC_1(VAR_0->nm_mem, VAR_1);
}
