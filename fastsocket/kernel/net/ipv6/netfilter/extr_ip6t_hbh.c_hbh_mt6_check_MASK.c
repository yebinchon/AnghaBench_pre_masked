
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_opts* matchinfo; } ;
struct ip6t_opts {int invflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_2)
{
 const struct ip6t_opts *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->invflags & ~VAR_0) {
  FUNC_0("ip6t_opts: unknown flags %X\n", VAR_3->invflags);
  return 0;
 }

 if (VAR_3->flags & VAR_1) {
  FUNC_0("ip6t_opts: Not strict - not implemented");
  return 0;
 }

 return 1;
}
