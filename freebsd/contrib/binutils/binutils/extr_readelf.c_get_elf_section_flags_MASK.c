
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buff ;
typedef int bfd_vma ;
struct TYPE_2__ {int e_machine; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,char*,int,int,unsigned long) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static const char *
FUNC_3 (bfd_vma VAR_7)
{
  static char VAR_8[1024];
  char *VAR_9 = VAR_8;
  int VAR_10 = VAR_6 ? 8 : 16;
  int VAR_11, VAR_12 = sizeof (VAR_8) - (VAR_10 + 4 + 1);
  bfd_vma VAR_13 = 0;
  bfd_vma VAR_14 = 0;
  bfd_vma VAR_15 = 0;
  const struct
    {
      const char *str;
      int len;
    }
  VAR_16 [] =
    {
 { "WRITE", 5 },
 { "ALLOC", 5 },
 { "EXEC", 4 },
 { "MERGE", 5 },
 { "STRINGS", 7 },
 { "INFO LINK", 9 },
 { "LINK ORDER", 10 },
 { "OS NONCONF", 10 },
 { "GROUP", 5 },
 { "TLS", 3 }
    };

  if (VAR_4)
    {
      FUNC_1 (VAR_8, "[%*.*lx]: ",
        VAR_10, VAR_10, (unsigned long) VAR_7);
      VAR_9 += VAR_10 + 4;
    }

  while (VAR_7)
    {
      bfd_vma VAR_17;

      VAR_17 = VAR_7 & - VAR_7;
      VAR_7 &= ~ VAR_17;

      if (VAR_4)
 {
   switch (VAR_17)
     {
     case 128: VAR_11 = 0; break;
     case 137: VAR_11 = 1; break;
     case 136: VAR_11 = 2; break;
     case 132: VAR_11 = 3; break;
     case 130: VAR_11 = 4; break;
     case 134: VAR_11 = 5; break;
     case 133: VAR_11 = 6; break;
     case 131: VAR_11 = 7; break;
     case 135: VAR_11 = 8; break;
     case 129: VAR_11 = 9; break;

     default:
       VAR_11 = -1;
       break;
     }

   if (VAR_11 != -1)
     {
       if (VAR_9 != VAR_8 + VAR_10 + 4)
  {
    if (VAR_12 < (10 + 2))
      FUNC_0 ();
    VAR_12 -= 2;
    *VAR_9++ = ',';
    *VAR_9++ = ' ';
  }

       VAR_12 -= VAR_16 [VAR_11].len;
       VAR_9 = FUNC_2 (VAR_9, VAR_16 [VAR_11].str);
     }
   else if (VAR_17 & VAR_1)
     VAR_13 |= VAR_17;
   else if (VAR_17 & VAR_2)
     VAR_14 |= VAR_17;
   else
     VAR_15 |= VAR_17;
 }
      else
 {
   switch (VAR_17)
     {
     case 128: *VAR_9 = 'W'; break;
     case 137: *VAR_9 = 'A'; break;
     case 136: *VAR_9 = 'X'; break;
     case 132: *VAR_9 = 'M'; break;
     case 130: *VAR_9 = 'S'; break;
     case 134: *VAR_9 = 'I'; break;
     case 133: *VAR_9 = 'L'; break;
     case 131: *VAR_9 = 'O'; break;
     case 135: *VAR_9 = 'G'; break;
     case 129: *VAR_9 = 'T'; break;

     default:
       if (VAR_5.e_machine == VAR_0
    && VAR_17 == VAR_3)
  *VAR_9 = 'l';
       else if (VAR_17 & VAR_1)
  {
    *VAR_9 = 'o';
    VAR_7 &= ~ VAR_1;
  }
       else if (VAR_17 & VAR_2)
  {
    *VAR_9 = 'p';
    VAR_7 &= ~ VAR_2;
  }
       else
  *VAR_9 = 'x';
       break;
     }
   VAR_9++;
 }
    }

  if (VAR_4)
    {
      if (VAR_13)
 {
   VAR_12 -= 5 + VAR_10;
   if (VAR_9 != VAR_8 + VAR_10 + 4)
     {
       if (VAR_12 < (2 + 1))
  FUNC_0 ();
       VAR_12 -= 2;
       *VAR_9++ = ',';
       *VAR_9++ = ' ';
     }
   FUNC_1 (VAR_9, "OS (%*.*lx)", VAR_10, VAR_10,
     (unsigned long) VAR_13);
   VAR_9 += 5 + VAR_10;
 }
      if (VAR_14)
 {
   VAR_12 -= 7 + VAR_10;
   if (VAR_9 != VAR_8 + VAR_10 + 4)
     {
       if (VAR_12 < (2 + 1))
  FUNC_0 ();
       VAR_12 -= 2;
       *VAR_9++ = ',';
       *VAR_9++ = ' ';
     }
   FUNC_1 (VAR_9, "PROC (%*.*lx)", VAR_10, VAR_10,
     (unsigned long) VAR_14);
   VAR_9 += 7 + VAR_10;
 }
      if (VAR_15)
 {
   VAR_12 -= 10 + VAR_10;
   if (VAR_9 != VAR_8 + VAR_10 + 4)
     {
       if (VAR_12 < (2 + 1))
  FUNC_0 ();
       VAR_12 -= 2;
       *VAR_9++ = ',';
       *VAR_9++ = ' ';
     }
   FUNC_1 (VAR_9, "UNKNOWN (%*.*lx)", VAR_10, VAR_10,
     (unsigned long) VAR_15);
   VAR_9 += 10 + VAR_10;
 }
    }

  *VAR_9 = '\0';
  return VAR_8;
}
