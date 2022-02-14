
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_id; int key_len; int typen; int typei; int key_seq; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*,int const,int,struct key*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

void
FUNC_5(void)
{
 const char* VAR_1 = "123456";
 const int VAR_2 = 6;
 char VAR_3[VAR_0];

 struct key VAR_4;
 VAR_4 = ((void*)0);
 VAR_4 = 10;
 VAR_4 = 6;
 FUNC_3(&VAR_4, "md5seq", VAR_4);
 FUNC_4(VAR_4, "MD5", sizeof(VAR_4));
 VAR_4 = FUNC_1(VAR_4, ((void*)0));

 FUNC_0(0, FUNC_2(VAR_1, VAR_2, VAR_0, &VAR_4, VAR_3));
}
