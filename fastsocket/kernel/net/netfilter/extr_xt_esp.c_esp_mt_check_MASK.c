
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_esp* matchinfo; } ;
struct xt_esp {int invflags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_1)
{
 const struct xt_esp *VAR_2 = VAR_1->matchinfo;

 if (VAR_2->invflags & ~VAR_0) {
  FUNC_0("xt_esp: unknown flags %X\n", VAR_2->invflags);
  return 0;
 }

 return 1;
}
