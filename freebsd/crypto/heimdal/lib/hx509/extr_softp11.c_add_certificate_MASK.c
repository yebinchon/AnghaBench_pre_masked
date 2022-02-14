
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct foo {char* id; char* label; } ;
typedef int * hx509_lock ;
typedef int hx509_certs ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char const*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int,int *,int *) ;
 int FUNC_4 (int ,int ,int ,struct foo*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static CK_RV
FUNC_10(const char *VAR_5,
  const char *VAR_6,
  char *VAR_7,
  char *VAR_8)
{
    hx509_certs VAR_9;
    hx509_lock VAR_10 = ((void*)0);
    int VAR_11, VAR_12 = 0;

    struct foo VAR_13;
    VAR_13.id = VAR_7;
    VAR_13.label = VAR_8;

    if (VAR_6 == ((void*)0))
 VAR_12 |= VAR_2;

    if (VAR_6) {
 char *VAR_14;
 FUNC_0(&VAR_14, "PASS:%s", VAR_6);

 FUNC_6(VAR_4, &VAR_10);
 FUNC_5(VAR_10, VAR_14);

 FUNC_7(VAR_14, 0, FUNC_9(VAR_14));
 FUNC_1(VAR_14);
    }

    VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_12, VAR_10, &VAR_9);
    if (VAR_11) {
 FUNC_8("failed to open file %s\n", VAR_5);
 return VAR_0;
    }

    VAR_11 = FUNC_4(VAR_4, VAR_9, VAR_3, &VAR_13);
    FUNC_2(&VAR_9);
    if (VAR_11) {
 FUNC_8("failed adding certs from file %s\n", VAR_5);
 return VAR_0;
    }

    return VAR_1;
}
