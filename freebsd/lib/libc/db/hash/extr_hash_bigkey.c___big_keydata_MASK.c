
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {size_t size; int * data; } ;
struct TYPE_8__ {scalar_t__ tmp_key; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ DBT ;
typedef int BUFHEAD ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,TYPE_2__*,int) ;

int
FUNC_1(HTAB *VAR_0, BUFHEAD *VAR_1, DBT *VAR_2, DBT *VAR_3, int VAR_4)
{
 VAR_2->size = (size_t)FUNC_0(VAR_0, VAR_1, 0, VAR_3, VAR_4);
 if (VAR_2->size == (size_t)-1)
  return (-1);
 VAR_2->data = (u_char *)VAR_0->tmp_key;
 return (0);
}
