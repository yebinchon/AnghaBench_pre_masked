
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmediareq {int ifm_current; } ;
struct afswtch {int dummy; } ;
struct TYPE_2__ {int ifr_media; int ifr_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int,char*,char const*) ;
 struct ifmediareq* FUNC_3 (int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_6, int VAR_7, int VAR_8, const struct afswtch *VAR_9)
{
 struct ifmediareq *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_8);

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_11 < 0 || VAR_11 > (int)VAR_1)
  FUNC_2(1, "invalid media instance: %s", VAR_6);

 FUNC_4(VAR_3.ifr_name, VAR_4, sizeof(VAR_3.ifr_name));
 VAR_3.ifr_media = (VAR_10->ifm_current & ~VAR_0) | VAR_11 << VAR_2;

 VAR_10->ifm_current = VAR_3.ifr_media;
 FUNC_1(VAR_5, (void *)VAR_10);
}
