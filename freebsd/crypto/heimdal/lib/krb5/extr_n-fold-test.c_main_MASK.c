
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase {char* str; int n; int* res; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (unsigned char*,int*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 struct testcase* VAR_1 ;

int
FUNC_5(int VAR_2, char **VAR_3)
{
    unsigned char VAR_4[VAR_0];
    struct testcase *VAR_5;
    int VAR_6 = 0;

    for (VAR_5 = VAR_1; VAR_5->str; ++VAR_5) {
 int VAR_7;

 VAR_6 = FUNC_0 (VAR_5->str, FUNC_4(VAR_5->str), VAR_4, VAR_5->n);
 if (VAR_6)
     FUNC_1(1, "out of memory");
 if (FUNC_2 (VAR_4, VAR_5->res, VAR_5->n) != 0) {
     FUNC_3 ("n-fold(\"%s\", %d) failed\n", VAR_5->str, VAR_5->n);
     FUNC_3 ("should be: ");
     for (VAR_7 = 0; VAR_7 < VAR_5->n; ++VAR_7)
  FUNC_3 ("%02x", VAR_5->res[VAR_7]);
     FUNC_3 ("\nresult was: ");
     for (VAR_7 = 0; VAR_7 < VAR_5->n; ++VAR_7)
  FUNC_3 ("%02x", VAR_4[VAR_7]);
     FUNC_3 ("\n");
     VAR_6 = 1;
 }
    }
    return VAR_6;
}
