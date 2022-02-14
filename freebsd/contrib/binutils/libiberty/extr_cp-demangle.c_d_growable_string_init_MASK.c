
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_growable_string {scalar_t__ allocation_failure; scalar_t__ alc; scalar_t__ len; int * buf; } ;


 int FUNC_0 (struct d_growable_string*,size_t) ;

__attribute__((used)) static void
FUNC_1 (struct d_growable_string *VAR_0, size_t VAR_1)
{
  VAR_0->buf = ((void*)0);
  VAR_0->len = 0;
  VAR_0->alc = 0;
  VAR_0->allocation_failure = 0;

  if (VAR_1 > 0)
    FUNC_0 (VAR_0, VAR_1);
}
