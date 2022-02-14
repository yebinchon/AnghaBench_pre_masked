
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {scalar_t__ pe; } ;
struct TYPE_4__ {int SizeOfHeapReserve; int SizeOfStackReserve; int SizeOfHeapCommit; int SizeOfStackCommit; } ;
struct TYPE_5__ {TYPE_1__ pe_opthdr; } ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_0, bfd *VAR_1, int VAR_2)
{
  if (FUNC_0(VAR_1)->pe)
    {
      int VAR_3 = FUNC_2 (VAR_0, &VAR_0, 0);

      if (VAR_2)
 FUNC_1(VAR_1)->pe_opthdr.SizeOfHeapReserve = VAR_3;
      else
 FUNC_1(VAR_1)->pe_opthdr.SizeOfStackReserve = VAR_3;

      if (VAR_0[0] == ',')
 {
   VAR_3 = FUNC_2 (VAR_0+1, &VAR_0, 0);
   if (VAR_2)
     FUNC_1(VAR_1)->pe_opthdr.SizeOfHeapCommit = VAR_3;
   else
     FUNC_1(VAR_1)->pe_opthdr.SizeOfStackCommit = VAR_3;
 }
    }
  return VAR_0;
}
