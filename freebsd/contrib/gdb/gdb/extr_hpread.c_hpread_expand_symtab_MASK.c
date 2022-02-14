
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char kind; scalar_t__ extension; } ;
union dnttentry {TYPE_1__ dblock; } ;
struct symtab {int dummy; } ;
struct section_offsets {int dummy; } ;
struct objfile {int dummy; } ;
struct dntt_type_block {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct objfile*) ;
 scalar_t__ VAR_4 ;
 struct objfile* VAR_5 ;
 scalar_t__ VAR_6 ;
 struct symtab* FUNC_1 (int ,struct objfile*,int ) ;
 int VAR_7 ;
 union dnttentry* FUNC_2 (int,struct objfile*) ;
 int FUNC_3 (union dnttentry*,char*,struct section_offsets*,struct objfile*,int ,int,char*,unsigned int,int*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union dnttentry*,char**,struct objfile*) ;
 int FUNC_7 (char*,int *,int ) ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;

__attribute__((used)) static struct symtab *
FUNC_8 (struct objfile *VAR_11, int VAR_12, int VAR_13,
        CORE_ADDR VAR_14, int VAR_15,
        struct section_offsets *VAR_16, char *VAR_17)
{
  char *VAR_18;
  union dnttentry *VAR_19;
  unsigned VAR_20;
  int VAR_21 = 0;


  int VAR_22 = VAR_12 / sizeof (struct dntt_type_block);

  VAR_5 = VAR_11;
  VAR_9 = 0;

  VAR_8 = 0;



  if (VAR_4 != VAR_6)
    {

      FUNC_5 (VAR_2);
    }

  VAR_19 = FUNC_2 (VAR_22, VAR_11);
  if (!((VAR_19->dblock.kind == (unsigned char) VAR_1) ||
 (VAR_19->dblock.kind == (unsigned char) VAR_0)))
    {
      FUNC_7 ("globals", ((void*)0), 0);
      FUNC_4 ("HP");
    }
  VAR_20 = VAR_13 / sizeof (struct dntt_type_block);




  for (VAR_10 = 0;
       VAR_10 < VAR_20;
       VAR_10++)
    {
      VAR_3;
      VAR_19 = FUNC_2 (VAR_22 + VAR_10, VAR_11);

      if (VAR_19->dblock.extension)
 continue;


      FUNC_6 (VAR_19, &VAR_18, VAR_11);

      FUNC_3 (VAR_19, VAR_18, VAR_16,
           VAR_11, VAR_14, VAR_15,
           VAR_17, VAR_10 + VAR_22,
           &VAR_21
 );
      if (VAR_21 == -1)
 break;
    }

  VAR_5 = ((void*)0);
  VAR_7 = 1;

  return FUNC_1 (VAR_14 + VAR_15, VAR_11, FUNC_0 (VAR_11));
}
