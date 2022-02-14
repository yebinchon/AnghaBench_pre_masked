
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {scalar_t__ port_no; int sk; } ;
struct sk_buff {scalar_t__ port_no; int sk; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; int userhdr; struct nlattr** attrs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vport*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vport*) ;
 struct vport* FUNC_2 (int ,int ,struct nlattr**) ;
 int FUNC_3 (struct vport*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (struct vport*,struct genl_info*,int *) ;
 int FUNC_6 () ;
 struct vport* FUNC_7 (struct vport*,int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct nlattr **VAR_6 = VAR_5->attrs;
 struct sk_buff *VAR_7;
 struct vport *VAR_8;
 int VAR_9;

 FUNC_4();
 VAR_8 = FUNC_2(FUNC_8(VAR_4->sk), VAR_5->userhdr, VAR_6);
 VAR_9 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_8))
  goto exit_unlock;

 if (VAR_8->port_no == VAR_1) {
  VAR_9 = -VAR_0;
  goto exit_unlock;
 }

 VAR_7 = FUNC_7(VAR_8, VAR_5->snd_pid,
      VAR_5->snd_seq, VAR_2);
 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto exit_unlock;

 VAR_9 = 0;
 FUNC_3(VAR_8);

 FUNC_5(VAR_7, VAR_5, &VAR_3);

exit_unlock:
 FUNC_6();
 return VAR_9;
}
