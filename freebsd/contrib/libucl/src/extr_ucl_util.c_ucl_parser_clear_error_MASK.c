
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {scalar_t__ err_code; int * err; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ucl_parser *VAR_0)
{
 if (VAR_0 != ((void*)0) && VAR_0->err != ((void*)0)) {
  FUNC_0(VAR_0->err);
  VAR_0->err = ((void*)0);
  VAR_0->err_code = 0;
 }
}
