
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daio_mgr {int mgr; int imap_lock; int imappers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct daio_mgr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct daio_mgr *VAR_0)
{
 unsigned long VAR_1;


 FUNC_3(&VAR_0->imap_lock, VAR_1);
 FUNC_0(&VAR_0->imappers);
 FUNC_4(&VAR_0->imap_lock, VAR_1);

 FUNC_2(&VAR_0->mgr);
 FUNC_1(VAR_0);

 return 0;
}
