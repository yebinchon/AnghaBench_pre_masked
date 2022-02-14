
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_last_segment_lock; int ns_last_cno; } ;
typedef int __u64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline __u64 FUNC_2(struct the_nilfs *VAR_0)
{
 __u64 VAR_1;

 FUNC_0(&VAR_0->ns_last_segment_lock);
 VAR_1 = VAR_0->ns_last_cno;
 FUNC_1(&VAR_0->ns_last_segment_lock);
 return VAR_1;
}
