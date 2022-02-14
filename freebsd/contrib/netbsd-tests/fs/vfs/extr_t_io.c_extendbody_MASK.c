
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct stat*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int,char*,int,int) ;
 int FUNC_10 (int,int ,int) ;

__attribute__((used)) static void
FUNC_11(const atf_tc_t *VAR_5, off_t VAR_6)
{
 char VAR_7[VAR_4+1];
 struct stat VAR_8;
 int VAR_9;

 FUNC_2();
 FUNC_4(VAR_9 = FUNC_8("testfile",
     VAR_1 | VAR_2 | (VAR_6 ? VAR_0 : 0)));
 FUNC_4(FUNC_7(VAR_9, VAR_6));
 FUNC_4(FUNC_6(VAR_9, &VAR_8));
 FUNC_0(VAR_8.st_size, VAR_6);

 FUNC_0(FUNC_10(VAR_9, VAR_3, VAR_4), VAR_4);
 FUNC_0(FUNC_9(VAR_9, VAR_7, VAR_4, VAR_6), VAR_4);
 FUNC_1(VAR_7, VAR_3);

 FUNC_4(FUNC_6(VAR_9, &VAR_8));
 FUNC_0(VAR_8.st_size, (off_t)VAR_4 + VAR_6);
 FUNC_4(FUNC_5(VAR_9));
 FUNC_3();
}
