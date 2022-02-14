
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmci_queue_header {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct vmci_queue_header const*,struct vmci_queue_header const*,scalar_t__ const) ;

__attribute__((used)) static inline int64_t
FUNC_1(const struct vmci_queue_header *VAR_1,
    const struct vmci_queue_header *VAR_2,
    const uint64_t VAR_3)
{
 int64_t VAR_4;

 VAR_4 = FUNC_0(VAR_1,
     VAR_2, VAR_3);
 if (VAR_4 < VAR_0)
  return (VAR_4);
 else
  return (VAR_3 - VAR_4 - 1);
}
