
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct newtExitStruct {int dummy; } ;
typedef int * newtComponent ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,char const*) ;
 int * FUNC_2 (int ,int ,char*,int,char const**,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct newtExitStruct*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, char *VAR_5, size_t VAR_6, int VAR_7)
{
 struct newtExitStruct VAR_8;
 newtComponent VAR_9, VAR_10;
 const char *VAR_11;
 int VAR_12 = -1;

 FUNC_1(VAR_7, 1, VAR_4);
 VAR_9 = FUNC_3(((void*)0), ((void*)0), 0);
 if (VAR_9 == ((void*)0))
  return -1;

 VAR_10 = FUNC_2(0, 0, "0x", VAR_7, &VAR_11, VAR_0);
 if (VAR_10 == ((void*)0))
  goto out_free_form;

 FUNC_4(VAR_9, VAR_10);
 FUNC_5(VAR_9, VAR_1);
 FUNC_5(VAR_9, VAR_2);
 FUNC_5(VAR_9, VAR_3);
 FUNC_5(VAR_9, FUNC_0('c'));
 FUNC_7(VAR_9, &VAR_8);

 if (VAR_11 != ((void*)0)) {
  FUNC_9(VAR_5, VAR_11, VAR_6);
  VAR_12 = 0;
 }
out_free_form:
 FUNC_8();
 FUNC_6(VAR_9);
 return VAR_12;
}
