
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coff_sfile {TYPE_2__* section; } ;
struct coff_ofile {int nsections; } ;
struct IT_du {int format; int unit; int sections; int* san; int* address; int* length; char* tool; int date; scalar_t__ spare; scalar_t__ stackfrmt; scalar_t__ optimized; } ;
struct TYPE_4__ {int high; int low; TYPE_1__* parent; scalar_t__ init; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (int ,struct IT_du*) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5 (struct coff_ofile *VAR_5, struct coff_sfile *VAR_6, int VAR_7)
{
  struct IT_du VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  unsigned int *VAR_12 = (unsigned *) FUNC_1 (VAR_5->nsections);
  unsigned int *VAR_13 = (unsigned *) FUNC_1 (VAR_5->nsections);

  VAR_8.format = FUNC_0 (VAR_2) & VAR_1 ? 0 : 1;
  VAR_8.optimized = 0;
  VAR_8.stackfrmt = 0;
  VAR_8.spare = 0;
  VAR_8.unit = VAR_7;
  VAR_8.sections = VAR_5->nsections - 1;
  VAR_8.san = (int *) FUNC_4 (sizeof (int), VAR_8.sections);
  VAR_8.address = FUNC_1 (VAR_8.sections);
  VAR_8.length = FUNC_1 (VAR_8.sections);

  for (VAR_10 = 0; VAR_10 < VAR_8.sections; VAR_10++)
    {
      VAR_12[VAR_10] = ~0;
      VAR_13[VAR_10] = 0;
    }

  VAR_9 = VAR_8.sections;
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    {
      int VAR_14 = VAR_11;
      int VAR_15 = VAR_11;

      VAR_8.san[VAR_15] = VAR_15;

      if (VAR_6->section[VAR_14].init)
 {
   VAR_8.length[VAR_15]
     = VAR_6->section[VAR_14].high - VAR_6->section[VAR_14].low + 1;
   VAR_8.address[VAR_15]
     = VAR_6->section[VAR_14].low;
 }
      else
 {
   VAR_8.length[VAR_15] = 0;
   VAR_8.address[VAR_15] = 0;
 }

      if (VAR_3)
 {
   if (VAR_6->section[VAR_14].parent)
     {
       FUNC_2 (" section %6s 0x%08x..0x%08x\n",
        VAR_6->section[VAR_14].parent->name,
        VAR_8.address[VAR_15],
        VAR_8.address[VAR_15] + VAR_8.length[VAR_15] - 1);
     }
 }

      VAR_8.sections = VAR_15 + 1;
    }

  VAR_8.tool = "c_gcc";
  VAR_8.date = VAR_0;

  FUNC_3 (VAR_4, &VAR_8);
}
