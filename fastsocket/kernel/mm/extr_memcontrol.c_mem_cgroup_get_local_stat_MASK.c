
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int stat; } ;
struct mcs_total_stat {int* stat; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (struct mem_cgroup*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct mem_cgroup *VAR_24, struct mcs_total_stat *VAR_25)
{
 s64 VAR_26;


 VAR_26 = FUNC_1(&VAR_24->stat, VAR_16);
 VAR_25->stat[VAR_7] += VAR_26 * VAR_22;
 VAR_26 = FUNC_1(&VAR_24->stat, VAR_20);
 VAR_25->stat[VAR_13] += VAR_26 * VAR_22;
 VAR_26 = FUNC_1(&VAR_24->stat, VAR_17);
 VAR_25->stat[VAR_8] += VAR_26 * VAR_22;
 VAR_26 = FUNC_1(&VAR_24->stat, VAR_18);
 VAR_25->stat[VAR_11] += VAR_26;
 VAR_26 = FUNC_1(&VAR_24->stat, VAR_19);
 VAR_25->stat[VAR_12] += VAR_26;
 if (VAR_23) {
  VAR_26 = FUNC_1(&VAR_24->stat, VAR_21);
  VAR_25->stat[VAR_14] += VAR_26 * VAR_22;
 }


 VAR_26 = FUNC_0(VAR_24, VAR_2);
 VAR_25->stat[VAR_9] += VAR_26 * VAR_22;
 VAR_26 = FUNC_0(VAR_24, VAR_0);
 VAR_25->stat[VAR_5] += VAR_26 * VAR_22;
 VAR_26 = FUNC_0(VAR_24, VAR_3);
 VAR_25->stat[VAR_10] += VAR_26 * VAR_22;
 VAR_26 = FUNC_0(VAR_24, VAR_1);
 VAR_25->stat[VAR_6] += VAR_26 * VAR_22;
 VAR_26 = FUNC_0(VAR_24, VAR_4);
 VAR_25->stat[VAR_15] += VAR_26 * VAR_22;
}
