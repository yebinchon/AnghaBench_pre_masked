
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0)
{

 FUNC_0("Usage: %s [-h] [-f <FD>] [--] <binary> [<args>]\n"
  "\n"
  "Options:\n"
  "  -h        Display this help message\n"
  "  -p        Search in PATH for named binary\n"
  "  -f <FD>   Execute <FD> instead of searching for <binary>\n"
  "  --        End of RTLD options\n"
  "  <binary>  Name of process to execute\n"
  "  <args>    Arguments to the executed process\n", VAR_0);
}
