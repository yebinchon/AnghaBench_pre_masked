
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_7 ;

extern void
FUNC_4(bool VAR_8)
{
 FUNC_1(FUNC_0("Usage: %s [OPTION]... [FILE]...\n"
   "Compress or decompress FILEs in the .xz format.\n\n"),
   VAR_6);



 if (VAR_8)
  FUNC_2(FUNC_0("Mandatory arguments to long options are mandatory "
    "for short options too.\n"));

 if (VAR_8)
  FUNC_2(FUNC_0(" Operation mode:\n"));

 FUNC_2(FUNC_0(
"  -z, --compress      force compression\n"
"  -d, --decompress    force decompression\n"
"  -t, --test          test compressed file integrity\n"
"  -l, --list          list information about .xz files"));

 if (VAR_8)
  FUNC_2(FUNC_0("\n Operation modifiers:\n"));

 FUNC_2(FUNC_0(
"  -k, --keep          keep (don't delete) input files\n"
"  -f, --force         force overwrite of output file and (de)compress links\n"
"  -c, --stdout        write to standard output and don't delete input files"));

 if (VAR_8) {
  FUNC_2(FUNC_0(
"      --single-stream decompress only the first stream, and silently\n"
"                      ignore possible remaining input data"));
  FUNC_2(FUNC_0(
"      --no-sparse     do not create sparse files when decompressing\n"
"  -S, --suffix=.SUF   use the suffix `.SUF' on compressed files\n"
"      --files[=FILE]  read filenames to process from FILE; if FILE is\n"
"                      omitted, filenames are read from the standard input;\n"
"                      filenames must be terminated with the newline character\n"
"      --files0[=FILE] like --files but use the null character as terminator"));
 }

 if (VAR_8) {
  FUNC_2(FUNC_0("\n Basic file format and compression options:\n"));
  FUNC_2(FUNC_0(
"  -F, --format=FMT    file format to encode or decode; possible values are\n"
"                      `auto' (default), `xz', `lzma', and `raw'\n"
"  -C, --check=CHECK   integrity check type: `none' (use with caution),\n"
"                      `crc32', `crc64' (default), or `sha256'"));
  FUNC_2(FUNC_0(
"      --ignore-check  don't verify the integrity check when decompressing"));
 }

 FUNC_2(FUNC_0(
"  -0 ... -9           compression preset; default is 6; take compressor *and*\n"
"                      decompressor memory usage into account before using 7-9!"));

 FUNC_2(FUNC_0(
"  -e, --extreme       try to improve compression ratio by using more CPU time;\n"
"                      does not affect decompressor memory requirements"));

 FUNC_2(FUNC_0(
"  -T, --threads=NUM   use at most NUM threads; the default is 1; set to 0\n"
"                      to use as many threads as there are processor cores"));

 if (VAR_8) {
  FUNC_2(FUNC_0(
"      --block-size=SIZE\n"
"                      start a new .xz block after every SIZE bytes of input;\n"
"                      use this to set the block size for threaded compression"));
  FUNC_2(FUNC_0(
"      --block-list=SIZES\n"
"                      start a new .xz block after the given comma-separated\n"
"                      intervals of uncompressed data"));
  FUNC_2(FUNC_0(
"      --flush-timeout=TIMEOUT\n"
"                      when compressing, if more than TIMEOUT milliseconds has\n"
"                      passed since the previous flush and reading more input\n"
"                      would block, all pending data is flushed out"
  ));
  FUNC_2(FUNC_0(
"      --memlimit-compress=LIMIT\n"
"      --memlimit-decompress=LIMIT\n"
"  -M, --memlimit=LIMIT\n"
"                      set memory usage limit for compression, decompression,\n"
"                      or both; LIMIT is in bytes, % of RAM, or 0 for defaults"));

  FUNC_2(FUNC_0(
"      --no-adjust     if compression settings exceed the memory usage limit,\n"
"                      give an error instead of adjusting the settings downwards"));
 }

 if (VAR_8) {
  FUNC_2(FUNC_0(
"\n Custom filter chain for compression (alternative for using presets):"));
  FUNC_2(FUNC_0(
"\n"
"  --x86[=OPTS]        x86 BCJ filter (32-bit and 64-bit)\n"
"  --powerpc[=OPTS]    PowerPC BCJ filter (big endian only)\n"
"  --ia64[=OPTS]       IA-64 (Itanium) BCJ filter\n"
"  --arm[=OPTS]        ARM BCJ filter (little endian only)\n"
"  --armthumb[=OPTS]   ARM-Thumb BCJ filter (little endian only)\n"
"  --sparc[=OPTS]      SPARC BCJ filter\n"
"                      Valid OPTS for all BCJ filters:\n"
"                        start=NUM  start offset for conversions (default=0)"));
 }

 if (VAR_8)
  FUNC_2(FUNC_0("\n Other options:\n"));

 FUNC_2(FUNC_0(
"  -q, --quiet         suppress warnings; specify twice to suppress errors too\n"
"  -v, --verbose       be verbose; specify twice for even more verbose"));

 if (VAR_8) {
  FUNC_2(FUNC_0(
"  -Q, --no-warn       make warnings not affect the exit status"));
  FUNC_2(FUNC_0(
"      --robot         use machine-parsable messages (useful for scripts)"));
  FUNC_2("");
  FUNC_2(FUNC_0(
"      --info-memory   display the total amount of RAM and the currently active\n"
"                      memory usage limits, and exit"));
  FUNC_2(FUNC_0(
"  -h, --help          display the short help (lists only the basic options)\n"
"  -H, --long-help     display this long help and exit"));
 } else {
  FUNC_2(FUNC_0(
"  -h, --help          display this short help and exit\n"
"  -H, --long-help     display the long help (lists also the advanced options)"));
 }

 FUNC_2(FUNC_0(
"  -V, --version       display the version number and exit"));

 FUNC_2(FUNC_0("\nWith no FILE, or when FILE is -, read standard input.\n"));





 FUNC_1(FUNC_0("Report bugs to <%s> (in English or Finnish).\n"),
   VAR_2);
 FUNC_1(FUNC_0("%s home page: <%s>\n"), VAR_3, VAR_4);






 FUNC_3(VAR_1, VAR_0, VAR_7 != VAR_5);
}
