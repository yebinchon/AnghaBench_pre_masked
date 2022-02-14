
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union jrec {int dummy; } jrec ;
struct suj_rec {union jrec* sr_rec; } ;
struct suj_ino {int dummy; } ;
struct jrefrec {int jr_diroff; int jr_op; } ;
typedef int off_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct suj_ino*,struct suj_rec*) ;

__attribute__((used)) static void
FUNC_2(struct suj_ino *VAR_1, struct jrefrec *VAR_2, off_t VAR_3)
{
 struct jrefrec *VAR_4;
 struct suj_rec *VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_2));
 *VAR_4 = *VAR_2;
 VAR_4->jr_op = VAR_0;
 VAR_4->jr_diroff = VAR_3;
 VAR_5 = FUNC_0(sizeof(*VAR_5));
 VAR_5->sr_rec = (union jrec *)VAR_4;
 FUNC_1(VAR_1, VAR_5);
}
