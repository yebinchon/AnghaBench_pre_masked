
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_target {int me; } ;
struct xt_mtchk_param {char const* table; int family; int hook_mask; int * entryinfo; } ;
struct TYPE_5__ {struct xt_target* target; } ;
struct TYPE_4__ {int name; int revision; } ;
struct TYPE_6__ {TYPE_2__ kernel; TYPE_1__ user; } ;
struct ipt_entry_target {TYPE_3__ u; } ;
struct ipt_entry {int comefrom; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipt_entry*,int ,...) ;
 scalar_t__ FUNC_1 (struct xt_target*) ;
 int VAR_2 ;
 int FUNC_2 (struct xt_target*) ;
 int FUNC_3 (struct ipt_entry*,char const*) ;
 int FUNC_4 (struct ipt_entry*,char const*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int VAR_4 ;
 struct ipt_entry_target* FUNC_6 (struct ipt_entry*) ;
 int FUNC_7 (int ) ;
 struct xt_target* FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct ipt_entry *VAR_5, const char *VAR_6, unsigned int VAR_7,
   unsigned int *VAR_8)
{
 struct ipt_entry_target *VAR_9;
 struct xt_target *VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 struct xt_mtchk_param VAR_13;

 VAR_11 = FUNC_3(VAR_5, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_12 = 0;
 VAR_13.table = VAR_6;
 VAR_13.entryinfo = &VAR_5->ip;
 VAR_13.hook_mask = VAR_5->comefrom;
 VAR_13.family = VAR_2;
 VAR_11 = FUNC_0(VAR_5, VAR_4, &VAR_13, &VAR_12);
 if (VAR_11 != 0)
  goto cleanup_matches;

 VAR_9 = FUNC_6(VAR_5);
 VAR_10 = FUNC_8(FUNC_9(VAR_0,
       VAR_9->u.user.name,
       VAR_9->u.user.revision),
      "ipt_%s", VAR_9->u.user.name);
 if (FUNC_1(VAR_10) || !VAR_10) {
  FUNC_5("find_check_entry: `%s' not found\n", VAR_9->u.user.name);
  VAR_11 = VAR_10 ? FUNC_2(VAR_10) : -VAR_1;
  goto cleanup_matches;
 }
 VAR_9->u.kernel.target = VAR_10;

 VAR_11 = FUNC_4(VAR_5, VAR_6);
 if (VAR_11)
  goto err;

 (*VAR_8)++;
 return 0;
 err:
 FUNC_7(VAR_9->u.kernel.target->me);
 cleanup_matches:
 FUNC_0(VAR_5, VAR_3, &VAR_12);
 return VAR_11;
}
