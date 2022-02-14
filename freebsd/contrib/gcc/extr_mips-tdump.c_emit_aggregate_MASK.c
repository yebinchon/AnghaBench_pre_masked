
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {size_t iss; } ;
struct TYPE_13__ {scalar_t__ crfd; } ;
struct TYPE_10__ {unsigned int rfd; unsigned int index; } ;
struct TYPE_12__ {unsigned int isym; TYPE_1__ rndx; } ;
struct TYPE_11__ {unsigned int rfdBase; size_t issBase; unsigned int isymBase; } ;
typedef TYPE_2__ FDR ;
typedef TYPE_3__ AUXU ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned int VAR_2 ;
 char* VAR_3 ;
 TYPE_5__* VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_0 (char*,char*,char const*,char const*,unsigned int,unsigned int) ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_7, AUXU VAR_8, AUXU VAR_9, const char *VAR_10, FDR *VAR_11)
{
  unsigned int VAR_12 = VAR_8.rndx.rfd;
  unsigned int VAR_13 = VAR_8.rndx.index;
  const char *VAR_14;

  if (VAR_12 == VAR_0)
    VAR_12 = VAR_9;



  if (VAR_12 == 0xffffffff
      || (VAR_8.rndx.rfd == VAR_0 && VAR_13 == 0))
    VAR_14 = "<undefined>";
  else if (VAR_13 == VAR_2)
    VAR_14 = "<no name>";
  else
    {
      if (VAR_11 == 0 || VAR_6.crfd == 0)
 VAR_11 = &VAR_1[VAR_12];
      else
 VAR_11 = &VAR_1[VAR_5[VAR_11->rfdBase + VAR_12]];
      VAR_14 = &VAR_3[VAR_11->issBase + VAR_4[VAR_13 + VAR_11->isymBase].iss];
    }

  FUNC_0 (VAR_7,
    "%s %s { ifd = %u, index = %u }",
    VAR_10, VAR_14, VAR_12, VAR_13);
}
