
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alpha_reloc_tag {long sequence; int string; int segment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ,int ,void*) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,long) ;
 int FUNC_4 (int ,char*) ;
 size_t FUNC_5 (char*) ;
 struct alpha_reloc_tag* FUNC_6 (int,int) ;

__attribute__((used)) static struct alpha_reloc_tag *
FUNC_7 (long VAR_3)
{
  char VAR_4[VAR_0];
  struct alpha_reloc_tag *VAR_5;

  FUNC_3 (VAR_4, "!%ld", VAR_3);

  VAR_5 = (struct alpha_reloc_tag *) FUNC_1 (VAR_1, VAR_4);
  if (! VAR_5)
    {
      size_t VAR_6 = FUNC_5 (VAR_4);
      const char *VAR_7;

      VAR_5 = FUNC_6 (sizeof (struct alpha_reloc_tag) + VAR_6, 1);

      VAR_5->segment = VAR_2;
      VAR_5->sequence = VAR_3;
      FUNC_4 (VAR_5->string, VAR_4);
      VAR_7 = FUNC_2 (VAR_1, VAR_5->string, (void *) VAR_5);
      if (VAR_7)
 FUNC_0 (VAR_7);
    }

  return VAR_5;
}
