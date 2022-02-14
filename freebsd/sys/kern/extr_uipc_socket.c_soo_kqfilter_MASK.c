
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockbuf {int sb_flags; } ;
struct knlist {int dummy; } ;
struct TYPE_6__ {struct knlist si_note; } ;
struct TYPE_5__ {struct knlist si_note; } ;
struct socket {struct sockbuf so_snd; TYPE_3__ so_wrsel; struct sockbuf so_rcv; TYPE_2__ so_rdsel; } ;
struct knote {int kn_filter; int * kn_fop; TYPE_1__* kn_fp; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct socket* f_data; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (struct knlist*,struct knote*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_6(struct file *VAR_5, struct knote *VAR_6)
{
 struct socket *VAR_7 = VAR_6->kn_fp->f_data;
 struct sockbuf *VAR_8;
 struct knlist *VAR_9;

 switch (VAR_6->kn_filter) {
 case 129:
  VAR_6->kn_fop = &VAR_3;
  VAR_9 = &VAR_7->so_rdsel.si_note;
  VAR_8 = &VAR_7->so_rcv;
  break;
 case 128:
  VAR_6->kn_fop = &VAR_4;
  VAR_9 = &VAR_7->so_wrsel.si_note;
  VAR_8 = &VAR_7->so_snd;
  break;
 case 130:
  VAR_6->kn_fop = &VAR_2;
  VAR_9 = &VAR_7->so_wrsel.si_note;
  VAR_8 = &VAR_7->so_snd;
  break;
 default:
  return (VAR_0);
 }

 FUNC_2(VAR_7);
 if (FUNC_4(VAR_7)) {
  FUNC_5(VAR_9, VAR_6, 1);
 } else {
  FUNC_0(VAR_8);
  FUNC_5(VAR_9, VAR_6, 1);
  VAR_8->sb_flags |= VAR_1;
  FUNC_1(VAR_8);
 }
 FUNC_3(VAR_7);
 return (0);
}
