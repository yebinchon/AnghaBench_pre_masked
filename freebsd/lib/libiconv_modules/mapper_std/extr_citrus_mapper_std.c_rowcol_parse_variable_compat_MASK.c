
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _region {int dummy; } ;
struct _citrus_mapper_std_rowcol_info_compat_x {int rcx_src_col_end; int rcx_src_col_begin; int rcx_src_row_end; int rcx_src_row_begin; int rcx_src_col_bits; int rcx_dst_unit_bits; int rcx_dst_invalid; } ;
struct _citrus_mapper_std_rowcol {int rc_src_rowcol_bits; int rc_src_rowcol_mask; int rc_src_rowcol_len; struct _citrus_mapper_std_linear_zone* rc_src_rowcol; void* rc_dst_unit_bits; void* rc_dst_invalid; } ;
struct _citrus_mapper_std_linear_zone {int dummy; } ;


 int VAR_0 ;
 struct _citrus_mapper_std_rowcol_info_compat_x* FUNC_0 (struct _region*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct _citrus_mapper_std_linear_zone*) ;
 struct _citrus_mapper_std_linear_zone* FUNC_3 (int) ;
 int FUNC_4 (struct _citrus_mapper_std_linear_zone*,int,int) ;

__attribute__((used)) static __inline int
FUNC_5(struct _citrus_mapper_std_rowcol *VAR_1,
    struct _region *VAR_2)
{
 const struct _citrus_mapper_std_rowcol_info_compat_x *VAR_3;
 struct _citrus_mapper_std_linear_zone *VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 VAR_3 = FUNC_0(VAR_2);

 VAR_1->rc_dst_invalid = FUNC_1(VAR_3->rcx_dst_invalid);
 VAR_1->rc_dst_unit_bits = FUNC_1(VAR_3->rcx_dst_unit_bits);
 VAR_5 = FUNC_1(VAR_3->rcx_src_col_bits);
 VAR_6 = 1U << (VAR_5 - 1);
 VAR_6 |= VAR_6 - 1;
 VAR_1->rc_src_rowcol_bits = VAR_5;
 VAR_1->rc_src_rowcol_mask = VAR_6;

 VAR_1->rc_src_rowcol = FUNC_3(2 *
     sizeof(*VAR_1->rc_src_rowcol));
 if (VAR_1->rc_src_rowcol == ((void*)0))
  return (VAR_0);
 VAR_4 = VAR_1->rc_src_rowcol;
 VAR_1->rc_src_rowcol_len = 1;
 VAR_5 = FUNC_1(VAR_3->rcx_src_row_begin);
 VAR_6 = FUNC_1(VAR_3->rcx_src_row_end);
 if (VAR_5 + VAR_6 > 0) {
  VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
  if (VAR_7 != 0) {
   FUNC_2(VAR_1->rc_src_rowcol);
   VAR_1->rc_src_rowcol = ((void*)0);
   return (VAR_7);
  }
  ++VAR_1->rc_src_rowcol_len, ++VAR_4;
 }
 VAR_5 = FUNC_1(VAR_3->rcx_src_col_begin);
 VAR_6 = FUNC_1(VAR_3->rcx_src_col_end);

 return (FUNC_4(VAR_4, VAR_5, VAR_6));
}
