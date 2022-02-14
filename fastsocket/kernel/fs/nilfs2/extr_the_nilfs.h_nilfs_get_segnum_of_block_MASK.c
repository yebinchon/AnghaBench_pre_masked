
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocks_per_segment; } ;
typedef int sector_t ;
typedef int __u64 ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline __u64
FUNC_1(struct the_nilfs *VAR_0, sector_t VAR_1)
{
 sector_t VAR_2 = VAR_1;

 FUNC_0(VAR_2, VAR_0->ns_blocks_per_segment);
 return VAR_2;
}
