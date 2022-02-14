
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int size; } ;
struct sym_pmc {TYPE_1__ sg; int ret; } ;
typedef int hcb_p ;
typedef TYPE_5__* ccb_p ;
struct TYPE_8__ {int goalp; } ;
struct TYPE_10__ {TYPE_3__* data; TYPE_2__ head; struct sym_pmc pm1; struct sym_pmc pm0; } ;
struct TYPE_11__ {int host_flags; int segments; int ext_sg; int ext_ofs; TYPE_4__ phys; } ;
struct TYPE_9__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(hcb_p VAR_4, ccb_p VAR_5, u32 VAR_6, int *VAR_7)
{
 u32 VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;
 struct sym_pmc *VAR_13;





 VAR_8 = VAR_6;
 VAR_9 = *VAR_7;
 if (VAR_8 == FUNC_0 (VAR_4, VAR_2))
  VAR_13 = &VAR_5->phys.pm0;
 else if (VAR_8 == FUNC_0 (VAR_4, VAR_3))
  VAR_13 = &VAR_5->phys.pm1;
 else
  VAR_13 = ((void*)0);

 if (VAR_13) {
  VAR_8 = FUNC_1(VAR_13->ret);
  VAR_9 -= FUNC_1(VAR_13->sg.size);
 }




 if (VAR_5->host_flags & VAR_0) {
  *VAR_7 = VAR_9;
  return 0;
 }







 VAR_12 = FUNC_1(VAR_5->phys.head.goalp);
 VAR_10 = VAR_1;
 if (VAR_8 != VAR_12)
  VAR_10 -= (VAR_12 - 8 - (int)VAR_8) / (2*4);
 VAR_11 = VAR_1 - VAR_5->segments;
 if (VAR_9 < 0) {
  int VAR_14;
  while (VAR_10 > VAR_11) {
   --VAR_10;
   VAR_12 = FUNC_1(VAR_5->phys.data[VAR_10].size);
   VAR_14 = VAR_9 + (VAR_12 & 0xffffff);
   if (VAR_14 > 0) {
    ++VAR_10;
    break;
   }
   VAR_9 = VAR_14;
  }
 }
 else if (VAR_9 > 0) {
  while (VAR_10 < VAR_1) {
   VAR_12 = FUNC_1(VAR_5->phys.data[VAR_10].size);
   VAR_9 -= (VAR_12 & 0xffffff);
   ++VAR_10;
   if (VAR_9 <= 0)
    break;
  }
 }





 if (VAR_10 < VAR_11 || (VAR_10 == VAR_11 && VAR_9 < 0))
  goto out_err;
 else if (VAR_10 > VAR_1 ||
   (VAR_10 == VAR_1 && VAR_9 > 0))
  goto out_err;




 if (VAR_10 > VAR_5->ext_sg ||
            (VAR_10 == VAR_5->ext_sg && VAR_9 > VAR_5->ext_ofs)) {
  VAR_5->ext_sg = VAR_10;
  VAR_5->ext_ofs = VAR_9;
 }




 *VAR_7 = VAR_9;
 return VAR_10;

out_err:
 return -1;
}
