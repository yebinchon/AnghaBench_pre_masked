
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(
      char *VAR_1
      )
{
  FUNC_0(VAR_0, "usage: %s [-n] [-f] [-l] [-t] [-i] [-o] [-d <drift_file>] [-D <input delay>] <device>\n", VAR_1);
 FUNC_0(VAR_0, "\t-n              do not change time\n");
 FUNC_0(VAR_0, "\t-i              interactive\n");
 FUNC_0(VAR_0, "\t-t              trace (print all datagrams)\n");
 FUNC_0(VAR_0, "\t-f              print all databits (includes PTB private data)\n");
 FUNC_0(VAR_0, "\t-l              print loop filter debug information\n");
 FUNC_0(VAR_0, "\t-o              print offet average for current minute\n");
 FUNC_0(VAR_0, "\t-Y              make internal Y2K checks then exit\n");
 FUNC_0(VAR_0, "\t-d <drift_file> specify alternate drift file\n");
 FUNC_0(VAR_0, "\t-D <input delay>specify delay from input edge to processing in micro seconds\n");
}
