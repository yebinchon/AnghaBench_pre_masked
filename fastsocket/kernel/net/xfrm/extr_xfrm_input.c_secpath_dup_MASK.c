
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_path {int len; int refcnt; int * xvec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct sec_path* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sec_path*,struct sec_path*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

struct sec_path *FUNC_4(struct sec_path *VAR_2)
{
 struct sec_path *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->len = 0;
 if (VAR_2) {
  int VAR_4;

  FUNC_2(VAR_3, VAR_2, sizeof(*VAR_3));
  for (VAR_4 = 0; VAR_4 < VAR_3->len; VAR_4++)
   FUNC_3(VAR_3->xvec[VAR_4]);
 }
 FUNC_0(&VAR_3->refcnt, 1);
 return VAR_3;
}
