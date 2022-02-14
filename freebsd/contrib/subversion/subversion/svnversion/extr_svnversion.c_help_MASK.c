
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ description; } ;
typedef TYPE_1__ apr_getopt_option_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const**,TYPE_1__ const*,int ,int *) ;

__attribute__((used)) static void
FUNC_4(const apr_getopt_option_t *VAR_2, apr_pool_t *VAR_3)
{
  FUNC_2
    (FUNC_1
     (VAR_1, VAR_3,
      FUNC_0("usage: svnversion [OPTIONS] [WC_PATH [TRAIL_URL]]\n"
        "Subversion working copy identification tool.\n"
        "Type 'svnversion --version' to see the program version.\n"
        "\n"
        "  Produce a compact version identifier for the working copy path\n"
        "  WC_PATH.  TRAIL_URL is the trailing portion of the URL used to\n"
        "  determine if WC_PATH itself is switched (detection of switches\n"
        "  within WC_PATH does not rely on TRAIL_URL).  The version identifier\n"
        "  is written to standard output.  For example:\n"
        "\n"
        "    $ svnversion . /repos/svn/trunk\n"
        "    4168\n"
        "\n"
        "  The version identifier will be a single number if the working\n"
        "  copy is single revision, unmodified, not switched and with\n"
        "  a URL that matches the TRAIL_URL argument.  If the working\n"
        "  copy is unusual the version identifier will be more complex:\n"
        "\n"
        "   4123:4168     mixed revision working copy\n"
        "   4168M         modified working copy\n"
        "   4123S         switched working copy\n"
        "   4123P         partial working copy, from a sparse checkout\n"
        "   4123:4168MS   mixed revision, modified, switched working copy\n"
        "\n"
        "  If WC_PATH is an unversioned path, the program will output\n"
        "  'Unversioned directory' or 'Unversioned file'.  If WC_PATH is\n"
        "  an added or copied or moved path, the program will output\n"
        "  'Uncommitted local addition, copy or move'.\n"
        "\n"
        "  If invoked without arguments WC_PATH will be the current directory.\n"
        "\n"
        "Valid options:\n")));
  while (VAR_2->description)
    {
      const char *VAR_4;
      FUNC_3(&VAR_4, VAR_2, VAR_0, VAR_3);
      FUNC_2(FUNC_1(VAR_1, VAR_3, "  %s\n", VAR_4));
      ++VAR_2;
    }
  FUNC_2(FUNC_1(VAR_1, VAR_3, "\n"));
}
