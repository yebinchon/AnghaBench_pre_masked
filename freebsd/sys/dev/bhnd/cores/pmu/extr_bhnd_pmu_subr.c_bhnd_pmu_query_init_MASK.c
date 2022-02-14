
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_chipid {int dummy; } ;
struct bhnd_pmu_query {int caps; struct bhnd_chipid cid; void* io_ctx; struct bhnd_pmu_io const* io; int dev; } ;
struct bhnd_pmu_io {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_pmu_query*,int ) ;

int
FUNC_1(struct bhnd_pmu_query *VAR_1, device_t VAR_2,
    struct bhnd_chipid VAR_3, const struct bhnd_pmu_io *VAR_4, void *VAR_5)
{
 VAR_1->dev = VAR_2;
 VAR_1->io = VAR_4;
 VAR_1->io_ctx = VAR_5;
 VAR_1->cid = VAR_3;
 VAR_1->caps = FUNC_0(VAR_1, VAR_0);

 return (0);
}
