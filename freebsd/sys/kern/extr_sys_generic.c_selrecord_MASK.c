
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct seltd* td_sel; } ;
struct seltd {int st_flags; int st_selq; struct selfd* st_free2; struct selfd* st_free1; } ;
struct selinfo {struct mtx* si_mtx; int si_tdlist; } ;
struct selfd {int sf_refs; struct mtx* sf_mtx; struct selinfo* sf_si; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct selfd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct selfd*,int ) ;
 int FUNC_3 (struct mtx*) ;
 struct mtx* FUNC_4 (int ,struct selinfo*) ;
 int FUNC_5 (struct mtx*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_8(struct thread *VAR_4, struct selinfo *VAR_5)
{
 struct selfd *VAR_6;
 struct seltd *VAR_7;
 struct mtx *VAR_8;

 VAR_7 = VAR_4->td_sel;



 if (VAR_7->st_flags & VAR_0)
  return;



 VAR_6 = ((void*)0);
 if ((VAR_6 = VAR_7->st_free1) != ((void*)0))
  VAR_7->st_free1 = ((void*)0);
 else if ((VAR_6 = VAR_7->st_free2) != ((void*)0))
  VAR_7->st_free2 = ((void*)0);
 else
  FUNC_6("selrecord: No free selfd on selq");
 VAR_8 = VAR_5->si_mtx;
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_4(VAR_1, VAR_5);



 VAR_6->sf_si = VAR_5;
 VAR_6->sf_mtx = VAR_8;
 FUNC_7(&VAR_6->sf_refs, 2);
 FUNC_0(&VAR_7->st_selq, VAR_6, VAR_2);



 FUNC_3(VAR_8);
 if (VAR_5->si_mtx == ((void*)0)) {
  VAR_5->si_mtx = VAR_8;
  FUNC_1(&VAR_5->si_tdlist);
 }



 FUNC_2(&VAR_5->si_tdlist, VAR_6, VAR_3);
 FUNC_5(VAR_5->si_mtx);
}
