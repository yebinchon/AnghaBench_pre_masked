
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct mbuf {int m_data; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline uint64_t
FUNC_1(device_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 vm_paddr_t VAR_3;

 VAR_3 = FUNC_0(((struct mbuf *)VAR_1)->m_data);
 return ((uint64_t)VAR_3);
}
