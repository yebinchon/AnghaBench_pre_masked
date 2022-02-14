
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {struct TYPE_5__* archive_next; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (char*,int *) ;

bfd_boolean
FUNC_3 (bfd **VAR_1, char *VAR_2,
   bfd_boolean VAR_3)
{
  bfd *VAR_4;

  VAR_4 = *VAR_1;
  *VAR_1 = FUNC_2 (VAR_2, ((void*)0));

  FUNC_1 (*VAR_1, VAR_2);
  FUNC_0 (VAR_3, VAR_2);

  (*VAR_1)->archive_next = VAR_4;

  return VAR_0;
}
