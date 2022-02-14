
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
typedef int Der_type ;
typedef int Der_class ;


 int FUNC_0 (unsigned char const*,size_t,int *,int *,unsigned int*,size_t*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
    struct {
 int ok;
 const char *ptr;
 size_t len;
    } VAR_0[] = {
 { 1, "\x00", 1 },
 { 0, "\xff", 1 },
 { 0, "\xff\xff\xff\xff\xff\xff\xff\xff", 8 }
    };
    int VAR_1, VAR_2;
    Der_class VAR_3;
    Der_type VAR_4;
    unsigned int VAR_5;
    size_t VAR_6;

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_0)/sizeof(VAR_0[0]); VAR_1++) {
 VAR_2 = FUNC_0((const unsigned char*)VAR_0[VAR_1].ptr,
     VAR_0[VAR_1].len, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_2) {
     if (VAR_0[VAR_1].ok)
  FUNC_1(1, "failed while shouldn't");
 } else {
     if (!VAR_0[VAR_1].ok)
  FUNC_1(1, "passed while shouldn't");
 }
    }
    return 0;
}
