
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmediareq {int ifm_current; int * ifm_ulist; } ;
struct afswtch {int dummy; } ;
struct TYPE_2__ {int ifr_media; int ifr_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,char const*) ;
 struct ifmediareq* FUNC_3 (int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_4, int VAR_5, int VAR_6, const struct afswtch *VAR_7)
{
 struct ifmediareq *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_6);

 VAR_9 = FUNC_2(FUNC_0(VAR_8->ifm_ulist[0]), VAR_4);

 FUNC_4(VAR_1.ifr_name, VAR_2, sizeof(VAR_1.ifr_name));
 VAR_1.ifr_media = (VAR_8->ifm_current & ~VAR_0) | VAR_9;

 VAR_8->ifm_current = VAR_1.ifr_media;
 FUNC_1(VAR_3, (void *)VAR_8);
}
