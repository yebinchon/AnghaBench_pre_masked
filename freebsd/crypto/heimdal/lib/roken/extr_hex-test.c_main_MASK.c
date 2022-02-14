
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*,size_t,char**) ;
 scalar_t__ FUNC_4 (char*,void*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

int
FUNC_8(int VAR_1, char **VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 1;
    struct test {
 void *data;
 size_t len;
 const char *result;
    } *VAR_5, VAR_6[] = {
 { "", 0 , "" },
 { "a", 1, "61" },
 { "ab", 2, "6162" },
 { "abc", 3, "616263" },
 { "abcd", 4, "61626364" },
 { "abcde", 5, "6162636465" },
 { "abcdef", 6, "616263646566" },
 { "abcdefg", 7, "61626364656667" },
 { "=", 1, "3D" },
 { ((void*)0) }
    };
    for(VAR_5 = VAR_6; VAR_5->data; VAR_5++) {
 char *VAR_7;
 int VAR_8;
 VAR_8 = FUNC_3(VAR_5->data, VAR_5->len, &VAR_7);
 if(FUNC_5(VAR_7, VAR_5->result) != 0) {
     FUNC_0(VAR_0, "failed test %d: %s != %s\n", VAR_4,
      VAR_7, VAR_5->result);
     VAR_3++;
 }
 FUNC_1(VAR_7);
 VAR_7 = FUNC_6(VAR_5->result);
 VAR_8 = FUNC_7(VAR_7);
 VAR_8 = FUNC_2(VAR_5->result, VAR_7, VAR_8);
 if(VAR_8 != VAR_5->len) {
     FUNC_0(VAR_0, "failed test %d: len %lu != %lu\n", VAR_4,
      (unsigned long)VAR_8, (unsigned long)VAR_5->len);
     VAR_3++;
 } else if(FUNC_4(VAR_7, VAR_5->data, VAR_5->len) != 0) {
     FUNC_0(VAR_0, "failed test %d: data\n", VAR_4);
     VAR_3++;
 }
 FUNC_1(VAR_7);
 VAR_4++;
    }

    {
 unsigned char VAR_9[2] = { 0, 0xff } ;
 int VAR_10;

 VAR_10 = FUNC_2("A", VAR_9, 1);
 if (VAR_10 != 1) {
     FUNC_0(VAR_0, "len != 1");
     VAR_3++;
 }
 if (VAR_9[0] != 10) {
     FUNC_0(VAR_0, "buf != 10");
     VAR_3++;
 }
 if (VAR_9[1] != 0xff) {
     FUNC_0(VAR_0, "buf != 0xff");
     VAR_3++;
 }

    }

    return VAR_3;
}
