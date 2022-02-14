
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int typen; scalar_t__ key_len; int key_seq; scalar_t__ key_id; int * next; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(void)
{
 const char* VAR_2 =
     "sometestdata"
     "\0\0\0\0"
     "\x4e\x0c\xf0\xe2\xc7\x8e\xbb\xbf"
     "\x79\xfc\x87\xc7\x8b\xb7\x4a\x0b";
 const int VAR_3 = 12;
 struct key VAR_4;

 VAR_4.next = ((void*)0);
 VAR_4.key_id = 0;
 VAR_4.key_len = VAR_1;
 FUNC_2(&VAR_4.key_seq, "aes-128-cmac-key", VAR_4.key_len);
 FUNC_2(&VAR_4.typen, VAR_0, FUNC_3(VAR_0) + 1);

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_4);
}
