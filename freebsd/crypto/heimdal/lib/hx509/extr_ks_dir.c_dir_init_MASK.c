
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*,char const*) ;
 int FUNC_3 (char const*,struct stat*) ;
 void* FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_3,
  hx509_certs VAR_4, void **VAR_5, int VAR_6,
  const char *VAR_7, hx509_lock VAR_8)
{
    *VAR_5 = ((void*)0);

    {
 struct stat VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7, &VAR_9);
 if (VAR_10 == -1) {
     FUNC_2(VAR_3, 0, VAR_0,
       "No such file %s", VAR_7);
     return VAR_0;
 }

 if (!FUNC_0(VAR_9.st_mode)) {
     FUNC_2(VAR_3, 0, VAR_2,
       "%s is not a directory", VAR_7);
     return VAR_2;
 }
    }

    *VAR_5 = FUNC_4(VAR_7);
    if (*VAR_5 == ((void*)0)) {
 FUNC_1(VAR_3);
 return VAR_1;
    }

    return 0;
}
