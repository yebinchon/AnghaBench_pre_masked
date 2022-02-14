
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td ;
struct test_data {int member_0; int member_1; int member_2; char* member_3; scalar_t__ ok; size_t expected_len; int len; int data; } ;
struct map_page {int dummy; } ;
typedef int TESTuint32 ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int*,size_t*) ;
 void* FUNC_1 (int ,int ,int ,struct map_page**) ;
 int FUNC_2 (struct map_page*,char*,char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
    struct test_data VAR_1[] = {
 { 1, 3, 3, "\x02\x01\x00"},
 { 1, 3, 3, "\x02\x01\x7f"},
 { 1, 4, 4, "\x02\x02\x00\x80"},
 { 1, 4, 4, "\x02\x02\x01\x00"},
 { 1, 4, 4, "\x02\x02\x02\x00"},
 { 0, 3, 0, "\x02\x02\x00"},
 { 0, 3, 0, "\x02\x7f\x7f"},
 { 0, 4, 0, "\x02\x03\x00\x80"},
 { 0, 4, 0, "\x02\x7f\x01\x00"},
 { 0, 5, 0, "\x02\xff\x7f\x02\x00"}
    };
    size_t VAR_2;
    TESTuint32 VAR_3[] = {0, 127, 128, 256, 512,
    0, 127, 128, 256, 512 };
    TESTuint32 VAR_4;
    int VAR_5, VAR_6, VAR_7 = 0;
    void *VAR_8;

    for (VAR_5 = 0; VAR_5 < sizeof(VAR_1)/sizeof(VAR_1[0]); VAR_5++) {
 struct map_page *VAR_9;

 VAR_8 = FUNC_1(VAR_0, VAR_1[VAR_5].data, VAR_1[VAR_5].len, &VAR_9);

 VAR_6 = FUNC_0(VAR_8, VAR_1[VAR_5].len, &VAR_4, &VAR_2);
 if (VAR_6) {
     if (VAR_1[VAR_5].ok) {
  FUNC_3("failed with tag len test %d\n", VAR_5);
  VAR_7 = 1;
     }
 } else {
     if (VAR_1[VAR_5].ok == 0) {
  FUNC_3("failed with success for tag len test %d\n", VAR_5);
  VAR_7 = 1;
     }
     if (VAR_1[VAR_5].expected_len != VAR_2) {
  FUNC_3("wrong expected size for tag test %d\n", VAR_5);
  VAR_7 = 1;
     }
     if (VAR_3[VAR_5] != VAR_4) {
  FUNC_3("wrong value for tag test %d\n", VAR_5);
  VAR_7 = 1;
     }
 }
 FUNC_2(VAR_9, "test", "decode");
    }
    return VAR_7;
}
