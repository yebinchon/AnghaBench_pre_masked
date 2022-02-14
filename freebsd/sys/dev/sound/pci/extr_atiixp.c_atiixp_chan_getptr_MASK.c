
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {scalar_t__ polling; } ;
struct atiixp_chinfo {int ptr; struct atiixp_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (struct atiixp_chinfo*) ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*) ;

__attribute__((used)) static uint32_t
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct atiixp_chinfo *VAR_2 = VAR_1;
 struct atiixp_info *VAR_3 = VAR_2->parent;
 uint32_t VAR_4;

 FUNC_1(VAR_3);
 if (VAR_3->polling != 0)
  VAR_4 = VAR_2->ptr;
 else
  VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_3);

 return (VAR_4);
}
