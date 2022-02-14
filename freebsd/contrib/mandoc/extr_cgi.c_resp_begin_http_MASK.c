
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(int VAR_1, const char *VAR_2)
{

 if (200 != VAR_1)
  FUNC_1("Status: %d %s\r\n", VAR_1, VAR_2);

 FUNC_1("Content-Type: text/html; charset=utf-8\r\n"
      "Cache-Control: no-cache\r\n"
      "Pragma: no-cache\r\n"
      "\r\n");

 FUNC_0(VAR_0);
}
