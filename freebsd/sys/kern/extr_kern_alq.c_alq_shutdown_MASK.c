
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {int aq_flags; int aq_cred; int aq_vp; int aq_mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct alq*) ;
 int FUNC_3 (struct alq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct alq*) ;
 int FUNC_5 (struct alq*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct alq*,int *,char*,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct alq *VAR_5)
{
 FUNC_2(VAR_5);


 VAR_5->aq_flags |= VAR_1;






 if (!(VAR_5->aq_flags & VAR_0) && FUNC_4(VAR_5)) {
  VAR_5->aq_flags |= VAR_0;
  FUNC_3(VAR_5);
  FUNC_0();
  FUNC_5(VAR_5);
  FUNC_1();
  FUNC_2(VAR_5);
 }


 while (VAR_5->aq_flags & VAR_0) {
  VAR_5->aq_flags |= VAR_2;
  FUNC_7(VAR_5, &VAR_5->aq_mtx, "aldclose", 0);
 }
 FUNC_3(VAR_5);

 FUNC_8(VAR_5->aq_vp, VAR_3, VAR_5->aq_cred,
     VAR_4);
 FUNC_6(VAR_5->aq_cred);
}
