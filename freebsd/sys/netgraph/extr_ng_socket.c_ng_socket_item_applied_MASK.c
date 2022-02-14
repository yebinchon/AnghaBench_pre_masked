
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngsock {int error; int mtx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ngsock* const) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct ngsock *const VAR_2 = (struct ngsock *)VAR_0;

 FUNC_0(&VAR_2->mtx);
 VAR_2->error = VAR_1;
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->mtx);

}
