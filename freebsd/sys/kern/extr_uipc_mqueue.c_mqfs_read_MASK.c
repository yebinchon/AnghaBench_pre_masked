
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_read_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct uio {int dummy; } ;
struct mqueue {int mq_msgsize; int mq_curmsgs; int mq_maxmsg; int mq_totalbytes; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mqueue* FUNC_0 (struct vnode*) ;
 int FUNC_1 (char*,int,char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct vop_read_args *VAR_2)
{
 char VAR_3[80];
 struct vnode *VAR_4 = VAR_2->a_vp;
 struct uio *VAR_5 = VAR_2->a_uio;
 struct mqueue *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4->v_type != VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_4);
 FUNC_1(VAR_3, sizeof(VAR_3),
  "QSIZE:%-10ld MAXMSG:%-10ld CURMSG:%-10ld MSGSIZE:%-10ld\n",
  VAR_6->mq_totalbytes,
  VAR_6->mq_maxmsg,
  VAR_6->mq_curmsgs,
  VAR_6->mq_msgsize);
 VAR_3[sizeof(VAR_3)-1] = '\0';
 VAR_7 = FUNC_2(VAR_3);
 VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_5);
 return (VAR_8);
}
