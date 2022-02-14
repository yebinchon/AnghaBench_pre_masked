
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct the_nilfs {int ns_last_segment_lock; int ns_last_cno; int ns_last_seq; int ns_last_pseg; } ;
typedef int sector_t ;
typedef int __u64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct the_nilfs *VAR_0,
       sector_t VAR_1, u64 VAR_2, __u64 VAR_3)
{
 FUNC_0(&VAR_0->ns_last_segment_lock);
 VAR_0->ns_last_pseg = VAR_1;
 VAR_0->ns_last_seq = VAR_2;
 VAR_0->ns_last_cno = VAR_3;
 FUNC_1(&VAR_0->ns_last_segment_lock);
}
