
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 struct archive* FUNC_3 () ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_2)
{
 struct archive* VAR_3 = FUNC_3();
 struct archive_write* VAR_4 = (struct archive_write *)VAR_3;

 if (!VAR_2) {
  FUNC_1(VAR_3);
  FUNC_4(VAR_3);
        }

 FUNC_6(VAR_1, FUNC_5(VAR_3, "pass1"));

 FUNC_6(VAR_0, FUNC_5(VAR_3, ""));

 FUNC_6(VAR_0, FUNC_5(VAR_3, ((void*)0)));

 FUNC_7("pass1", FUNC_0(VAR_4));

 FUNC_6(VAR_1, FUNC_5(VAR_3, "pass2"));
 FUNC_7("pass2", FUNC_0(VAR_4));

 FUNC_2(VAR_3);
}
