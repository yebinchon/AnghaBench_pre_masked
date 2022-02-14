
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(void) {
 char *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1, "UTF-8") != 0 &&
     FUNC_1(VAR_1, "US-ASCII") != 0 &&
     FUNC_1(VAR_1, "ANSI_X3.4-1968") != 0 &&
     FUNC_1(VAR_1, "ISO8859-1") != 0 &&
     FUNC_1(VAR_1, "646") != 0 &&
     FUNC_1(VAR_1, "") != 0;
}
