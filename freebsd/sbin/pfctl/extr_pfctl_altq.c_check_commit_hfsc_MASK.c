
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ifname; } ;
struct TYPE_3__ {int default_classes; } ;
struct pfctl_altq {TYPE_2__ pa; TYPE_1__ meta; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1, struct pfctl_altq *VAR_2)
{


 if (VAR_2->meta.default_classes != 1) {
  FUNC_0("should have one default queue on %s", VAR_2->pa.ifname);
  return (1);
 }
 return (0);
}
