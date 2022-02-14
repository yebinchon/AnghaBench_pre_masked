
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsstate {int ls_lock; } ;
struct nfslockfile {int lf_locallock; int lf_lock; } ;
struct TYPE_3__ {int * le_prev; } ;
struct nfslock {scalar_t__ lo_first; TYPE_1__ lo_lckfile; struct nfslockfile* lo_lfp; struct nfsstate* lo_stp; } ;
struct TYPE_4__ {int srvlocks; } ;


 struct nfslock* FUNC_0 (int *) ;
 struct nfslock* FUNC_1 (int *) ;
 int FUNC_2 (struct nfslock*,struct nfslock*,int ) ;
 int FUNC_3 (int *,struct nfslock*,int ) ;
 struct nfslock* FUNC_4 (struct nfslock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct nfslock *VAR_4, struct nfslock *VAR_5,
    struct nfsstate *VAR_6, struct nfslockfile *VAR_7)
{
 struct nfslock *VAR_8, *VAR_9;

 VAR_4->lo_stp = VAR_6;
 VAR_4->lo_lfp = VAR_7;

 if (VAR_6 != ((void*)0)) {

  VAR_8 = FUNC_1(&VAR_7->lf_lock);
  if (VAR_8 == FUNC_0(&VAR_7->lf_lock) ||
      VAR_4->lo_first <= VAR_8->lo_first) {
   FUNC_3(&VAR_7->lf_lock, VAR_4, VAR_0);
  } else {
   VAR_9 = FUNC_4(VAR_8, VAR_0);
   while (VAR_9 != FUNC_0(&VAR_7->lf_lock) &&
          VAR_9->lo_first < VAR_4->lo_first) {
    VAR_8 = VAR_9;
    VAR_9 = FUNC_4(VAR_8, VAR_0);
   }
   FUNC_2(VAR_8, VAR_4, VAR_0);
  }
 } else {
  VAR_4->lo_lckfile.le_prev = ((void*)0);
 }





 if (VAR_6 == ((void*)0) && (struct nfslockfile *)VAR_5 == VAR_7)
  FUNC_3(&VAR_7->lf_locallock, VAR_4, VAR_1);
 else if ((struct nfsstate *)VAR_5 == VAR_6)
  FUNC_3(&VAR_6->ls_lock, VAR_4, VAR_1);
 else
  FUNC_2(VAR_5, VAR_4, VAR_1);
 if (VAR_6 != ((void*)0)) {
  VAR_3++;
  VAR_2++;
 }
}
