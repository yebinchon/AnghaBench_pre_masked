
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {scalar_t__ upcall_pid; TYPE_1__* ops; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; int userhdr; struct nlattr** attrs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vport*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct vport* FUNC_4 (int ,int ,struct nlattr**) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct genl_info*,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct vport*,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_11 (struct vport*,struct nlattr*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct nlattr **VAR_11 = VAR_10->attrs;
 struct sk_buff *VAR_12;
 struct vport *VAR_13;
 int VAR_14;

 FUNC_7();
 VAR_13 = FUNC_4(FUNC_12(VAR_9->sk), VAR_10->userhdr, VAR_11);
 VAR_14 = FUNC_2(VAR_13);
 if (FUNC_1(VAR_13))
  goto exit_unlock;

 if (VAR_11[VAR_5] &&
     FUNC_5(VAR_11[VAR_5]) != VAR_13->ops->type) {
  VAR_14 = -VAR_0;
  goto exit_unlock;
 }

 VAR_12 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto exit_unlock;
 }

 if (VAR_11[VAR_4]) {
  VAR_14 = FUNC_11(VAR_13, VAR_11[VAR_4]);
  if (VAR_14)
   goto exit_free;
 }

 if (VAR_11[VAR_6])
  VAR_13->upcall_pid = FUNC_5(VAR_11[VAR_6]);

 VAR_14 = FUNC_10(VAR_13, VAR_12, VAR_10->snd_pid,
          VAR_10->snd_seq, 0, VAR_7);
 FUNC_0(VAR_14 < 0);

 FUNC_9();
 FUNC_8(VAR_12, VAR_10, &VAR_8);
 return 0;

exit_free:
 FUNC_3(VAR_12);
exit_unlock:
 FUNC_9();
 return VAR_14;
}
