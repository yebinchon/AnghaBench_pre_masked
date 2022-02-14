
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {int * iostream; } ;
typedef TYPE_1__ bfd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_4)
{
  bfd_boolean VAR_5;

  if (FUNC_1 ((FILE *) VAR_4->iostream) == 0)
    VAR_5 = VAR_1;
  else
    {
      VAR_5 = VAR_0;
      FUNC_0 (VAR_2);
    }

  FUNC_2 (VAR_4);

  VAR_4->iostream = ((void*)0);
  --VAR_3;

  return VAR_5;
}
