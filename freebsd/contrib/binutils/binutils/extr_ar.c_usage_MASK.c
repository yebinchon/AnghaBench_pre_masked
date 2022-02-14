
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (char*,int *) ;
 char* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_5)
{
  FILE *VAR_6;

  VAR_6 = VAR_5 ? VAR_4 : VAR_3;

  if (! VAR_1)
    {

      FUNC_2 (VAR_6, FUNC_0("Usage: %s [emulation options] [-]{dmpqrstx}[abcfilNoPsSuvV] [member-name] [count] archive-file file...\n"),
        VAR_2);

      FUNC_2 (VAR_6, FUNC_0("       %s -M [<mri-script]\n"), VAR_2);
      FUNC_2 (VAR_6, FUNC_0(" commands:\n"));
      FUNC_2 (VAR_6, FUNC_0("  d            - delete file(s) from the archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  m[ab]        - move file(s) in the archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  p            - print file(s) found in the archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  q[f]         - quick append file(s) to the archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  r[ab][f][u]  - replace existing or insert new file(s) into the archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  t            - display contents of archive\n"));
      FUNC_2 (VAR_6, FUNC_0("  x[o]         - extract file(s) from the archive\n"));
      FUNC_2 (VAR_6, FUNC_0(" command specific modifiers:\n"));
      FUNC_2 (VAR_6, FUNC_0("  [a]          - put file(s) after [member-name]\n"));
      FUNC_2 (VAR_6, FUNC_0("  [b]          - put file(s) before [member-name] (same as [i])\n"));
      FUNC_2 (VAR_6, FUNC_0("  [N]          - use instance [count] of name\n"));
      FUNC_2 (VAR_6, FUNC_0("  [f]          - truncate inserted file names\n"));
      FUNC_2 (VAR_6, FUNC_0("  [P]          - use full path names when matching\n"));
      FUNC_2 (VAR_6, FUNC_0("  [o]          - preserve original dates\n"));
      FUNC_2 (VAR_6, FUNC_0("  [u]          - only replace files that are newer than current archive contents\n"));
      FUNC_2 (VAR_6, FUNC_0(" generic modifiers:\n"));
      FUNC_2 (VAR_6, FUNC_0("  [c]          - do not warn if the library had to be created\n"));
      FUNC_2 (VAR_6, FUNC_0("  [s]          - create an archive index (cf. ranlib)\n"));
      FUNC_2 (VAR_6, FUNC_0("  [S]          - do not build a symbol table\n"));
      FUNC_2 (VAR_6, FUNC_0("  [v]          - be verbose\n"));
      FUNC_2 (VAR_6, FUNC_0("  [V]          - display the version number\n"));
      FUNC_2 (VAR_6, FUNC_0("  @<file>      - read options from <file>\n"));

      FUNC_1 (VAR_6);
    }
  else
    {

      FUNC_2 (VAR_6, FUNC_0("Usage: %s [options] archive\n"), VAR_2);
      FUNC_2 (VAR_6, FUNC_0(" Generate an index to speed access to archives\n"));
      FUNC_2 (VAR_6, FUNC_0(" The options are:\n  @<file>                      Read options from <file>\n  -h --help                    Print this help message\n  -V --version                 Print version information\n"));



    }

  FUNC_3 (VAR_2, VAR_6);

  if (VAR_0[0] && VAR_5)
    FUNC_2 (VAR_6, FUNC_0("Report bugs to %s\n"), VAR_0);

  FUNC_4 (VAR_5 ? 0 : 1);
}
