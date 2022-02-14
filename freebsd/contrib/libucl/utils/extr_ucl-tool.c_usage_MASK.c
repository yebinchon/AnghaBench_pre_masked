
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(const char *VAR_0, FILE *VAR_1) {
  FUNC_0(VAR_1, "Usage: %s [--help] [-i|--in file] [-o|--out file]\n", VAR_0);
  FUNC_0(VAR_1, "    [-s|--schema file] [-f|--format format]\n\n");
  FUNC_0(VAR_1, "  --help   - print this message and exit\n");
  FUNC_0(VAR_1, "  --in     - specify input filename "
          "(default: standard input)\n");
  FUNC_0(VAR_1, "  --out    - specify output filename "
          "(default: standard output)\n");
  FUNC_0(VAR_1, "  --schema - specify schema file for validation\n");
  FUNC_0(VAR_1, "  --format - output format. Options: ucl (default), "
          "json, compact_json, yaml, msgpack\n");
}
