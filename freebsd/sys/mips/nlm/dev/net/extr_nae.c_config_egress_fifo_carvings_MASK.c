
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int stg2_fifo_size; int max_stg2_offset; int eh_fifo_size; int max_eh_offset; int frout_fifo_size; int max_frout_offset; int ms_fifo_size; int max_ms_offset; int pkt_fifo_size; int max_pmem_offset; int pktlen_fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int VAR_11, struct nae_port_config *VAR_12)
{
 static uint32_t VAR_13[6] = {0, 0, 0, 0, 0, 0};
 uint32_t VAR_14 = 0;
 uint32_t VAR_15 = 0, VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_19 = VAR_9 + VAR_10;

 VAR_15 = VAR_13[0];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].stg2_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16;
  if (VAR_17 > VAR_12[VAR_8].max_stg2_offset)
   VAR_17 = VAR_12[VAR_8].max_stg2_offset;
  VAR_14 = VAR_17 << 23 |
      VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_2, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[0] = VAR_15;


 VAR_15 = VAR_13[1];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].eh_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16 ;
  if (VAR_17 > VAR_12[VAR_8].max_eh_offset)
      VAR_17 = VAR_12[VAR_8].max_eh_offset;
  VAR_14 = VAR_17 << 23 |
      VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_0, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[1] = VAR_15;


 VAR_15 = VAR_13[2];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].frout_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16 ;
  if (VAR_17 > VAR_12[VAR_8].max_frout_offset)
   VAR_17 = VAR_12[VAR_8].max_frout_offset;
  VAR_14 = VAR_17 << 23 |
      VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_1, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[2] = VAR_15;


 VAR_15 = VAR_13[3];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].ms_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16 ;
  if (VAR_17 > VAR_12[VAR_8].max_ms_offset)
   VAR_17 = VAR_12[VAR_8].max_ms_offset;
  VAR_14 = VAR_17 << 22 |
      VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_3, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[3] = VAR_15;


 VAR_15 = VAR_13[4];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].pkt_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16 ;
  if (VAR_17 > VAR_12[VAR_8].max_pmem_offset)
   VAR_17 = VAR_12[VAR_8].max_pmem_offset;
  FUNC_0(VAR_7, VAR_6, VAR_17);

  VAR_14 = VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_5, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[4] = VAR_15;


 VAR_15 = VAR_13[5];
 for (VAR_18 = VAR_9; VAR_18 < VAR_19; VAR_18++) {
  VAR_16 = VAR_12[VAR_8].pktlen_fifo_size / VAR_11;
  if (VAR_16)
   VAR_17 = VAR_16 - 1;
  else
   VAR_17 = VAR_16 ;
  VAR_14 = VAR_17 << 22 |
      VAR_15 << 11 |
      VAR_18 << 1 |
      1;
  FUNC_0(VAR_7, VAR_4, VAR_14);
  VAR_15 += VAR_16;
 }
 VAR_13[5] = VAR_15;
}
