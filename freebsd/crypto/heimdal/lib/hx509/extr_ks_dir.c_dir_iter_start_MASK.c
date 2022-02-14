
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dircursor {int * iter; int * certs; int * dir; } ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 struct dircursor* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct dircursor*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_2,
        hx509_certs VAR_3, void *VAR_4, void **VAR_5)
{
    struct dircursor *VAR_6;

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_0(1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
 FUNC_2(VAR_2);
 return VAR_0;
    }

    VAR_6->dir = FUNC_3(VAR_4);
    if (VAR_6->dir == ((void*)0)) {
 FUNC_2(VAR_2);
 FUNC_1(VAR_6);
 return VAR_1;
    }
    FUNC_4(VAR_6->dir);
    VAR_6->certs = ((void*)0);
    VAR_6->iter = ((void*)0);

    *VAR_5 = VAR_6;
    return 0;
}
