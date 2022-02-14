
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seltd {int st_selq; } ;
struct selfd {int sf_refs; int sf_mtx; TYPE_1__* sf_si; } ;
struct TYPE_2__ {int si_tdlist; } ;


 int FUNC_0 (int *,struct selfd*,int ,int ) ;
 int FUNC_1 (int *,struct selfd*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,struct selfd*) ;

__attribute__((used)) static void
FUNC_6(struct seltd *VAR_4, struct selfd *VAR_5)
{
 FUNC_0(&VAR_4->st_selq, VAR_5, VAR_0, VAR_2);
 if (VAR_5->sf_si != ((void*)0)) {
  FUNC_2(VAR_5->sf_mtx);
  if (VAR_5->sf_si != ((void*)0)) {
   FUNC_1(&VAR_5->sf_si->si_tdlist, VAR_5, VAR_3);
   FUNC_4(&VAR_5->sf_refs);
  }
  FUNC_3(VAR_5->sf_mtx);
 }
 if (FUNC_4(&VAR_5->sf_refs))
  FUNC_5(VAR_1, VAR_5);
}
