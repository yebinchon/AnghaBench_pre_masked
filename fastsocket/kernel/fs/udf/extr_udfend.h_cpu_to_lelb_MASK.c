
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct lb_addr FUNC_2(struct kernel_lb_addr VAR_0)
{
 struct lb_addr VAR_1;

 VAR_1.logicalBlockNum = FUNC_1(VAR_0.logicalBlockNum);
 VAR_1.partitionReferenceNum = FUNC_0(VAR_0.partitionReferenceNum);

 return VAR_1;
}
