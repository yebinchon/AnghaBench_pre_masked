
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 struct archive* FUNC_3 () ;
 int FUNC_4 (struct archive*,char*,int,int ) ;
 int FUNC_5 (struct archive*,int) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct archive*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 char VAR_2[4096];
 struct archive* VAR_3 = FUNC_3();
 int VAR_4;

 FUNC_8(VAR_3, VAR_0, FUNC_6(VAR_3));
 FUNC_8(VAR_3, VAR_0, FUNC_5(VAR_3, 10));

 VAR_4 = FUNC_1(VAR_3);
 if((VAR_1 == VAR_4 && !FUNC_9()) || VAR_1 > VAR_4) {
  FUNC_10("bzip2 unsupported");
  return;
 }
 FUNC_8(VAR_3, VAR_0, FUNC_4(VAR_3, VAR_2, 4096, 0));

 FUNC_7(2, FUNC_0(VAR_3));
 FUNC_2(VAR_3);
}
