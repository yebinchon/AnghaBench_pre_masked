
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _region {int dummy; } ;
struct _citrus_mapper_std_rowcol_ext_ilseq_info_x {int eix_dst_ilseq; int eix_oob_mode; } ;
struct _citrus_mapper_std_rowcol {int rc_src_rowcol_bits; int rc_src_rowcol_len; int rc_dst_unit_bits; struct _region rc_table; struct _citrus_mapper_std_linear_zone* rc_src_rowcol; void* rc_dst_ilseq; void* rc_oob_mode; void* rc_dst_invalid; } ;
struct _citrus_mapper_std_linear_zone {int width; } ;
struct _citrus_mapper_std {int ms_db; struct _citrus_mapper_std_rowcol ms_rowcol; int * ms_uninit; int * ms_convert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,struct _region*,int *) ;
 struct _citrus_mapper_std_rowcol_ext_ilseq_info_x* FUNC_1 (struct _region*) ;
 int FUNC_2 (struct _region*) ;
 void* FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct _citrus_mapper_std_rowcol*,struct _region*) ;
 int FUNC_5 (struct _citrus_mapper_std_rowcol*,struct _region*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct _citrus_mapper_std *VAR_9)
{
 struct _citrus_mapper_std_linear_zone *VAR_10;
 struct _citrus_mapper_std_rowcol *VAR_11;
 const struct _citrus_mapper_std_rowcol_ext_ilseq_info_x *VAR_12;
 struct _region VAR_13;
 uint64_t VAR_14;
 size_t VAR_15;
 int VAR_16;

 VAR_9->ms_convert = &VAR_7;
 VAR_9->ms_uninit = &VAR_8;
 VAR_11 = &VAR_9->ms_rowcol;


 VAR_16 = FUNC_0(VAR_9->ms_db, VAR_6,
     &VAR_11->rc_table, ((void*)0));
 if (VAR_16) {
  if (VAR_16 == VAR_1)
   VAR_16 = VAR_0;
  return (VAR_16);
 }


 VAR_16 = FUNC_0(VAR_9->ms_db, VAR_4, &VAR_13, ((void*)0));
 if (VAR_16) {
  if (VAR_16 == VAR_1)
   VAR_16 = VAR_0;
  return (VAR_16);
 }
 switch (FUNC_2(&VAR_13)) {
 case 129:
  VAR_16 = FUNC_5(VAR_11, &VAR_13);
  break;
 case 128:
  VAR_16 = FUNC_4(VAR_11, &VAR_13);
  break;
 default:
  return (VAR_0);
 }
 if (VAR_16 != 0)
  return (VAR_16);

 switch (VAR_11->rc_src_rowcol_bits) {
 case 8: case 16: case 32:
  if (VAR_11->rc_src_rowcol_len <= 32 / VAR_11->rc_src_rowcol_bits)
   break;

 default:
  return (VAR_0);
 }


 VAR_11->rc_oob_mode = VAR_3;
 VAR_11->rc_dst_ilseq = VAR_11->rc_dst_invalid;
 VAR_16 = FUNC_0(VAR_9->ms_db,
     VAR_5, &VAR_13, ((void*)0));
 if (VAR_16 && VAR_16 != VAR_1)
  return (VAR_16);
 if (FUNC_2(&VAR_13) < sizeof(*VAR_12))
  return (VAR_0);
 if (VAR_16 == 0) {
  VAR_12 = FUNC_1(&VAR_13);
  VAR_11->rc_oob_mode = FUNC_3(VAR_12->eix_oob_mode);
  VAR_11->rc_dst_ilseq = FUNC_3(VAR_12->eix_dst_ilseq);
 }


 VAR_15 = VAR_11->rc_src_rowcol_len;
 VAR_10 = &VAR_11->rc_src_rowcol[--VAR_15];
 VAR_14 = VAR_10->width;
 while (VAR_15 > 0) {
  VAR_10 = &VAR_11->rc_src_rowcol[--VAR_15];
  VAR_14 *= VAR_10->width;
 }
 VAR_14 *= VAR_11->rc_dst_unit_bits/8;

 if (VAR_14 > VAR_2 ||
     FUNC_2(&VAR_11->rc_table) < VAR_14)
  return (VAR_0);

 return (0);
}
