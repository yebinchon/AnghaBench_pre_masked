
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*) ;
 char* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct dirent *VAR_4, struct dirent *VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7;

 FUNC_2(VAR_6, VAR_1, "%s/%s/%s/id", VAR_3,
   VAR_4->d_name, VAR_5->d_name);
 VAR_7 = FUNC_1(VAR_6, VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;
 FUNC_0(VAR_7);

 return 0;
}
