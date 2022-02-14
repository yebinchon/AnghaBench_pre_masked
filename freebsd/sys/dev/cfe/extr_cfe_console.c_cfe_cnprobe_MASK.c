
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct consdev*,char) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct consdev *VAR_5)
{

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0) {
  VAR_5->cn_pri = VAR_1;
  return;
 }


 if (VAR_3) {
  char *VAR_6 = "Using CFE firmware console.\n";
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_6); VAR_7++)
   FUNC_0(VAR_5, VAR_6[VAR_7]);
 }

 VAR_5->cn_pri = VAR_2;
}
