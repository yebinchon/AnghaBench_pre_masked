
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (void*,size_t,char**) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,void*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*) ;

int
FUNC_7(int VAR_1, char **VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 1;
    struct test {
 void *data;
 size_t len;
 const char *result;
    } *VAR_5, VAR_6[] = {
 { "", 0 , "" },
 { "1", 1, "MQ==" },
 { "22", 2, "MjI=" },
 { "333", 3, "MzMz" },
 { "4444", 4, "NDQ0NA==" },
 { "55555", 5, "NTU1NTU=" },
 { "abc:def", 7, "YWJjOmRlZg==" },
 { ((void*)0) }
    };
    for(VAR_5 = VAR_6; VAR_5->data; VAR_5++) {
 char *VAR_7;
 int VAR_8;
 VAR_8 = FUNC_1(VAR_5->data, VAR_5->len, &VAR_7);
 if(FUNC_5(VAR_7, VAR_5->result) != 0) {
     FUNC_2(VAR_0, "failed test %d: %s != %s\n", VAR_4,
      VAR_7, VAR_5->result);
     VAR_3++;
 }
 FUNC_3(VAR_7);
 VAR_7 = FUNC_6(VAR_5->result);
 VAR_8 = FUNC_0(VAR_5->result, VAR_7);
 if(VAR_8 != VAR_5->len) {
     FUNC_2(VAR_0, "failed test %d: len %lu != %lu\n", VAR_4,
      (unsigned long)VAR_8, (unsigned long)VAR_5->len);
     VAR_3++;
 } else if(FUNC_4(VAR_7, VAR_5->data, VAR_5->len) != 0) {
     FUNC_2(VAR_0, "failed test %d: data\n", VAR_4);
     VAR_3++;
 }
 FUNC_3(VAR_7);
 VAR_4++;
    }

    {
 char VAR_9[32];
 if(FUNC_0("M=M=", VAR_9) != -1) {
     FUNC_2(VAR_0, "failed test %d: successful decode of `M=M='\n",
      VAR_4++);
     VAR_3++;
 }
 if(FUNC_0("MQ===", VAR_9) != -1) {
     FUNC_2(VAR_0, "failed test %d: successful decode of `MQ==='\n",
      VAR_4++);
     VAR_3++;
 }
    }
    return VAR_3;
}
