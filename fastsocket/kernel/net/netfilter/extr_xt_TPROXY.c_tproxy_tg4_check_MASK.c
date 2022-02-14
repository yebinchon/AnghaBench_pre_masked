
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ipt_ip* entryinfo; } ;
struct ipt_ip {scalar_t__ proto; int invflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_3)
{
 const struct ipt_ip *VAR_4 = VAR_3->entryinfo;

 if ((VAR_4->proto == VAR_0 || VAR_4->proto == VAR_1)
     && !(VAR_4->invflags & VAR_2))
  return 1;

 FUNC_0("xt_TPROXY: Can be used only in combination with "
  "either -p tcp or -p udp\n");
 return 0;
}
