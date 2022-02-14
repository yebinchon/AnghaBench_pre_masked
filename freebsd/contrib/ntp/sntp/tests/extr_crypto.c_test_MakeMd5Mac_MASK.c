
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_id; int key_len; int typen; int typei; int key_seq; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,int const,int,struct key*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char const*) ;

void
FUNC_8(void)
{
 const char* VAR_1 = "abcdefgh0123";
 const int VAR_2 = FUNC_7(VAR_1);
 const char* VAR_3 =
  "\x52\x6c\xb8\x38\xaf\x06\x5a\xfb\x6c\x98\xbb\xc0\x9b\x0a\x7a\x1b";
 char VAR_4[VAR_0];

 struct key VAR_5;
 VAR_5 = ((void*)0);
 VAR_5 = 10;
 VAR_5 = 6;
 FUNC_5(&VAR_5, "md5seq", VAR_5);
 FUNC_6(VAR_5, "MD5", sizeof(VAR_5));
 VAR_5 = FUNC_2(VAR_5, ((void*)0));

 FUNC_0(VAR_0,
     FUNC_3(VAR_1, VAR_2, VAR_0, &VAR_5, VAR_4));

 FUNC_1(FUNC_4(VAR_3, VAR_4, VAR_0) == 0);
}
