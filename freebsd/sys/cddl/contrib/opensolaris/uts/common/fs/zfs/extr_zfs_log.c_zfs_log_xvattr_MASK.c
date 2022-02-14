
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int xva_mapsize; int * xva_reqattrmap; } ;
typedef TYPE_1__ xvattr_t ;
struct TYPE_11__ {scalar_t__ xoa_readonly; scalar_t__ xoa_hidden; scalar_t__ xoa_system; scalar_t__ xoa_archive; scalar_t__ xoa_immutable; scalar_t__ xoa_nounlink; scalar_t__ xoa_appendonly; scalar_t__ xoa_opaque; scalar_t__ xoa_nodump; scalar_t__ xoa_av_quarantined; scalar_t__ xoa_av_modified; scalar_t__ xoa_reparse; scalar_t__ xoa_offline; scalar_t__ xoa_sparse; int xoa_av_scanstamp; int xoa_createtime; } ;
typedef TYPE_2__ xoptattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_12__ {int lr_attr_masksize; int lr_attr_bitmap; } ;
typedef TYPE_3__ lr_attr_t ;
typedef void* caddr_t ;


 int FUNC_0 (TYPE_2__*) ;
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
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void*,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(lr_attr_t *VAR_30, xvattr_t *VAR_31)
{
 uint32_t *VAR_32;
 uint64_t *VAR_33;
 uint64_t *VAR_34;
 xoptattr_t *VAR_35;
 void *VAR_36;
 int VAR_37;

 VAR_35 = FUNC_4(VAR_31);
 FUNC_0(VAR_35);

 VAR_30->lr_attr_masksize = VAR_31->xva_mapsize;
 VAR_32 = &VAR_30->lr_attr_bitmap;
 for (VAR_37 = 0; VAR_37 != VAR_31->xva_mapsize; VAR_37++, VAR_32++) {
  *VAR_32 = VAR_31->xva_reqattrmap[VAR_37];
 }


 VAR_33 = (uint64_t *)VAR_32;
 VAR_34 = VAR_33 + 1;
 VAR_36 = (caddr_t)(VAR_34 + 2);
 *VAR_33 = 0;
 if (FUNC_1(VAR_31, VAR_26))
  *VAR_33 |= (VAR_35->xoa_readonly == 0) ? 0 :
      VAR_10;
 if (FUNC_1(VAR_31, VAR_20))
  *VAR_33 |= (VAR_35->xoa_hidden == 0) ? 0 :
      VAR_5;
 if (FUNC_1(VAR_31, VAR_29))
  *VAR_33 |= (VAR_35->xoa_system == 0) ? 0 :
      VAR_13;
 if (FUNC_1(VAR_31, VAR_15))
  *VAR_33 |= (VAR_35->xoa_archive == 0) ? 0 :
      VAR_2;
 if (FUNC_1(VAR_31, VAR_21))
  *VAR_33 |= (VAR_35->xoa_immutable == 0) ? 0 :
      VAR_6;
 if (FUNC_1(VAR_31, VAR_23))
  *VAR_33 |= (VAR_35->xoa_nounlink == 0) ? 0 :
      VAR_8;
 if (FUNC_1(VAR_31, VAR_14))
  *VAR_33 |= (VAR_35->xoa_appendonly == 0) ? 0 :
      VAR_1;
 if (FUNC_1(VAR_31, VAR_25))
  *VAR_33 |= (VAR_35->xoa_opaque == 0) ? 0 :
      VAR_1;
 if (FUNC_1(VAR_31, VAR_22))
  *VAR_33 |= (VAR_35->xoa_nodump == 0) ? 0 :
      VAR_7;
 if (FUNC_1(VAR_31, VAR_17))
  *VAR_33 |= (VAR_35->xoa_av_quarantined == 0) ? 0 :
      VAR_4;
 if (FUNC_1(VAR_31, VAR_16))
  *VAR_33 |= (VAR_35->xoa_av_modified == 0) ? 0 :
      VAR_3;
 if (FUNC_1(VAR_31, VAR_19))
  FUNC_2(&VAR_35->xoa_createtime, VAR_34);
 if (FUNC_1(VAR_31, VAR_18))
  FUNC_3(VAR_35->xoa_av_scanstamp, VAR_36, VAR_0);
 if (FUNC_1(VAR_31, VAR_27))
  *VAR_33 |= (VAR_35->xoa_reparse == 0) ? 0 :
      VAR_11;
 if (FUNC_1(VAR_31, VAR_24))
  *VAR_33 |= (VAR_35->xoa_offline == 0) ? 0 :
      VAR_9;
 if (FUNC_1(VAR_31, VAR_28))
  *VAR_33 |= (VAR_35->xoa_sparse == 0) ? 0 :
      VAR_12;
}
