
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_consumer {int dummy; } ;
struct TYPE_2__ {int queues; int units; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_1, const char *VAR_2, struct g_geom *VAR_3,
    struct g_consumer *VAR_4, struct g_provider *VAR_5)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, " units %d queues %d",
   VAR_0.units, VAR_0.queues);
        }
}
