
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_len; int typen; int typei; int key_seq; scalar_t__ key_id; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int const,int ,struct key*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

void
FUNC_5(void)
{
 const char* VAR_1 =
     "sometestdata"
     "\0\0\0\0"
     "\xc7\x58\x99\xdd\x99\x32\x0f\x71"
     "\x2b\x7b\xfe\x4f\xa2\x32\xcf\xac";
 const int VAR_2 = 12;

 struct key VAR_3;
 VAR_3 = ((void*)0);
 VAR_3 = 0;
 VAR_3 = 6;
 FUNC_3(&VAR_3, "md5key", VAR_3);
 FUNC_4(VAR_3, "MD5", sizeof(VAR_3));
 VAR_3 = FUNC_2(VAR_3, ((void*)0));

 FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_3));
}
