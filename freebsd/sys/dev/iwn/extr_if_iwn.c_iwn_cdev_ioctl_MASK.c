
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct iwn_stats {int dummy; } ;
struct iwn_softc {int last_stat; } ;
struct iwn_ioctl_data {int dst_addr; } ;
struct cdev {struct iwn_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (struct iwn_softc*) ;
 int VAR_1 ;


 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, unsigned long VAR_3, caddr_t VAR_4, int VAR_5,
    struct thread *VAR_6)
{
 int VAR_7;
 struct iwn_softc *VAR_8 = VAR_2->si_drv1;
 struct iwn_ioctl_data *VAR_9;

 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (VAR_7 != 0)
  return (0);

 switch (VAR_3) {
 case 129:
  VAR_9 = (struct iwn_ioctl_data *) VAR_4;
  FUNC_0(VAR_8);

  VAR_7 = FUNC_2(&VAR_8->last_stat, VAR_9->dst_addr, sizeof(struct iwn_stats));
  FUNC_1(VAR_8);
  break;
 case 128:
  FUNC_0(VAR_8);
  FUNC_3(&VAR_8->last_stat, 0, sizeof(struct iwn_stats));
  FUNC_1(VAR_8);
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 return (VAR_7);
}
