
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objfile {int section_offsets; } ;
struct TYPE_2__ {scalar_t__ l_paddr; } ;
struct internal_lineno {TYPE_1__ l_addr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct internal_lineno*) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (int ,char*,struct internal_lineno*) ;
 int FUNC_4 (int *,char*,long) ;
 int VAR_0 ;
 char* VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6 (long VAR_7, int VAR_8,
        int VAR_9, struct objfile *VAR_10)
{
  char *VAR_11;
  struct internal_lineno VAR_12;

  if (!VAR_1)
    return;
  if (VAR_7 < VAR_2)
    {
      FUNC_4 (&VAR_6,
   "Line number pointer %ld lower than start of line numbers",
   VAR_7);
      if (VAR_7 > VAR_3)
 return;
      VAR_7 += VAR_2;
    }

  VAR_11 = &VAR_1[VAR_7 - VAR_2];


  VAR_11 += VAR_4;

  VAR_8--;




  while (VAR_11 <= &VAR_1[0] + VAR_3)
    {
      FUNC_3 (VAR_5, VAR_11, &VAR_12);
      VAR_11 += VAR_4;


      if (FUNC_1 (&VAR_12) && FUNC_1 (&VAR_12) <= VAR_9)
 FUNC_5 (VAR_0, VAR_8 + FUNC_1 (&VAR_12),
       VAR_12.l_addr.l_paddr
       + FUNC_0 (VAR_10->section_offsets, FUNC_2 (VAR_10)));
      else
 break;
    }
}
