
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sysv_zone_t ;
struct super_block {int dummy; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_2__ {scalar_t__ s_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline sysv_zone_t *FUNC_1(struct super_block *VAR_1, struct buffer_head *VAR_2)
{
 char *VAR_3 = VAR_2->b_data;

 if (FUNC_0(VAR_1)->s_type == VAR_0)
  return (sysv_zone_t*)(VAR_3+4);
 else
  return (sysv_zone_t*)(VAR_3+2);
}
