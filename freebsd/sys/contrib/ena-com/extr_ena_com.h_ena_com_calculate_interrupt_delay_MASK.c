
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_intr_moder_entry {unsigned int pkts_per_interval; unsigned int bytes_per_interval; unsigned int intr_moder_interval; } ;
struct ena_com_dev {struct ena_intr_moder_entry* intr_moder_tbl; } ;
typedef enum ena_intr_moder_level { ____Placeholder_ena_intr_moder_level } ena_intr_moder_level ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct ena_com_dev *VAR_6,
           unsigned int VAR_7,
           unsigned int VAR_8,
           unsigned int *VAR_9,
           unsigned int *VAR_10)
{
 enum ena_intr_moder_level VAR_11, VAR_12;
 struct ena_intr_moder_entry *VAR_13;
 struct ena_intr_moder_entry *VAR_14;
 struct ena_intr_moder_entry *VAR_15;
 struct ena_intr_moder_entry *VAR_16 = VAR_6->intr_moder_tbl;
 unsigned int VAR_17;




 if (!VAR_7 || !VAR_8)



  return;

 VAR_11 = (enum ena_intr_moder_level)(*VAR_10);
 if (FUNC_1(VAR_11 >= VAR_2)) {
  FUNC_0("Wrong moderation index %u\n", VAR_11);
  return;
 }

 VAR_13 = &VAR_16[VAR_11];
 VAR_12 = VAR_11;

 if (VAR_11 == VAR_5) {
  if ((VAR_7 > VAR_13->pkts_per_interval) ||
      (VAR_8 > VAR_13->bytes_per_interval))
   VAR_12 =
    (enum ena_intr_moder_level)(VAR_11 + VAR_4);
 } else {
  VAR_14 = &VAR_16[VAR_11 - VAR_4];

  if ((VAR_7 <= VAR_14->pkts_per_interval) ||
      (VAR_8 <= VAR_14->bytes_per_interval))
   VAR_12 =
    (enum ena_intr_moder_level)(VAR_11 - VAR_4);
  else if ((VAR_7 > VAR_13->pkts_per_interval) ||
    (VAR_8 > VAR_13->bytes_per_interval)) {
   if (VAR_11 != VAR_3)
    VAR_12 =
     (enum ena_intr_moder_level)(VAR_11 + VAR_4);
  }
 }
 VAR_15 = &VAR_16[VAR_12];

 VAR_17 = VAR_15->intr_moder_interval;
 *VAR_9 = (
  (VAR_17 * VAR_0 +
  VAR_1 * (*VAR_9)) + 5) /
  10;

 *VAR_10 = VAR_12;
}
