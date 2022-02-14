
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ we_wordc; scalar_t__ we_nbytes; int * we_strings; int * we_wordv; } ;
typedef TYPE_1__ wordexp_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(wordexp_t *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->we_wordv);
 FUNC_0(VAR_0->we_strings);
 VAR_0->we_wordv = ((void*)0);
 VAR_0->we_strings = ((void*)0);
 VAR_0->we_nbytes = 0;
 VAR_0->we_wordc = 0;
}
