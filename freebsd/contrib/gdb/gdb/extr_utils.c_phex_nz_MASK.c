
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l ;
typedef int ULONGEST ;


 char* FUNC_0 () ;
 int FUNC_1 (char*,char*,unsigned short,...) ;
 int VAR_0 ;

char *
FUNC_2 (ULONGEST VAR_1, int VAR_2)
{
  char *VAR_3;
  switch (VAR_2)
    {
    case 8:
      {
 unsigned long VAR_4 = (unsigned long) (VAR_1 >> VAR_0);
 VAR_3 = FUNC_0 ();
 if (VAR_4 == 0)
   FUNC_1 (VAR_3, "%lx", (unsigned long) (VAR_1 & 0xffffffff));
 else
   FUNC_1 (VAR_3, "%lx%08lx", VAR_4, (unsigned long) (VAR_1 & 0xffffffff));
 break;
      }
    case 4:
      VAR_3 = FUNC_0 ();
      FUNC_1 (VAR_3, "%lx", (unsigned long) VAR_1);
      break;
    case 2:
      VAR_3 = FUNC_0 ();
      FUNC_1 (VAR_3, "%x", (unsigned short) (VAR_1 & 0xffff));
      break;
    default:
      VAR_3 = FUNC_2 (VAR_1, sizeof (VAR_1));
      break;
    }
  return VAR_3;
}
