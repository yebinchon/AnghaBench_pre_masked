
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dircursor {int dir; scalar_t__ certs; int * iter; } ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dircursor*) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_0,
      hx509_certs VAR_1,
      void *VAR_2,
      void *VAR_3)
{
    struct dircursor *VAR_4 = VAR_3;

    if (VAR_4->certs) {
 FUNC_2(VAR_0, VAR_4->certs, VAR_4->iter);
 VAR_4->iter = ((void*)0);
 FUNC_3(&VAR_4->certs);
    }
    FUNC_0(VAR_4->dir);
    FUNC_1(VAR_4);
    return 0;
}
