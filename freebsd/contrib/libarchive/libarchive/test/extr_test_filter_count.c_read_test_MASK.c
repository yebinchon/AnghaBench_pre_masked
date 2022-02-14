
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 struct archive* FUNC_2 () ;
 int FUNC_3 (struct archive*,char const*,int) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct archive*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_2)
{
 struct archive* VAR_3 = FUNC_2();
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if((VAR_1 == VAR_4 && !FUNC_8()) || VAR_1 > VAR_4) {
  FUNC_10("bzip2 unsupported");
  return;
 }

 FUNC_7(VAR_3, VAR_0, FUNC_5(VAR_3));

 FUNC_9(VAR_2);
 FUNC_7(VAR_3, VAR_0, FUNC_3(VAR_3, VAR_2, 2));

 FUNC_6(2, FUNC_0(VAR_3));

 FUNC_1(VAR_3);
}
