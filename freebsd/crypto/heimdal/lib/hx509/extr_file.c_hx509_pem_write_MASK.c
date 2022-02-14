
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {char* header; char* value; struct TYPE_3__* next; } ;
typedef TYPE_1__ hx509_pem_header ;
typedef int hx509_context ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t,char**) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int,char*) ;
 int FUNC_4 (int *,char*,char const*) ;

int
FUNC_5(hx509_context VAR_2, const char *VAR_3,
  hx509_pem_header *VAR_4, FILE *VAR_5,
  const void *VAR_6, size_t VAR_7)
{
    const char *VAR_8 = VAR_6;
    size_t VAR_9;
    char *VAR_10;



    FUNC_4(VAR_5, "BEGIN", VAR_3);

    while (VAR_4) {
 FUNC_1(VAR_5, "%s: %s\n%s",
  VAR_4->header, VAR_4->value,
  VAR_4->next ? "" : "\n");
 VAR_4 = VAR_4->next;
    }

    while (VAR_7 > 0) {
 ssize_t VAR_11;

 VAR_9 = VAR_7;
 if (VAR_9 > 54)
     VAR_9 = 54;

 VAR_11 = FUNC_0(VAR_8, VAR_9, &VAR_10);
 if (VAR_11 < 0) {
     FUNC_3(VAR_2, 0, VAR_1,
       "malloc - out of memory");
     return VAR_1;
 }
 VAR_7 -= VAR_9;
 FUNC_1(VAR_5, "%s\n", VAR_10);
 VAR_8 += VAR_9;
 FUNC_2(VAR_10);
    }

    FUNC_4(VAR_5, "END", VAR_3);

    return 0;
}
