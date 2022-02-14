
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {int dummy; } ;
struct g_consumer {scalar_t__ index; TYPE_1__* provider; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (struct g_raid3_softc*,struct g_consumer*) ;

__attribute__((used)) static int
FUNC_2(struct g_raid3_softc *VAR_0, struct g_consumer *VAR_1)
{

 if (VAR_1->index > 0) {
  FUNC_0(2,
      "I/O requests for %s exist, can't destroy it now.",
      VAR_1->provider->name);
  return (1);
 }
 if (FUNC_1(VAR_0, VAR_1) > 0) {
  FUNC_0(2,
      "I/O requests for %s in queue, can't destroy it now.",
      VAR_1->provider->name);
  return (1);
 }
 return (0);
}
