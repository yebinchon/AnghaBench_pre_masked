
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sbitmap ;
struct TYPE_4__ {int size; int elms; } ;
typedef int SBITMAP_ELT_TYPE ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1 (sbitmap VAR_0, sbitmap VAR_1)
{
  FUNC_0 (VAR_0->elms, VAR_1->elms, sizeof (SBITMAP_ELT_TYPE) * VAR_0->size);
}
