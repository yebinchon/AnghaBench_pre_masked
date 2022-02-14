
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(handle_t *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_4();

 FUNC_3(0, "Trying to extend transaction by %d blocks\n", VAR_1);




 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_5(VAR_2);
  goto bail;
 }


 if (VAR_2 > 0) {
  FUNC_3(0,
       "jbd2_journal_extend failed, trying "
       "jbd2_journal_restart\n");
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2 < 0) {
   FUNC_5(VAR_2);
   goto bail;
  }
 }

 VAR_2 = 0;
bail:

 FUNC_6(VAR_2);
 return VAR_2;
}
