
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sb_info {int prio16; int prio; } ;
struct sb_chinfo {int fmt; int dir; struct sb_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sb_chinfo *VAR_4 = VAR_2;
 struct sb_info *VAR_5 = VAR_4->parent;

 VAR_4->fmt = VAR_3;
 VAR_5->prio = VAR_4->dir;
 VAR_5->prio16 = (VAR_4->fmt & VAR_0)? 1 : 0;

 return 0;
}
