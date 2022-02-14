
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int va_mask; } ;
struct TYPE_11__ {int xva_mapsize; int * xva_reqattrmap; TYPE_1__ xva_vattr; } ;
typedef TYPE_2__ xvattr_t ;
struct TYPE_12__ {int xoa_hidden; int xoa_system; int xoa_archive; int xoa_readonly; int xoa_immutable; int xoa_nounlink; int xoa_appendonly; int xoa_nodump; int xoa_opaque; int xoa_av_modified; int xoa_av_quarantined; int xoa_reparse; int xoa_offline; int xoa_sparse; int xoa_av_scanstamp; int xoa_createtime; } ;
typedef TYPE_3__ xoptattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {int lr_attr_masksize; int lr_attr_bitmap; } ;
typedef TYPE_4__ lr_attr_t ;
typedef void* caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (void*,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(lr_attr_t *VAR_32, xvattr_t *VAR_33)
{
 xoptattr_t *VAR_34 = ((void*)0);
 uint64_t *VAR_35;
 uint64_t *VAR_36;
 uint32_t *VAR_37;
 void *VAR_38;
 int VAR_39;

 VAR_33->xva_vattr.va_mask |= VAR_0;
 if ((VAR_34 = FUNC_4(VAR_33)) == ((void*)0)) {
  VAR_33->xva_vattr.va_mask &= ~VAR_0;
  return;
 }

 FUNC_0(VAR_32->lr_attr_masksize == VAR_33->xva_mapsize);

 VAR_37 = &VAR_32->lr_attr_bitmap;
 for (VAR_39 = 0; VAR_39 != VAR_32->lr_attr_masksize; VAR_39++, VAR_37++)
  VAR_33->xva_reqattrmap[VAR_39] = *VAR_37;

 VAR_35 = (uint64_t *)(VAR_32 + VAR_32->lr_attr_masksize - 1);
 VAR_36 = VAR_35 + 1;
 VAR_38 = (caddr_t)(VAR_36 + 2);

 if (FUNC_1(VAR_33, VAR_22))
  VAR_34->xoa_hidden = ((*VAR_35 & VAR_6) != 0);
 if (FUNC_1(VAR_33, VAR_31))
  VAR_34->xoa_system = ((*VAR_35 & VAR_15) != 0);
 if (FUNC_1(VAR_33, VAR_17))
  VAR_34->xoa_archive = ((*VAR_35 & VAR_3) != 0);
 if (FUNC_1(VAR_33, VAR_28))
  VAR_34->xoa_readonly = ((*VAR_35 & VAR_12) != 0);
 if (FUNC_1(VAR_33, VAR_23))
  VAR_34->xoa_immutable = ((*VAR_35 & VAR_7) != 0);
 if (FUNC_1(VAR_33, VAR_25))
  VAR_34->xoa_nounlink = ((*VAR_35 & VAR_9) != 0);
 if (FUNC_1(VAR_33, VAR_16))
  VAR_34->xoa_appendonly = ((*VAR_35 & VAR_2) != 0);
 if (FUNC_1(VAR_33, VAR_24))
  VAR_34->xoa_nodump = ((*VAR_35 & VAR_8) != 0);
 if (FUNC_1(VAR_33, VAR_27))
  VAR_34->xoa_opaque = ((*VAR_35 & VAR_11) != 0);
 if (FUNC_1(VAR_33, VAR_18))
  VAR_34->xoa_av_modified = ((*VAR_35 & VAR_4) != 0);
 if (FUNC_1(VAR_33, VAR_19))
  VAR_34->xoa_av_quarantined =
      ((*VAR_35 & VAR_5) != 0);
 if (FUNC_1(VAR_33, VAR_21))
  FUNC_2(&VAR_34->xoa_createtime, VAR_36);
 if (FUNC_1(VAR_33, VAR_20))
  FUNC_3(VAR_38, VAR_34->xoa_av_scanstamp, VAR_1);
 if (FUNC_1(VAR_33, VAR_29))
  VAR_34->xoa_reparse = ((*VAR_35 & VAR_13) != 0);
 if (FUNC_1(VAR_33, VAR_26))
  VAR_34->xoa_offline = ((*VAR_35 & VAR_10) != 0);
 if (FUNC_1(VAR_33, VAR_30))
  VAR_34->xoa_sparse = ((*VAR_35 & VAR_14) != 0);
}
