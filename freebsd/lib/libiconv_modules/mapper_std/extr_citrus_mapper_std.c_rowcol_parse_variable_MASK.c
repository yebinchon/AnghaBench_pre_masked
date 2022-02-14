
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct _region {int dummy; } ;
struct _citrus_mapper_std_rowcol_info_x {TYPE_1__* rcx_src_rowcol; int rcx_src_rowcol_len; int rcx_src_rowcol_bits; int rcx_dst_unit_bits; int rcx_dst_invalid; } ;
struct _citrus_mapper_std_rowcol {int rc_src_rowcol_bits; int rc_src_rowcol_mask; int rc_src_rowcol_len; struct _citrus_mapper_std_linear_zone* rc_src_rowcol; void* rc_dst_unit_bits; void* rc_dst_invalid; } ;
struct _citrus_mapper_std_linear_zone {int dummy; } ;
struct TYPE_2__ {int end; int begin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _citrus_mapper_std_rowcol_info_x* FUNC_0 (struct _region*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct _citrus_mapper_std_linear_zone*) ;
 struct _citrus_mapper_std_linear_zone* FUNC_3 (int) ;
 int FUNC_4 (struct _citrus_mapper_std_linear_zone*,int,int) ;

__attribute__((used)) static __inline int
FUNC_5(struct _citrus_mapper_std_rowcol *VAR_3,
    struct _region *VAR_4)
{
 const struct _citrus_mapper_std_rowcol_info_x *VAR_5;
 struct _citrus_mapper_std_linear_zone *VAR_6;
 size_t VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = FUNC_0(VAR_4);

 VAR_3->rc_dst_invalid = FUNC_1(VAR_5->rcx_dst_invalid);
 VAR_3->rc_dst_unit_bits = FUNC_1(VAR_5->rcx_dst_unit_bits);

 VAR_8 = FUNC_1(VAR_5->rcx_src_rowcol_bits);
 VAR_9 = 1 << (VAR_8 - 1);
 VAR_9 |= VAR_9 - 1;
 VAR_3->rc_src_rowcol_bits = VAR_8;
 VAR_3->rc_src_rowcol_mask = VAR_9;

 VAR_3->rc_src_rowcol_len = FUNC_1(VAR_5->rcx_src_rowcol_len);
 if (VAR_3->rc_src_rowcol_len > VAR_2)
  return (VAR_0);
 VAR_3->rc_src_rowcol = FUNC_3(VAR_3->rc_src_rowcol_len *
     sizeof(*VAR_3->rc_src_rowcol));
 if (VAR_3->rc_src_rowcol == ((void*)0))
  return (VAR_1);
 for (VAR_7 = 0, VAR_6 = VAR_3->rc_src_rowcol;
     VAR_7 < VAR_3->rc_src_rowcol_len; ++VAR_7, ++VAR_6) {
  VAR_8 = FUNC_1(VAR_5->rcx_src_rowcol[VAR_7].begin),
  VAR_9 = FUNC_1(VAR_5->rcx_src_rowcol[VAR_7].end);
  VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_9);
  if (VAR_10 != 0) {
   FUNC_2(VAR_3->rc_src_rowcol);
   VAR_3->rc_src_rowcol = ((void*)0);
   return (VAR_10);
  }
 }
 return (0);
}
