
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chip_params {int cng_ch_bits_log; int nsched_cls; int mps_rplc_size; int vfcount; int sge_fl_db; int const mps_tcam_size; int const cim_num_obq; int const pm_stats_cnt; int const nchan; } ;


 int FUNC_0 (struct chip_params const*) ;
 scalar_t__ VAR_0 ;
const struct chip_params *FUNC_1(int VAR_1)
{
 static const struct chip_params VAR_2[] = {
  {

   .nchan = 133,
   .pm_stats_cnt = 130,
   .cng_ch_bits_log = 2,
   .nsched_cls = 15,
   .cim_num_obq = 137,
   .mps_rplc_size = 128,
   .vfcount = 128,
   .sge_fl_db = 135,
   .mps_tcam_size = 132,
  },
  {

   .nchan = 133,
   .pm_stats_cnt = 130,
   .cng_ch_bits_log = 2,
   .nsched_cls = 16,
   .cim_num_obq = 136,
   .mps_rplc_size = 128,
   .vfcount = 128,
   .sge_fl_db = 135 | 134,
   .mps_tcam_size = 131,
  },
  {

   .nchan = 129,
   .pm_stats_cnt = 128,
   .cng_ch_bits_log = 3,
   .nsched_cls = 16,
   .cim_num_obq = 136,
   .mps_rplc_size = 256,
   .vfcount = 256,
   .sge_fl_db = 0,
   .mps_tcam_size = 131,
  },
 };

 VAR_1 -= VAR_0;
 if (VAR_1 < 0 || VAR_1 >= FUNC_0(VAR_2))
  return ((void*)0);

 return &VAR_2[VAR_1];
}
