
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct pts_softc {int pts_flags; } ;
struct knote {int kn_data; int kn_flags; struct file* kn_fp; } ;
struct file {struct tty* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pts_softc* FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_2, long VAR_3)
{
 struct file *VAR_4 = VAR_2->kn_fp;
 struct tty *VAR_5 = VAR_4->f_data;
 struct pts_softc *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->pts_flags & VAR_1) {
  VAR_2->kn_flags |= VAR_0;
  return (1);
 } else {
  VAR_2->kn_data = FUNC_1(VAR_5);
  return (VAR_2->kn_data > 0);
 }
}
