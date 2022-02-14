
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_journal {int j_osb; int j_journal; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct ocfs2_journal *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_2();

 FUNC_0(!VAR_0);

 VAR_2 = FUNC_1(VAR_0->j_journal, VAR_1);
 if (VAR_2 < 0) {
  FUNC_3(VAR_2);
  goto bail;
 }

 VAR_2 = FUNC_5(VAR_0->j_osb, 0, 0);
 if (VAR_2 < 0)
  FUNC_3(VAR_2);

bail:
 FUNC_4(VAR_2);
 return VAR_2;
}
