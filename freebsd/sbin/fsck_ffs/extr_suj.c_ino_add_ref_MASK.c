
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suj_rec {scalar_t__ sr_rec; } ;
struct suj_ino {int si_recs; } ;
struct jrefrec {scalar_t__ jr_parent; scalar_t__ jr_diroff; scalar_t__ jr_op; int jr_nlink; int jr_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct suj_rec*,int ) ;
 struct suj_rec* FUNC_1 (int *,int ) ;
 struct suj_rec* FUNC_2 (struct suj_rec*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct suj_ino *VAR_4, struct suj_rec *VAR_5)
{
 struct jrefrec *VAR_6;
 struct suj_rec *VAR_7;
 struct jrefrec *VAR_8;

 VAR_6 = (struct jrefrec *)VAR_5->sr_rec;






 for (VAR_7 = FUNC_1(&VAR_4->si_recs, VAR_3); VAR_7;
     VAR_7 = FUNC_2(VAR_7, VAR_3, VAR_2)) {
  VAR_8 = (struct jrefrec *)VAR_7->sr_rec;
  if (VAR_8->jr_parent != VAR_6->jr_parent ||
      VAR_8->jr_diroff != VAR_6->jr_diroff)
   continue;
  if (VAR_8->jr_op == VAR_1 || VAR_6->jr_op == VAR_0) {
   VAR_8->jr_mode = VAR_6->jr_mode;
   return;
  }






  VAR_6->jr_nlink = VAR_8->jr_nlink;
  VAR_7->sr_rec = VAR_5->sr_rec;
  return;
 }
 FUNC_0(&VAR_4->si_recs, VAR_5, VAR_2);
}
