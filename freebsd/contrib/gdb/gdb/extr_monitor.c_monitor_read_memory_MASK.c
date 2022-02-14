
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct re_registers {int * end; } ;
struct TYPE_3__ {char* term_cmd; char* resp_delim; scalar_t__ term; int cmdb; } ;
struct TYPE_4__ {int flags; TYPE_1__ getmem; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (struct re_registers*,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,char*,int,int,char*,int ) ;
 int FUNC_9 (scalar_t__,char*,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,int,...) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *,char*,int,int ,int,struct re_registers*) ;
 scalar_t__ VAR_10 ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*,char*) ;
 unsigned int FUNC_18 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_19 (CORE_ADDR VAR_11, char *VAR_12, int VAR_13)
{
  unsigned int VAR_14;
  char VAR_15[512];
  char *VAR_16, *VAR_17;
  int VAR_18;
  int VAR_19;
  CORE_ADDR VAR_20;

  if (VAR_13 <= 0)
    {
      FUNC_7 ("Zero length call to monitor_read_memory\n");
      return 0;
    }

  FUNC_7 ("MON read block ta(%s) ha(%lx) %d\n",
   FUNC_13 (VAR_11), (long) VAR_12, VAR_13);

  if (VAR_5->flags & VAR_0)
    VAR_11 = FUNC_0 (VAR_11);

  if (VAR_5->flags & VAR_4)
    return FUNC_12 (VAR_11, VAR_12, VAR_13);

  VAR_13 = FUNC_6 (VAR_13, 16);






  VAR_20 = (VAR_5->flags & VAR_1)
    ? VAR_11 : VAR_11 & ~0x0f;


  if (((VAR_11 ^ (VAR_11 + VAR_13 - 1)) & ~0xf) != 0)
    VAR_13 = ((VAR_11 + VAR_13) & ~0xf) - VAR_11;



  if (VAR_5->flags & VAR_3)
    FUNC_11 (VAR_5->getmem.cmdb, VAR_11, VAR_11 + VAR_13);
  else if (VAR_5->flags & VAR_2)
    FUNC_11 (VAR_5->getmem.cmdb, VAR_20);
  else
    FUNC_11 (VAR_5->getmem.cmdb, VAR_11, VAR_13);






  if (VAR_5->getmem.term)
    {
      VAR_18 = FUNC_9 (VAR_5->getmem.term, VAR_15, sizeof VAR_15);

      if (VAR_18 <= 0)
 FUNC_8 ("monitor_read_memory",
         "excessive response from monitor",
         VAR_11, VAR_18, VAR_15, 0);

      if (VAR_5->getmem.term_cmd)
 {
   FUNC_15 (VAR_9, VAR_5->getmem.term_cmd,
   FUNC_16 (VAR_5->getmem.term_cmd));
   FUNC_10 (((void*)0), 0);
 }
    }
  else
    VAR_18 = FUNC_10 (VAR_15, sizeof VAR_15);

  VAR_16 = VAR_15;





  if (VAR_5->getmem.resp_delim)
    {
      int VAR_21, VAR_22;
      struct re_registers VAR_23;
      FUNC_7 ("MON getmem.resp_delim %s\n", VAR_5->getmem.resp_delim);

      FUNC_5 (&VAR_23, 0, sizeof (struct re_registers));
      VAR_22 = FUNC_16 (VAR_16);
      VAR_21 = FUNC_14 (&VAR_7, VAR_16, VAR_22, 0, VAR_22,
     &VAR_23);

      if (VAR_21 < 0)
 FUNC_8 ("monitor_read_memory",
         "bad response from monitor",
         VAR_11, VAR_18, VAR_15, 0);

      VAR_16 += VAR_23.end[0];
    }
  FUNC_7 ("MON scanning  %d ,%lx '%s'\n", VAR_13, (long) VAR_16, VAR_16);
  if (VAR_5->flags & VAR_2)
    {
      char VAR_24;
      int VAR_25 = 0;
      VAR_19 = VAR_13;
      VAR_24 = *VAR_16;


      while (!(VAR_24 == '\000' || VAR_24 == '\n' || VAR_24 == '\r') && VAR_19 > 0)
 {
   if (FUNC_4 (VAR_24))
     {
       if ((VAR_20 >= VAR_11) && (VAR_19 > 0))
  {
    VAR_14 = FUNC_3 (VAR_24) * 16 + FUNC_3 (*(VAR_16 + 1));
    *VAR_12++ = VAR_14;
    if (VAR_8 || VAR_10)
      FUNC_2 (VAR_6, "[%02x]", VAR_14);
    --VAR_19;
    VAR_25++;
  }
       ++VAR_20;
       ++VAR_16;
     }
   ++VAR_16;
   VAR_24 = *VAR_16;
 }
      if (VAR_25 == 0)
 FUNC_1 ("Failed to read via monitor");
      if (VAR_8 || VAR_10)
 FUNC_2 (VAR_6, "\n");
      return VAR_25;
    }
  FUNC_7 ("MON scanning bytes\n");

  for (VAR_19 = VAR_13; VAR_19 > 0; VAR_19--)
    {


      while (1)
 {
   if (FUNC_4 (*VAR_16))
     break;

   if (*VAR_16 == '\000' || *VAR_16 == '\n' || *VAR_16 == '\r')
     FUNC_8 ("monitor_read_memory",
      "badly terminated response from monitor",
      VAR_11, VAR_18, VAR_15, 0);
   VAR_16++;
 }

      VAR_14 = FUNC_18 (VAR_16, &VAR_17, 16);

      if (VAR_14 == 0 && VAR_16 == VAR_17)
 FUNC_8 ("monitor_read_memory",
         "bad value from monitor",
         VAR_11, VAR_18, VAR_15, 0);

      *VAR_12++ = VAR_14;

      if (VAR_19 == 1)
 break;

      VAR_16 = VAR_17;
    }

  return VAR_13;
}
