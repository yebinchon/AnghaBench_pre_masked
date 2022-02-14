
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct redirection_data {TYPE_2__* outgoing_edge; } ;
typedef int hashval_t ;
typedef TYPE_2__* edge ;
struct TYPE_4__ {TYPE_1__* dest; } ;
struct TYPE_3__ {int index; } ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0)
{
  edge VAR_1 = ((struct redirection_data *)VAR_0)->outgoing_edge;
  return VAR_1->dest->index;
}
