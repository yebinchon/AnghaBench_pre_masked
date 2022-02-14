
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_4)
{
    FUNC_1(VAR_4);
    FUNC_0( "\nAdvanced options :\n");
    FUNC_0( " -b#    : test only function # \n");
    FUNC_0( " -l#    : benchmark functions at that compression level (default : %i)\n", VAR_1);
    FUNC_0( "--zstd= : custom parameter selection. Format same as zstdcli \n");
    FUNC_0( " -P#    : sample compressibility (default : %.1f%%)\n", VAR_0 * 100);
    FUNC_0( " -B#    : sample size (default : %u)\n", (unsigned)VAR_3);
    FUNC_0( " -i#    : iteration loops [1-9](default : %i)\n", VAR_2);
    return 0;
}
