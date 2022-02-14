
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int * VAR_3 ;
 int FUNC_2 (int *,char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(char *VAR_4)
{
 char *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_4 + 1, VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (VAR_3 != ((void*)0))
  VAR_6 = FUNC_2(VAR_3, VAR_4,
     VAR_2, VAR_5);
 FUNC_0(VAR_5);
 return VAR_6;
}
