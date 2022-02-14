
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clnt_str {scalar_t__ len; int * data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct clnt_str *VAR_0)
{
 if (VAR_0->data != ((void*)0)) {
  FUNC_1(VAR_0->data, 0, VAR_0->len);
  FUNC_0(VAR_0->data);
  VAR_0->data = ((void*)0);
  VAR_0->len = 0;
 }
}
