
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_bdg_ops {int (* bwrap_attach ) (char const*,struct netmap_adapter*) ;} ;
struct netmap_adapter {int dummy; } ;


 int FUNC_0 (char const*,struct netmap_adapter*) ;

int
FUNC_1(const char *VAR_0, struct netmap_adapter *VAR_1,
  struct netmap_bdg_ops *VAR_2)
{
 return VAR_2->bwrap_attach(VAR_0, VAR_1);
}
