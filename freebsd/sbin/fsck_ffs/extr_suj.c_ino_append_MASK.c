
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jrefrec {scalar_t__ jr_op; scalar_t__ jr_ino; scalar_t__ jr_diroff; scalar_t__ jr_parent; scalar_t__ jr_nlink; } ;
struct jmvrec {scalar_t__ jm_op; scalar_t__ jm_oldoff; scalar_t__ jm_newoff; scalar_t__ jm_parent; scalar_t__ jm_ino; } ;
union jrec {struct jrefrec rec_jrefrec; struct jmvrec rec_jmvrec; } ;
typedef int uintmax_t ;
struct suj_rec {union jrec* sr_rec; } ;
struct suj_ino {int si_hasrecs; int si_newrecs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct suj_rec*,int ) ;
 scalar_t__ VAR_3 ;
 struct suj_rec* FUNC_1 (int) ;
 struct suj_ino* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,scalar_t__,int ,int ,int ,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(union jrec *VAR_5)
{
 struct jrefrec *VAR_6;
 struct jmvrec *VAR_7;
 struct suj_ino *VAR_8;
 struct suj_rec *VAR_9;

 VAR_7 = &VAR_5->rec_jmvrec;
 VAR_6 = &VAR_5->rec_jrefrec;
 if (VAR_3 && VAR_7->jm_op == VAR_1)
  FUNC_3("ino move: ino %ju, parent %ju, "
      "diroff %jd, oldoff %jd\n",
      (uintmax_t)VAR_7->jm_ino, (uintmax_t)VAR_7->jm_parent,
      (uintmax_t)VAR_7->jm_newoff, (uintmax_t)VAR_7->jm_oldoff);
 else if (VAR_3 &&
     (VAR_6->jr_op == VAR_0 || VAR_6->jr_op == VAR_2))
  FUNC_3("ino ref: op %d, ino %ju, nlink %ju, "
      "parent %ju, diroff %jd\n",
      VAR_6->jr_op, (uintmax_t)VAR_6->jr_ino,
      (uintmax_t)VAR_6->jr_nlink,
      (uintmax_t)VAR_6->jr_parent, (uintmax_t)VAR_6->jr_diroff);
 VAR_8 = FUNC_2(((struct jrefrec *)VAR_5)->jr_ino, 1);
 VAR_8->si_hasrecs = 1;
 VAR_9 = FUNC_1(sizeof(*VAR_9));
 VAR_9->sr_rec = VAR_5;
 FUNC_0(&VAR_8->si_newrecs, VAR_9, VAR_4);
}
