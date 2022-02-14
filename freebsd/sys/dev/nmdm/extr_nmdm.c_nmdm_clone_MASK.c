
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct tty {struct cdev* t_dev; } ;
struct TYPE_3__ {struct tty* np_tty; struct TYPE_3__* np_other; int np_callout; int np_task; struct nmdmsoftc* np_pair; } ;
struct nmdmsoftc {TYPE_1__ ns_part2; TYPE_1__ ns_part1; int ns_mtx; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct nmdmsoftc*,int ) ;
 struct nmdmsoftc* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 void* FUNC_10 (int *,TYPE_1__*,int *) ;
 int FUNC_11 (struct tty*,int *,int ,char*,char*) ;
 int FUNC_12 (struct tty*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_8, struct ucred *VAR_9, char *VAR_10, int VAR_11,
    struct cdev **VAR_12)
{
 struct nmdmsoftc *VAR_13;
 struct tty *VAR_14;
 char *VAR_15;
 int VAR_16;
 char VAR_17;

 if (*VAR_12 != ((void*)0))
  return;
 if (FUNC_9(VAR_10, "nmdm", 4) != 0)
  return;
 if (FUNC_8(VAR_10) <= FUNC_8("nmdmX"))
  return;


 VAR_15 = VAR_10 + FUNC_8(VAR_10) - 1;
 VAR_17 = *VAR_15;
 if (VAR_17 != 'A' && VAR_17 != 'B')
  return;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1, VAR_2 | VAR_3);
 FUNC_6(&VAR_13->ns_mtx, "nmdm", ((void*)0), VAR_0);


 VAR_13->ns_part1.np_pair = VAR_13;
 VAR_13->ns_part1.np_other = &VAR_13->ns_part2;
 FUNC_0(&VAR_13->ns_part1.np_task, 0, VAR_7, &VAR_13->ns_part1);
 FUNC_2(&VAR_13->ns_part1.np_callout, &VAR_13->ns_mtx, 0);

 VAR_13->ns_part2.np_pair = VAR_13;
 VAR_13->ns_part2.np_other = &VAR_13->ns_part1;
 FUNC_0(&VAR_13->ns_part2.np_task, 0, VAR_7, &VAR_13->ns_part2);
 FUNC_2(&VAR_13->ns_part2.np_callout, &VAR_13->ns_mtx, 0);


 VAR_14 = VAR_13->ns_part1.np_tty = FUNC_10(&VAR_5, &VAR_13->ns_part1,
     &VAR_13->ns_mtx);
 *VAR_15 = 'A';
 VAR_16 = FUNC_11(VAR_14, ((void*)0), VAR_17 == 'A' ? VAR_4 : 0,
     "%s", VAR_10);
 if (VAR_16) {
  *VAR_15 = VAR_17;
  FUNC_5(&VAR_13->ns_mtx);
  FUNC_3(VAR_13, VAR_1);
  return;
 }

 VAR_14 = VAR_13->ns_part2.np_tty = FUNC_10(&VAR_5, &VAR_13->ns_part2,
     &VAR_13->ns_mtx);
 *VAR_15 = 'B';
 VAR_16 = FUNC_11(VAR_14, ((void*)0), VAR_17 == 'B' ? VAR_4 : 0,
     "%s", VAR_10);
 if (VAR_16) {
  *VAR_15 = VAR_17;
  FUNC_7(&VAR_13->ns_mtx);

  VAR_13->ns_part1.np_other = ((void*)0);
  FUNC_1(&VAR_6, 1);
  FUNC_12(VAR_13->ns_part1.np_tty);
  return;
 }

 if (VAR_17 == 'A')
  *VAR_12 = VAR_13->ns_part1.np_tty->t_dev;
 else
  *VAR_12 = VAR_13->ns_part2.np_tty->t_dev;

 *VAR_15 = VAR_17;
 FUNC_1(&VAR_6, 1);
}
