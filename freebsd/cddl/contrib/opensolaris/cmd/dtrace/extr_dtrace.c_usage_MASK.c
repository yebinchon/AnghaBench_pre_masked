
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 char* VAR_1 ;

__attribute__((used)) static int
FUNC_1(FILE *VAR_2)
{
 static const char VAR_3[] = "[[ predicate ] action ]";

 (void) FUNC_0(VAR_2, "Usage: %s [-32|-64] [-aACeFGhHlqSvVwZ] "
     "[-b bufsz] [-c cmd] [-D name[=def]]\n\t[-I path] [-L path] "
     "[-o output] [-p pid] [-s script] [-U name]\n\t"
     "[-x opt[=val]] [-X a|c|s|t]\n\n"
     "\t[-P provider %s]\n"
     "\t[-m [ provider: ] module %s]\n"
     "\t[-f [[ provider: ] module: ] func %s]\n"
     "\t[-n [[[ provider: ] module: ] func: ] name %s]\n"
     "\t[-i probe-id %s] [ args ... ]\n\n", VAR_1,
     VAR_3, VAR_3, VAR_3, VAR_3, VAR_3);

 (void) FUNC_0(VAR_2, "\tpredicate -> '/' D-expression '/'\n");
 (void) FUNC_0(VAR_2, "\t   action -> '{' D-statements '}'\n");

 (void) FUNC_0(VAR_2, "\n"
     "\t-32 generate 32-bit D programs and ELF files\n"
     "\t-64 generate 64-bit D programs and ELF files\n\n"
     "\t-a  claim anonymous tracing state\n"
     "\t-A  generate driver.conf(4) directives for anonymous tracing\n"
     "\t-b  set trace buffer size\n"
     "\t-c  run specified command and exit upon its completion\n"
     "\t-C  run cpp(1) preprocessor on script files\n"
     "\t-D  define symbol when invoking preprocessor\n"
     "\t-e  exit after compiling request but prior to enabling probes\n"
     "\t-f  enable or list probes matching the specified function name\n"
     "\t-F  coalesce trace output by function\n"
     "\t-G  generate an ELF file containing embedded dtrace program\n"
     "\t-h  generate a header file with definitions for static probes\n"
     "\t-H  print included files when invoking preprocessor\n"
     "\t-i  enable or list probes matching the specified probe id\n"
     "\t-I  add include directory to preprocessor search path\n"
     "\t-l  list probes matching specified criteria\n"
     "\t-L  add library directory to library search path\n"
     "\t-m  enable or list probes matching the specified module name\n"
     "\t-n  enable or list probes matching the specified probe name\n"
     "\t-o  set output file\n"
     "\t-p  grab specified process-ID and cache its symbol tables\n"
     "\t-P  enable or list probes matching the specified provider name\n"
     "\t-q  set quiet mode (only output explicitly traced data)\n"
     "\t-s  enable or list probes according to the specified D script\n"
     "\t-S  print D compiler intermediate code\n"
     "\t-U  undefine symbol when invoking preprocessor\n"
     "\t-v  set verbose mode (report stability attributes, arguments)\n"
     "\t-V  report DTrace API version\n"
     "\t-w  permit destructive actions\n"
     "\t-x  enable or modify compiler and tracing options\n"
     "\t-X  specify ISO C conformance settings for preprocessor\n"
     "\t-Z  permit probe descriptions that match zero probes\n");

 return (VAR_0);
}
