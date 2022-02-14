
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_digest {int id; int * mdfunc; } ;


 int VAR_0 ;
 struct ssh_digest const* VAR_1 ;

__attribute__((used)) static const struct ssh_digest *
FUNC_0(int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);
 if (VAR_1[VAR_2].id != VAR_2)
  return ((void*)0);
 if (VAR_1[VAR_2].mdfunc == ((void*)0))
  return ((void*)0);
 return &(VAR_1[VAR_2]);
}
