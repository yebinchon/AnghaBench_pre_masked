
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct printf_test_data {int const* data; int len; char* encoded; } ;
typedef int buf ;
typedef int bin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*,int const*,size_t) ;
 int FUNC_3 (int*,int,char*) ;
 int FUNC_4 (char*,int,int const*,int) ;
 struct printf_test_data* VAR_2 ;
 int FUNC_5 (int ,char*,int*,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_3;
 size_t VAR_4;
 char VAR_5[100];
 u8 VAR_6[100];
 int VAR_7 = 0;
 int VAR_8[10];

 FUNC_6(VAR_1, "printf encode/decode tests");

 for (VAR_3 = 0; VAR_2[VAR_3].data; VAR_3++) {
  const struct printf_test_data *VAR_9 = &VAR_2[VAR_3];
  FUNC_4(VAR_5, sizeof(VAR_5), VAR_9->data, VAR_9->len);
  FUNC_6(VAR_1, "%d: -> \"%s\"", VAR_3, VAR_5);

  VAR_4 = FUNC_3(VAR_6, sizeof(VAR_6), VAR_5);
  if (VAR_4 != VAR_9->len ||
      FUNC_2(VAR_6, VAR_9->data, VAR_4) != 0) {
   FUNC_5(VAR_0, "Error in decoding#1",
        VAR_6, VAR_4);
   VAR_7++;
  }

  VAR_4 = FUNC_3(VAR_6, sizeof(VAR_6), VAR_9->encoded);
  if (VAR_4 != VAR_9->len ||
      FUNC_2(VAR_6, VAR_9->data, VAR_4) != 0) {
   FUNC_5(VAR_0, "Error in decoding#2",
        VAR_6, VAR_4);
   VAR_7++;
  }
 }

 VAR_5[5] = 'A';
 FUNC_4(VAR_5, 5, (const u8 *) "abcde", 5);
 if (VAR_5[5] != 'A') {
  FUNC_6(VAR_0, "Error in bounds checking#1");
  VAR_7++;
 }

 for (VAR_3 = 5; VAR_3 < 10; VAR_3++) {
  VAR_5[VAR_3] = 'A';
  FUNC_4(VAR_5, VAR_3, (const u8 *) "\xdd\xdd\xdd\xdd\xdd", 5);
  if (VAR_5[VAR_3] != 'A') {
   FUNC_6(VAR_0, "Error in bounds checking#2(%d)",
       VAR_3);
   VAR_7++;
  }
 }

 if (FUNC_3(VAR_6, 3, "abcde") != 2)
  VAR_7++;

 if (FUNC_3(VAR_6, 3, "\\xa") != 1 || VAR_6[0] != 10)
  VAR_7++;

 if (FUNC_3(VAR_6, 3, "\\xq") != 1 || VAR_6[0] != 'q')
  VAR_7++;

 if (FUNC_3(VAR_6, 3, "\\a") != 1 || VAR_6[0] != 'a')
  VAR_7++;

 VAR_8[0] = 10;
 VAR_8[1] = 10;
 VAR_8[2] = 5;
 VAR_8[3] = 10;
 VAR_8[4] = 5;
 VAR_8[5] = 0;
 if (FUNC_0(VAR_8) != 5)
  VAR_7++;
 FUNC_1(VAR_8);
 if (FUNC_0(VAR_8) != 2)
  VAR_7++;

 if (VAR_7) {
  FUNC_6(VAR_0, "%d printf test(s) failed", VAR_7);
  return -1;
 }

 return 0;
}
