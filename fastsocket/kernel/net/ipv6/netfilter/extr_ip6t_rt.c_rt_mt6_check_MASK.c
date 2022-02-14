
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_rt* matchinfo; } ;
struct ip6t_rt {int invflags; int flags; scalar_t__ rt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_5)
{
 const struct ip6t_rt *VAR_6 = VAR_5->matchinfo;

 if (VAR_6->invflags & ~VAR_1) {
  FUNC_0("ip6t_rt: unknown flags %X\n", VAR_6->invflags);
  return 0;
 }
 if ((VAR_6->flags & (VAR_3 | VAR_0)) &&
     (!(VAR_6->flags & VAR_4) ||
      (VAR_6->rt_type != 0) ||
      (VAR_6->invflags & VAR_2))) {
  FUNC_0("`--rt-type 0' required before `--rt-0-*'");
  return 0;
 }

 return 1;
}
