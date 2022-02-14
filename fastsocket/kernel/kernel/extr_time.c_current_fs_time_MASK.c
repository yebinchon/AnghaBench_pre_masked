
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct super_block {int s_time_gran; } ;


 struct timespec FUNC_0 () ;
 struct timespec FUNC_1 (struct timespec,int ) ;

struct timespec FUNC_2(struct super_block *VAR_0)
{
 struct timespec VAR_1 = FUNC_0();
 return FUNC_1(VAR_1, VAR_0->s_time_gran);
}
