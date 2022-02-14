
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(const char* VAR_3)
{
    FUNC_0(VAR_1);
    FUNC_0( "Usage :\n");
    FUNC_0( "      %s [args] [FILE(s)] [-o file]\n", VAR_3);
    FUNC_0( "\n");
    FUNC_0( "FILE    : a filename\n");
    FUNC_0( "          with no FILE, or when FILE is - , read standard input\n");
    FUNC_0( "Arguments :\n");
    FUNC_0( " -D file: use `file` as Dictionary \n");
    FUNC_0( " -h/-H  : display help/long help and exit\n");
    FUNC_0( " -V     : display Version number and exit\n");
    FUNC_0( " -v     : verbose mode; specify multiple times to increase log level (default:%d)\n", VAR_0);
    FUNC_0( " -q     : suppress warnings; specify twice to suppress errors too\n");



    FUNC_0( "\n");
    FUNC_0( "Benchmark arguments :\n");
    FUNC_0( " -b#    : benchmark file(s), using # compression level (default : %d) \n", VAR_2);
    FUNC_0( " -e#    : test all compression levels from -bX to # (default: %d)\n", VAR_2);
    FUNC_0( " -i#    : minimum evaluation time in seconds (default : 3s)\n");
    FUNC_0( " -B#    : cut file into independent blocks of size # (default: no block)\n");
    return 0;
}
