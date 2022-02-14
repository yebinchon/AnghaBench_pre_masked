
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_path {int len; int * xvec; } ;


 int FUNC_0 (int ,struct sec_path*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sec_path *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++)
  FUNC_1(VAR_1->xvec[VAR_2]);
 FUNC_0(VAR_0, VAR_1);
}
