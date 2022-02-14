
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum argmode { ____Placeholder_argmode } argmode ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(enum argmode VAR_2)
{
 switch (VAR_2) {
 case 130:
  FUNC_1("usage: mandoc [-ac] [-I os=name] "
      "[-K encoding] [-mdoc | -man] [-O options]\n"
      "\t      [-T output] [-W level] [file ...]\n", VAR_1);
  break;
 case 129:
  FUNC_1("usage: man [-acfhklw] [-C file] [-M path] "
      "[-m path] [-S subsection]\n"
      "\t   [[-s] section] name ...\n", VAR_1);
  break;
 case 128:
  FUNC_1("usage: whatis [-afk] [-C file] "
      "[-M path] [-m path] [-O outkey] [-S arch]\n"
      "\t      [-s section] name ...\n", VAR_1);
  break;
 case 131:
  FUNC_1("usage: apropos [-afk] [-C file] "
      "[-M path] [-m path] [-O outkey] [-S arch]\n"
      "\t       [-s section] expression ...\n", VAR_1);
  break;
 }
 FUNC_0((int)VAR_0);
}
