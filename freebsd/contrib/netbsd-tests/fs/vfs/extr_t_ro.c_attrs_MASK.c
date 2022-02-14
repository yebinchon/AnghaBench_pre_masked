
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct stat {int dummy; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int const*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int,struct timeval*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct stat*) ;
 int FUNC_13 (int ,struct timeval*) ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_3, const char *VAR_4)
{
 struct timeval VAR_5[2];
 struct stat VAR_6;
 int VAR_7;

 FUNC_1();

 FUNC_4(FUNC_12(VAR_0, &VAR_6));

 FUNC_0(VAR_1, FUNC_5(VAR_0, 0775) == -1);
 if (!FUNC_3(VAR_3))
  FUNC_0(VAR_1, FUNC_6(VAR_0, 1, 1) == -1);
 FUNC_0(VAR_1, FUNC_13(VAR_0, VAR_5) == -1);

 FUNC_4(VAR_7 = FUNC_11(VAR_0, VAR_2));
 FUNC_0(VAR_1, FUNC_8(VAR_7, 0775) == -1);
 if (!FUNC_3(VAR_3))
  FUNC_0(VAR_1, FUNC_9(VAR_7, 1, 1) == -1);
 FUNC_0(VAR_1, FUNC_10(VAR_7, VAR_5) == -1);
 FUNC_4(FUNC_7(VAR_7));

 FUNC_2();
}
