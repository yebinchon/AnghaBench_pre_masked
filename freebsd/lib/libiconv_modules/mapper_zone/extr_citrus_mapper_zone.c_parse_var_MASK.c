
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct _parse_state {int ps_u_imm; scalar_t__ ps_s_imm; int ps_state; } ;
struct _memstream {int dummy; } ;
struct TYPE_3__ {scalar_t__ z_end; scalar_t__ z_begin; } ;
struct _citrus_mapper_zone {int mz_col_bits; scalar_t__ mz_row_offset; TYPE_1__ mz_row; scalar_t__ mz_col_offset; TYPE_1__ mz_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 char FUNC_1 (struct _memstream*,struct _parse_state*) ;
 scalar_t__ FUNC_2 (struct _memstream*,struct _parse_state*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct _citrus_mapper_zone *VAR_4, struct _memstream *VAR_5)
{
 struct _parse_state VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_6.ps_state = VAR_1;

 if (FUNC_2(VAR_5, &VAR_6, &VAR_4->mz_col))
  return (-1);

 VAR_10 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_10 == '/') {

  VAR_9 = 1;
  VAR_4->mz_row = VAR_4->mz_col;

  if (FUNC_2(VAR_5, &VAR_6, &VAR_4->mz_col))
   return (-1);
  if (FUNC_1(VAR_5, &VAR_6) != '/')
   return (-1);
  if (FUNC_1(VAR_5, &VAR_6) != VAR_3)
   return (-1);
  VAR_4->mz_col_bits = VAR_6.ps_u_imm;
  if (VAR_4->mz_col_bits < 0 || VAR_4->mz_col_bits > 32)
   return (-1);
  VAR_10 = FUNC_1(VAR_5, &VAR_6);
 } else {

  VAR_9 = 0;
  VAR_4->mz_col_bits = 32;
  VAR_4->mz_row.z_begin = VAR_4->mz_row.z_end = 0;
 }
 if (VAR_10 == ':') {

  VAR_6.ps_state = VAR_2;
  if (FUNC_1(VAR_5, &VAR_6) != VAR_3)
   return (-1);
  VAR_4->mz_col_offset = VAR_6.ps_s_imm;
  if (VAR_9) {

   VAR_4->mz_row_offset = VAR_4->mz_col_offset;
   if (FUNC_1(VAR_5, &VAR_6) != '/')
    return (-1);
   if (FUNC_1(VAR_5, &VAR_6) != VAR_3)
    return (-1);
   VAR_4->mz_col_offset = VAR_6.ps_s_imm;
  } else
   VAR_4->mz_row_offset = 0;
  VAR_10 = FUNC_1(VAR_5, &VAR_6);
 }
 if (VAR_10 != VAR_0)
  return (-1);


 VAR_7 = (VAR_4->mz_col_bits == 32) ? 0 : 1 << VAR_4->mz_col_bits;
 VAR_8 = (VAR_4->mz_col_bits == 0) ? 0 : 1 << (32-VAR_4->mz_col_bits);
 if (FUNC_0(&VAR_4->mz_col, VAR_4->mz_col_offset, VAR_7))
  return (-1);
 if (FUNC_0(&VAR_4->mz_row, VAR_4->mz_row_offset, VAR_8))
  return (-1);

 return (0);
}
