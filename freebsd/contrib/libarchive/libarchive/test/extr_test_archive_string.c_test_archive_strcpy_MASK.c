
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int VAR_0 ;
 struct archive_string* FUNC_0 (struct archive_string*,char*) ;
 int FUNC_1 (struct archive_string*) ;
 int FUNC_2 (struct archive_string*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,char*,struct archive_string) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct archive_string VAR_1;

 FUNC_2(&VAR_1);
 FUNC_4(0, 0, ((void*)0), VAR_1);


 FUNC_3(&VAR_1 == FUNC_0(&VAR_1, "snafu"));
 FUNC_4(5, VAR_0, "snafu", VAR_1);


 FUNC_3(&VAR_1 == FUNC_0(&VAR_1, "foo"));
 FUNC_4(3, VAR_0, "foo", VAR_1);


 FUNC_3(&VAR_1 == FUNC_0(&VAR_1, ""));
 FUNC_4(0, VAR_0, "", VAR_1);

 FUNC_1(&VAR_1);
}
