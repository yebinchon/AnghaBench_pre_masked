
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char* VAR_0)
{
    FUNC_0( "Usage :\n");
    FUNC_0( "      %s [args]\n", VAR_0);
    FUNC_0( "\n");
    FUNC_0( "Arguments :\n");
    FUNC_0( " -p<path> : select output path (default:stdout)\n");
    FUNC_0( "                in multiple files mode this should be a directory\n");
    FUNC_0( " -o<path> : select path to output original file (default:no output)\n");
    FUNC_0( "                in multiple files mode this should be a directory\n");
    FUNC_0( " -s#      : select seed (default:random based on time)\n");
    FUNC_0( " -n#      : number of files to generate (default:1)\n");
    FUNC_0( " -t       : activate test mode (test files against libzstd instead of outputting them)\n");
    FUNC_0( " -T#      : length of time to run tests for\n");
    FUNC_0( " -v       : increase verbosity level (default:0, max:7)\n");
    FUNC_0( " -h/H     : display help/long help and exit\n");
}
