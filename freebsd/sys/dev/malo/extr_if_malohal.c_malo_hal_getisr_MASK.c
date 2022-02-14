
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct malo_hal {int mh_imask; int mh_ioh; int mh_iot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

void
FUNC_2(struct malo_hal *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2->mh_iot, VAR_2->mh_ioh,
     VAR_0);
 if (VAR_4 == 0xffffffff) {
  VAR_4 = 0;
 } else if (VAR_4 != 0) {

  FUNC_1(VAR_2->mh_iot, VAR_2->mh_ioh,
      VAR_0, VAR_4 &~ VAR_2->mh_imask);
  (void) FUNC_0(VAR_2->mh_iot, VAR_2->mh_ioh,
      VAR_1);
  VAR_4 &= VAR_2->mh_imask;
 }

 *VAR_3 = VAR_4;
}
