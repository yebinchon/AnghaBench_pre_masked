
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct bcm_platform {int cid; int cc_caps; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (struct bcm_platform*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bcm_platform*) ;
 scalar_t__ FUNC_3 (struct bcm_platform*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;

uint64_t
FUNC_7(struct bcm_platform *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4, VAR_5;
 bus_size_t VAR_6;
 uint8_t VAR_7;


 if (FUNC_3(VAR_2))
  return (FUNC_4(FUNC_2(VAR_2)));




 VAR_7 = FUNC_1(VAR_2->cc_caps, VAR_0);
 VAR_6 = FUNC_5(&VAR_2->cid, VAR_7, &VAR_3);
 if (VAR_6 == 0)
  return (VAR_3);

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_6);

 return (FUNC_6(&VAR_2->cid, VAR_7, VAR_4, VAR_5));

}
