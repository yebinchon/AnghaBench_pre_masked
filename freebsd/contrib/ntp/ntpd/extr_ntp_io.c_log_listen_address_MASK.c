
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin; int name; int ifnum; scalar_t__ ignore_packets; } ;
typedef TYPE_1__ endpt ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(
 endpt * VAR_1
 )
{
 FUNC_0(VAR_0, "%s on %d %s %s",
  (VAR_1->ignore_packets)
      ? "Listen and drop"
      : "Listen normally",
  VAR_1->ifnum,
  VAR_1->name,
  FUNC_1(&VAR_1->sin));
}
