
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {int dummy; } ;
struct ieee80211vap {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int trans; } ;
struct TYPE_3__ {int tfd_queue_msk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int* VAR_4 ;
 int FUNC_3 (struct iwm_softc*,int ,int ) ;
 int FUNC_4 (struct iwm_softc*,int ,int ) ;
 int FUNC_5 (struct iwm_softc*) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;

int
FUNC_6(struct iwm_softc *VAR_7, struct ieee80211vap *VAR_8,
 boolean_t VAR_9)
{
 uint32_t VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_7, FUNC_0(VAR_8), VAR_2);
 if (VAR_11)
  return VAR_11;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10 |= FUNC_1(1 << VAR_4[VAR_12]);
 }
 VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_1);
 if (VAR_11)
  return VAR_11;






 VAR_11 = FUNC_3(VAR_7, FUNC_0(VAR_8), VAR_0);


 if (VAR_9)
  return VAR_11;



 VAR_11 = FUNC_5(VAR_7);

 return VAR_11;
}
