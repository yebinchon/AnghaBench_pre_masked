
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_2;
 FUNC_0(VAR_0, "%s (len = %lu)", VAR_1, (unsigned long)VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++) {
  if ((VAR_5 & 15) == 0) {
   FUNC_0(VAR_0, "\n%08lX  ", (unsigned long)VAR_5);
  } else if ((VAR_5 & 7) == 0) {
   FUNC_0(VAR_0, " ");
  }
  FUNC_0(VAR_0, " %02x", VAR_4[VAR_5]);
 }
 FUNC_0(VAR_0, "\n");
}
