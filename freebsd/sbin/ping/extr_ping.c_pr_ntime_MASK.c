
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n_time ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int,int,int) ;

__attribute__((used)) static char *
FUNC_2(n_time VAR_0)
{
 static char VAR_1[11];
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_0) / 1000;
 VAR_2 = VAR_4 / 60 / 60;
 VAR_3 = (VAR_4 % (60 * 60)) / 60;
 VAR_4 = (VAR_4 % (60 * 60)) % 60;

 (void)FUNC_1(VAR_1, sizeof(VAR_1), "%02d:%02d:%02d", VAR_2, VAR_3, VAR_4);

 return (VAR_1);
}
