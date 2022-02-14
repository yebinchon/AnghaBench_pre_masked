
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct malo_hal_caldata {int pt_ratetable_20m; } ;
struct malo_hal {int mh_flags; scalar_t__ mh_cmdbuf; } ;
struct malo_cmd_caltable {int* caltbl; } ;


 int FUNC_0 (struct malo_hal*) ;
 int FUNC_1 (struct malo_hal*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct malo_hal*,int,int ) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static int
FUNC_4(struct malo_hal *VAR_1, struct malo_hal_caldata *VAR_2)
{
 const uint8_t *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);

 VAR_3 = ((const struct malo_cmd_caltable *) VAR_1->mh_cmdbuf)->caltbl;
 if (FUNC_2(VAR_1, 33, 0) == 0) {
  VAR_4 = (VAR_3[2] | (VAR_3[3] << 8)) - 12;

  FUNC_3(VAR_2->pt_ratetable_20m, &VAR_3[12], VAR_4);
 }
 VAR_1->mh_flags |= VAR_0;
 FUNC_1(VAR_1);

 return 0;
}
