
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int blkcnt; } ;
struct via_chinfo {int blksz; struct via_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,void*,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct via_chinfo *VAR_3 = VAR_1;
 struct via_info *VAR_4 = VAR_3->parent;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4->blkcnt);

 return (VAR_3->blksz);
}
