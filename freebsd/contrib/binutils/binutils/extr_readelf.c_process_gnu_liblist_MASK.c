
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int timebuf ;
typedef void* time_t ;
struct tm {int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_mon; int tm_year; } ;
struct TYPE_12__ {unsigned int e_shnum; } ;
struct TYPE_11__ {int l_flags; int l_version; int l_checksum; int l_time_stamp; int l_name; } ;
struct TYPE_10__ {size_t l_name; void* l_flags; void* l_version; void* l_checksum; } ;
struct TYPE_9__ {int sh_type; size_t sh_size; int sh_entsize; int sh_offset; int sh_link; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf32_Lib ;
typedef TYPE_3__ Elf32_External_Lib ;


 void* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_1__*) ;

 char* FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (int *,int *,int ,int,size_t,char*) ;
 struct tm* FUNC_7 (void**) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_10 (char*,int,char*,int ,int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_11 (FILE *VAR_4)
{
  Elf_Internal_Shdr *VAR_5, *VAR_6;
  Elf32_External_Lib *VAR_7;
  char *VAR_8;
  size_t VAR_9;
  size_t VAR_10;
  unsigned VAR_11;

  if (! VAR_0)
    return 0;

  for (VAR_11 = 0, VAR_5 = VAR_3;
       VAR_11 < VAR_2.e_shnum;
       VAR_11++, VAR_5++)
    {
      switch (VAR_5->sh_type)
 {
 case 128:
   if (FUNC_2 (VAR_5->sh_link) >= VAR_2.e_shnum)
     break;

   VAR_7 = FUNC_6 (((void*)0), VAR_4, VAR_5->sh_offset, 1, VAR_5->sh_size,
      FUNC_4("liblist"));

   if (VAR_7 == ((void*)0))
     break;
   VAR_6 = FUNC_1 (VAR_5->sh_link);

   VAR_8 = FUNC_6 (((void*)0), VAR_4, VAR_6->sh_offset, 1,
        VAR_6->sh_size, FUNC_4("liblist string table"));
   VAR_9 = VAR_6->sh_size;

   if (VAR_8 == ((void*)0)
       || VAR_5->sh_entsize != sizeof (Elf32_External_Lib))
     {
       FUNC_5 (VAR_7);
       break;
     }

   FUNC_8 (FUNC_4("\nLibrary list section '%s' contains %lu entries:\n"),
    FUNC_3 (VAR_5),
    (long) (VAR_5->sh_size / sizeof (Elf32_External_Lib)));

   FUNC_9 ("     Library              Time Stamp          Checksum   Version Flags");

   for (VAR_10 = 0; VAR_10 < VAR_5->sh_size / sizeof (Elf32_External_Lib);
        ++VAR_10)
     {
       Elf32_Lib VAR_12;
       time_t VAR_13;
       char VAR_14[20];
       struct tm *VAR_15;

       VAR_12.l_name = FUNC_0 (VAR_7[VAR_10].l_name);
       VAR_13 = FUNC_0 (VAR_7[VAR_10].l_time_stamp);
       VAR_12.l_checksum = FUNC_0 (VAR_7[VAR_10].l_checksum);
       VAR_12.l_version = FUNC_0 (VAR_7[VAR_10].l_version);
       VAR_12.l_flags = FUNC_0 (VAR_7[VAR_10].l_flags);

       VAR_15 = FUNC_7 (&VAR_13);
       FUNC_10 (VAR_14, sizeof (VAR_14),
   "%04u-%02u-%02uT%02u:%02u:%02u",
   VAR_15->tm_year + 1900, VAR_15->tm_mon + 1, VAR_15->tm_mday,
   VAR_15->tm_hour, VAR_15->tm_min, VAR_15->tm_sec);

       FUNC_8 ("%3lu: ", (unsigned long) VAR_10);
       if (VAR_1)
  FUNC_8 ("%-20s", VAR_12.l_name < VAR_9
     ? VAR_8 + VAR_12.l_name : "<corrupt>");
       else
  FUNC_8 ("%-20.20s", VAR_12.l_name < VAR_9
        ? VAR_8 + VAR_12.l_name : "<corrupt>");
       FUNC_8 (" %s %#010lx %-7ld %-7ld\n", VAR_14, VAR_12.l_checksum,
        VAR_12.l_version, VAR_12.l_flags);
     }

   FUNC_5 (VAR_7);
 }
    }

  return 1;
}
