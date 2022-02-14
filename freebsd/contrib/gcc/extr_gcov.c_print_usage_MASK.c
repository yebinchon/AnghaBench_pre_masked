
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_2 (int VAR_5)
{
  FILE *VAR_6 = VAR_5 ? VAR_3 : VAR_4;
  int VAR_7 = VAR_5 ? VAR_0 : VAR_1;

  FUNC_1 (VAR_6, "Usage: gcov [OPTION]... SOURCEFILE\n\n");
  FUNC_1 (VAR_6, "Print code coverage information.\n\n");
  FUNC_1 (VAR_6, "  -h, --help                      Print this help, then exit\n");
  FUNC_1 (VAR_6, "  -v, --version                   Print version number, then exit\n");
  FUNC_1 (VAR_6, "  -a, --all-blocks                Show information for every basic block\n");
  FUNC_1 (VAR_6, "  -b, --branch-probabilities      Include branch probabilities in output\n");
  FUNC_1 (VAR_6, "  -c, --branch-counts             Given counts of branches taken\n                                    rather than percentages\n");

  FUNC_1 (VAR_6, "  -n, --no-output                 Do not create an output file\n");
  FUNC_1 (VAR_6, "  -l, --long-file-names           Use long output file names for included\n                                    source files\n");

  FUNC_1 (VAR_6, "  -f, --function-summaries        Output summaries for each function\n");
  FUNC_1 (VAR_6, "  -o, --object-directory DIR|FILE Search for object files in DIR or called FILE\n");
  FUNC_1 (VAR_6, "  -p, --preserve-paths            Preserve all pathname components\n");
  FUNC_1 (VAR_6, "  -u, --unconditional-branches    Show unconditional branch counts too\n");
  FUNC_1 (VAR_6, "\nFor bug reporting instructions, please see:\n%s.\n",
    VAR_2);
  FUNC_0 (VAR_7);
}
