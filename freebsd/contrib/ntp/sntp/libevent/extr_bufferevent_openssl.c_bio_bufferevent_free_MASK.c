
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptr; scalar_t__ flags; scalar_t__ init; scalar_t__ shutdown; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(BIO *VAR_0)
{
 if (!VAR_0)
  return 0;
 if (VAR_0->shutdown) {
  if (VAR_0->init && VAR_0->ptr)
   FUNC_0(VAR_0->ptr);
  VAR_0->init = 0;
  VAR_0->flags = 0;
  VAR_0->ptr = ((void*)0);
 }
 return 1;
}
