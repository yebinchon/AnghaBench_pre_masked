
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct inode* ns_dat; struct inode* ns_gc_dat; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline struct inode *FUNC_1(const struct the_nilfs *VAR_0)
{
 return FUNC_0() ? VAR_0->ns_gc_dat : VAR_0->ns_dat;
}
