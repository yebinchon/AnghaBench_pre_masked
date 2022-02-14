
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_chinfo {int fmc; int eso; int rvol; int cvol; int active; scalar_t__ bufhalf; scalar_t__ vol; scalar_t__ pan; scalar_t__ gvsel; int buffer; scalar_t__ cso; int lba; scalar_t__ alpha; scalar_t__ ec; scalar_t__ fms; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tr_chinfo*,int) ;
 int FUNC_5 (struct tr_chinfo*) ;
 int FUNC_6 (struct tr_chinfo*) ;
 int FUNC_7 (struct tr_chinfo*) ;

__attribute__((used)) static int
FUNC_8(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct tr_chinfo *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_3))
  return 0;

 if (VAR_3 == VAR_0) {
  VAR_4->fmc = 3;
  VAR_4->fms = 0;
  VAR_4->ec = 0;
  VAR_4->alpha = 0;
  VAR_4->lba = FUNC_2(VAR_4->buffer);
  VAR_4->cso = 0;
  VAR_4->eso = (FUNC_3(VAR_4->buffer) / FUNC_1(VAR_4->buffer)) - 1;
  VAR_4->rvol = VAR_4->cvol = 0x7f;
  VAR_4->gvsel = 0;
  VAR_4->pan = 0;
  VAR_4->vol = 0;
  VAR_4->bufhalf = 0;
     FUNC_7(VAR_4);
  FUNC_4(VAR_4, 1);
  FUNC_5(VAR_4);
  VAR_4->active = 1;
 } else {
  FUNC_6(VAR_4);
  VAR_4->active = 0;
 }

 return 0;
}
