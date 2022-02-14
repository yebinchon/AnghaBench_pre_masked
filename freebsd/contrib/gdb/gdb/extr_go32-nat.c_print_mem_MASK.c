
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2 (unsigned long VAR_0, const char *VAR_1, int VAR_2)
{
  if (VAR_0 != 0xffffffffUL)
    {
      if (VAR_2)
 VAR_0 <<= 12;
      FUNC_1 (VAR_1);
      if (VAR_0 > 1024)
 {
   FUNC_0 ("%lu KB", VAR_0 >> 10);
   if (VAR_0 > 1024 * 1024)
     FUNC_0 (" (%lu MB)", VAR_0 >> 20);
 }
      else
 FUNC_0 ("%lu Bytes", VAR_0);
      FUNC_1 ("\n");
    }
}
