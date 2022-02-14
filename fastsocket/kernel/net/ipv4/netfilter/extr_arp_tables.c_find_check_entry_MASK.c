
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_target {int me; } ;
struct TYPE_5__ {struct xt_target* target; } ;
struct TYPE_4__ {int name; int revision; } ;
struct TYPE_6__ {TYPE_2__ kernel; TYPE_1__ user; } ;
struct arpt_entry_target {TYPE_3__ u; } ;
struct arpt_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xt_target*) ;
 int VAR_1 ;
 int FUNC_1 (struct xt_target*) ;
 struct arpt_entry_target* FUNC_2 (struct arpt_entry*) ;
 int FUNC_3 (struct arpt_entry*,char const*) ;
 int FUNC_4 (struct arpt_entry*,char const*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 struct xt_target* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_9(struct arpt_entry *VAR_2, const char *VAR_3, unsigned int VAR_4,
   unsigned int *VAR_5)
{
 struct arpt_entry_target *VAR_6;
 struct xt_target *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_7(FUNC_8(VAR_1,
       VAR_6->u.user.name,
       VAR_6->u.user.revision),
      "arpt_%s", VAR_6->u.user.name);
 if (FUNC_0(VAR_7) || !VAR_7) {
  FUNC_5("find_check_entry: `%s' not found\n", VAR_6->u.user.name);
  VAR_8 = VAR_7 ? FUNC_1(VAR_7) : -VAR_0;
  goto out;
 }
 VAR_6->u.kernel.target = VAR_7;

 VAR_8 = FUNC_4(VAR_2, VAR_3);
 if (VAR_8)
  goto err;

 (*VAR_5)++;
 return 0;
err:
 FUNC_6(VAR_6->u.kernel.target->me);
out:
 return VAR_8;
}
