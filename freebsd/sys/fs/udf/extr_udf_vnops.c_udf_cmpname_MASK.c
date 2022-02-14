
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_mnt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int,struct udf_mnt*) ;
 int VAR_1 ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, char *VAR_3, int VAR_4, int VAR_5, struct udf_mnt *VAR_6)
{
 char *VAR_7;
 int VAR_8 = 0;


 VAR_7 = FUNC_2(VAR_1, VAR_0);

 VAR_4 = FUNC_1(VAR_2, VAR_7, VAR_4, VAR_6);


 if ((VAR_4 == 0) || (VAR_4 != VAR_5))
  VAR_8 = -1;
 else
  VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_5);

 FUNC_3(VAR_1, VAR_7);
 return (VAR_8);
}
