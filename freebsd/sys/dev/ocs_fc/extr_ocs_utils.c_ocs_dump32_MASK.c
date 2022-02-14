
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ocs_os_handle_t ;
typedef int linebuf ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,int,char*,...) ;

void
FUNC_4(uint32_t VAR_0, ocs_os_handle_t VAR_1, const char *VAR_2, void *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = VAR_4 / sizeof(uint32_t);
 uint32_t VAR_6;
 uint32_t VAR_7 = 8;
 uint32_t VAR_8;
 uint32_t *VAR_9;
 char *VAR_10;
 uint32_t VAR_11 = 0;
 char VAR_12[200];
 char *VAR_13 = VAR_12;

 if (!FUNC_1(VAR_0))
  return;

 if (VAR_2)
  FUNC_2(VAR_1, "%s\n", VAR_2);

 VAR_9 = VAR_3;
 while (VAR_5 > 0) {
  VAR_13 = VAR_12;
  VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "%08X:  ", VAR_11);

  VAR_8 = VAR_5;
  if (VAR_8 > VAR_7)
   VAR_8 = VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6 ++)
   VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "%08X ", VAR_9[VAR_6]);

  for (; VAR_6 < VAR_7; VAR_6 ++)
   VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "%8s ", "");

  VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "    ");
  VAR_10 = (char*)VAR_9;
  for (VAR_6 = 0; VAR_6 < VAR_8*sizeof(uint32_t); VAR_6 ++)
   VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "%c", FUNC_0(VAR_10[VAR_6]) ? VAR_10[VAR_6] : '.');
  VAR_13 += FUNC_3(VAR_13, sizeof(VAR_12) - (VAR_13-VAR_12), "\n");

  FUNC_2(VAR_1, "%s", VAR_12);

  VAR_9 += VAR_8;
  VAR_5 -= VAR_8;
  VAR_11 += VAR_8*sizeof(uint32_t);
 }
}
