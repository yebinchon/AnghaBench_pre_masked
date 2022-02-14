
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vie {int reg; int mod; } ;
typedef int mem_region_write_t ;
typedef int (* mem_region_read_t ) (void*,int,int ,int *,int,void*) ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, int VAR_2, uint64_t VAR_3, struct vie *VAR_4,
    mem_region_read_t VAR_5, mem_region_write_t VAR_6, void *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9;

 switch (VAR_4->reg & 7) {
 case 0x7:
  if (VAR_4->mod == 0x3) {




   VAR_8 = 0;
  } else {




   VAR_8 = VAR_5(VAR_1, VAR_2, VAR_3, &VAR_9, 1, VAR_7);
  }
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
