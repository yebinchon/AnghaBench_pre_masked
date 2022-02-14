
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {scalar_t__ s_time_gran; } ;


 struct timespec VAR_0 ;
 scalar_t__ VAR_1 ;
 struct timespec FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline struct timespec FUNC_1(struct inode *VAR_2)
{
 return (VAR_2->i_sb->s_time_gran < VAR_1) ?
  FUNC_0(VAR_2->i_sb) : VAR_0;
}
