
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct octeon_device {int rev_id; } ;



__attribute__((used)) static inline uint16_t
FUNC_0(struct octeon_device *VAR_0)
{

 return (VAR_0->rev_id & 0x3);
}
