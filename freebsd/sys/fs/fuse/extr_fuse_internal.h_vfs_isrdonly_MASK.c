
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_flag; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct mount *VAR_1)
{
 return ((VAR_1->mnt_flag & VAR_0) != 0);
}
