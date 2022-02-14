
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(char * VAR_0) {
 FUNC_0("%s: tests libutil humanize_number function\n", VAR_0);
 FUNC_0("Usage: %s [-nE] [-l num] [-v]\n\n", VAR_0);
 FUNC_0("Options:\n");
 FUNC_0("\t-l num\tSet max length for result; buflen = num + 1\n");
 FUNC_0("\t\t  (NOTE: does not change expected result strings.)\n");
 FUNC_0("\t-n\tInclude negative scale tests, which cause older libutil\n");
 FUNC_0("\t\t  version of function to coredump with assertion failure\n");
 FUNC_0("\t-E\tInclude numbers > 1/2 Exa[byte] which currently fail\n");
 FUNC_0("\t-v\tVerbose - always print summary results\n");
 FUNC_0("\t-h, -?\tShow options\n");
}
