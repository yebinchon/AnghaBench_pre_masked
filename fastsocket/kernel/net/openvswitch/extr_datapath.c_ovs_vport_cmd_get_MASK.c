
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int sk; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; struct ovs_header* userhdr; struct nlattr** attrs; } ;


 scalar_t__ FUNC_0 (struct vport*) ;
 int VAR_0 ;
 int FUNC_1 (struct vport*) ;
 int FUNC_2 (struct vport*,struct genl_info*) ;
 struct vport* FUNC_3 (int ,struct ovs_header*,struct nlattr**) ;
 struct vport* FUNC_4 (struct vport*,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct nlattr **VAR_3 = VAR_2->attrs;
 struct ovs_header *VAR_4 = VAR_2->userhdr;
 struct sk_buff *VAR_5;
 struct vport *VAR_6;
 int VAR_7;

 FUNC_5();
 VAR_6 = FUNC_3(FUNC_7(VAR_1->sk), VAR_4, VAR_3);
 VAR_7 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_6))
  goto exit_unlock;

 VAR_5 = FUNC_4(VAR_6, VAR_2->snd_pid,
      VAR_2->snd_seq, VAR_0);
 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto exit_unlock;

 FUNC_6();

 return FUNC_2(VAR_5, VAR_2);

exit_unlock:
 FUNC_6();
 return VAR_7;
}
