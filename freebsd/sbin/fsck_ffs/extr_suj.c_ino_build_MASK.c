
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct suj_rec {TYPE_2__* sr_rec; } ;
struct suj_ino {scalar_t__ si_hasrecs; int si_recs; int si_movs; int si_newrecs; } ;
struct TYPE_3__ {int jr_op; } ;
struct TYPE_4__ {TYPE_1__ rec_jrefrec; } ;





 scalar_t__ FUNC_0 (int *) ;
 struct suj_rec* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct suj_rec*,int ) ;
 int FUNC_3 (int *,struct suj_rec*,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct suj_ino*,struct suj_rec*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct suj_ino *VAR_1)
{
 struct suj_rec *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->si_newrecs)) != ((void*)0)) {
  FUNC_3(&VAR_1->si_newrecs, VAR_2, VAR_0);
  switch (VAR_2->sr_rec->rec_jrefrec.jr_op) {
  case 130:
  case 128:
   FUNC_5(VAR_1, VAR_2);
   break;
  case 129:



   FUNC_2(&VAR_1->si_movs, VAR_2, VAR_0);
   break;
  default:
   FUNC_4("ino_build: Unknown op %d\n",
       VAR_2->sr_rec->rec_jrefrec.jr_op);
  }
 }
 if (FUNC_0(&VAR_1->si_recs))
  VAR_1->si_hasrecs = 0;
}
