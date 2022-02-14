
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct hpet_softc {int dev; int mem_res; } ;
struct bintime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bintime*,struct timespec*) ;
 int FUNC_1 (struct bintime*,struct bintime*) ;
 int FUNC_2 (struct bintime*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_5(struct hpet_softc *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3, VAR_4;
 struct bintime VAR_5, VAR_6, VAR_7;
 struct timespec VAR_8;

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_5);
 FUNC_2(&VAR_6);
 VAR_3 = FUNC_3(VAR_1->mem_res, VAR_0);
 for (VAR_2 = 1; VAR_2 < 1000; VAR_2++)
  VAR_4 = FUNC_3(VAR_1->mem_res, VAR_0);
 FUNC_2(&VAR_7);
 VAR_4 = FUNC_3(VAR_1->mem_res, VAR_0);

 FUNC_1(&VAR_7, &VAR_6);
 FUNC_1(&VAR_6, &VAR_5);
 FUNC_1(&VAR_7, &VAR_6);
 FUNC_0(&VAR_7, &VAR_8);

 FUNC_4(VAR_1->dev, "%ld.%09ld: %u ... %u = %u\n",
     (long)VAR_8.tv_sec, VAR_8.tv_nsec, VAR_3, VAR_4, VAR_4 - VAR_3);

 FUNC_4(VAR_1->dev, "time per call: %ld ns\n", VAR_8.tv_nsec / 1000);
}
