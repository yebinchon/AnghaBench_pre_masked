
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* bar1_idx_read ) (struct octeon_device*,int) ;int (* bar1_idx_write ) (struct octeon_device*,int,int) ;} ;
struct octeon_device {TYPE_1__ fn_list; } ;


 int FUNC_0 (struct octeon_device*,int) ;
 int FUNC_1 (struct octeon_device*,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct octeon_device *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = VAR_0->fn_list.bar1_idx_read(VAR_0, VAR_1);
 VAR_2 = (VAR_2 & 0x2) ? (VAR_2 & ~2) : (VAR_2 | 2);
 VAR_0->fn_list.bar1_idx_write(VAR_0, VAR_1, VAR_2);
}
