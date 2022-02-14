
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcimp_mgr {int imap_lock; int imappers; scalar_t__ init_imap_added; int init_imap; } ;
struct imapper {scalar_t__ addr; } ;


 int FUNC_0 (int *,struct imapper*,int ,struct srcimp_mgr*) ;
 int FUNC_1 (int *,int ,int ,struct srcimp_mgr*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct srcimp_mgr *VAR_1, struct imapper *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1->imap_lock, VAR_3);
 if ((0 == VAR_2->addr) && (VAR_1->init_imap_added)) {
  FUNC_1(&VAR_1->imappers,
        VAR_1->init_imap, VAR_0, VAR_1);
  VAR_1->init_imap_added = 0;
 }
 VAR_4 = FUNC_0(&VAR_1->imappers, VAR_2, VAR_0, VAR_1);
 FUNC_3(&VAR_1->imap_lock, VAR_3);

 return VAR_4;
}
