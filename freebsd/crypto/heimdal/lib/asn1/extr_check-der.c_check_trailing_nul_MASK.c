
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int foo ;


 int FUNC_0 (unsigned char const*,size_t,char**,size_t*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
    int VAR_0, VAR_1;
    struct {
 int fail;
 const unsigned char *p;
 size_t len;
 const char *s;
 size_t size;
    } VAR_2[] = {
 { 1, (const unsigned char *)"foo\x00o", 5, ((void*)0), 0 },
 { 1, (const unsigned char *)"\x00o", 2, ((void*)0), 0 },
 { 0, (const unsigned char *)"\x00\x00\x00\x00\x00", 5, "", 5 },
 { 0, (const unsigned char *)"\x00", 1, "", 1 },
 { 0, (const unsigned char *)"", 0, "", 0 },
 { 0, (const unsigned char *)"foo\x00\x00", 5, "foo", 5 },
 { 0, (const unsigned char *)"foo\0", 4, "foo", 4 },
 { 0, (const unsigned char *)"foo", 3, "foo", 3 }
    };

    for (VAR_0 = 0; VAR_0 < sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_0++) {
 char *VAR_3;
 size_t VAR_4;
 VAR_1 = FUNC_0(VAR_2[VAR_0].p, VAR_2[VAR_0].len, &VAR_3, &VAR_4);
 if (VAR_2[VAR_0].fail) {
     if (VAR_1 == 0)
  FUNC_1(1, "check %d NULL didn't fail", VAR_0);
     continue;
 }
 if (VAR_1)
     FUNC_1(1, "NULL check %d der_get_general_string failed", VAR_0);
 if (VAR_2[VAR_0].size != VAR_4)
     FUNC_1(1, "NUL check i = %d size failed", VAR_0);
 if (FUNC_3(VAR_2[VAR_0].s, VAR_3) != 0)
     FUNC_1(1, "NUL check i = %d content failed", VAR_0);
 FUNC_2(VAR_3);
    }
    return 0;
}
