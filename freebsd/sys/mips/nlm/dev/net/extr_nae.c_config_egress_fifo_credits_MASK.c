
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int max_stg2_offset; int stg1_2_credit; int max_eh_offset; int stg2_eh_credit; int max_frout_offset; int stg2_frout_credit; int max_ms_offset; int stg2_ms_credit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8, struct nae_port_config *VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = VAR_6 + VAR_7;

 VAR_12 = VAR_9[VAR_5].max_stg2_offset + 1;
 for (VAR_13 = VAR_6; VAR_13 < VAR_14; VAR_13++) {
  VAR_11 = VAR_9[VAR_5].stg1_2_credit / VAR_8;
  if (VAR_11 > VAR_12)
      VAR_11 = VAR_12;
  VAR_10 = VAR_11 << 16 |
      VAR_13 << 4 |
      1;
  FUNC_0(VAR_4, VAR_1, VAR_10);
 }


 VAR_12 = VAR_9[VAR_5].max_eh_offset + 1;
 for (VAR_13 = VAR_6; VAR_13 < VAR_14; VAR_13++) {
  VAR_11 = VAR_9[VAR_5].stg2_eh_credit / VAR_8;
  if (VAR_11 > VAR_12)
   VAR_11 = VAR_12;
  VAR_10 = VAR_11 << 16 |
      VAR_13 << 4 |
      1;
  FUNC_0(VAR_4, VAR_2, VAR_10);
 }


 VAR_12 = VAR_9[VAR_5].max_frout_offset + 1;
 for (VAR_13 = VAR_6; VAR_13 < VAR_14; VAR_13++) {
  VAR_11 = VAR_9[VAR_5].stg2_frout_credit / VAR_8;
  if (VAR_11 > VAR_12)
   VAR_11 = VAR_12;
  VAR_10 = VAR_11 << 16 |
      VAR_13 << 4 |
      1;
  FUNC_0(VAR_4, VAR_0, VAR_10);
 }


 VAR_12 = VAR_9[VAR_5].max_ms_offset + 1;
 for (VAR_13 = VAR_6; VAR_13 < VAR_14; VAR_13++) {
  VAR_11 = VAR_9[VAR_5].stg2_ms_credit / VAR_8;
  if (VAR_11 > VAR_12)
   VAR_11 = VAR_12;
  VAR_10 = VAR_11 << 16 |
      VAR_13 << 4 |
      1;
  FUNC_0(VAR_4, VAR_3, VAR_10);
 }
}
