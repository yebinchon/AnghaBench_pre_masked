
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lang_output_section_phdr_list ;
typedef int fill_type ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char,int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (int) ;

void
FUNC_10 (fill_type *VAR_5,
       lang_output_section_phdr_list *VAR_6)
{
  const char *VAR_7;
  char *VAR_8, *VAR_9;
  const char *VAR_10;
  char *VAR_11;

  VAR_7 = VAR_4->name;





  FUNC_6 (VAR_5, VAR_0, VAR_6, 0);



  VAR_8 = FUNC_9 (FUNC_8 (VAR_7) + 1);
  VAR_9 = VAR_8;
  for (VAR_10 = VAR_7; *VAR_10 != '\0'; VAR_10++)
    if (FUNC_0 (*VAR_10) || *VAR_10 == '_')
      *VAR_9++ = *VAR_10;
  *VAR_9 = '\0';

  VAR_11 = FUNC_9 (FUNC_8 (VAR_8) + sizeof "__load_start_");
  FUNC_7 (VAR_11, "__load_start_%s", VAR_8);
  FUNC_5 (FUNC_3 (VAR_11,
        FUNC_2 (VAR_2, VAR_7),
        VAR_1));

  VAR_11 = FUNC_9 (FUNC_8 (VAR_8) + sizeof "__load_stop_");
  FUNC_7 (VAR_11, "__load_stop_%s", VAR_8);
  FUNC_5 (FUNC_3 (VAR_11,
        FUNC_1 ('+',
            FUNC_2 (VAR_2, VAR_7),
            FUNC_2 (VAR_3, VAR_7)),
        VAR_1));

  FUNC_4 (VAR_8);
}
