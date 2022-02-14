
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipt_standard_target {unsigned int verdict; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ user; } ;
struct ipt_entry_target {TYPE_2__ u; } ;
struct ipt_entry {int ip; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct ipt_entry_target* FUNC_0 (struct ipt_entry*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ipt_entry *VAR_3)
{
 const struct ipt_entry_target *VAR_4;
 unsigned int VAR_5;

 if (!FUNC_2(&VAR_3->ip))
  return 0;
 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_4->u.user.name, VAR_2) != 0)
  return 0;
 VAR_5 = ((struct ipt_standard_target *)VAR_4)->verdict;
 VAR_5 = -VAR_5 - 1;
 return VAR_5 == VAR_1 || VAR_5 == VAR_0;
}
