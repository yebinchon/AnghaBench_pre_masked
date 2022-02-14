
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef scalar_t__ TTRACE_XFER_TYPE ;
typedef int TTRACE_ARG_TYPE ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,char*,int) ;

int
FUNC_4 (CORE_ADDR VAR_7, char *VAR_8, int VAR_9, int VAR_10,
     struct mem_attrib *VAR_11,
     struct target_ops *VAR_12)
{
  int VAR_13;

  CORE_ADDR VAR_14 = VAR_7 & -(CORE_ADDR) sizeof (TTRACE_XFER_TYPE);

  int VAR_15
  = (((VAR_7 + VAR_9) - VAR_14) + sizeof (TTRACE_XFER_TYPE) - 1)
  / sizeof (TTRACE_XFER_TYPE);




  TTRACE_XFER_TYPE *VAR_16
    = (TTRACE_XFER_TYPE *) FUNC_1 (VAR_15 * sizeof (TTRACE_XFER_TYPE));

  if (VAR_10)
    {


      if (VAR_14 != VAR_7 || VAR_9 < (int) sizeof (TTRACE_XFER_TYPE))
 {

   VAR_16[0] = FUNC_2 (VAR_1,
       FUNC_0 (VAR_6),
       (TTRACE_ARG_TYPE) VAR_14,
       VAR_4,
       VAR_4);
 }

      if (VAR_15 > 1)
 {
   VAR_16[VAR_15 - 1] = FUNC_2 (VAR_1,
        FUNC_0 (VAR_6),
        ((TTRACE_ARG_TYPE)
     (VAR_14 + (VAR_15 - 1) * sizeof (TTRACE_XFER_TYPE))),
        VAR_4,
        VAR_4);
 }



      FUNC_3 ((char *) VAR_16 + (VAR_7 & (sizeof (TTRACE_XFER_TYPE) - 1)),
       VAR_8,
       VAR_9);



      for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++, VAR_14 += sizeof (TTRACE_XFER_TYPE))
 {
   VAR_5 = 0;
   FUNC_2 (VAR_2,
         FUNC_0 (VAR_6),
         (TTRACE_ARG_TYPE) VAR_14,
         (TTRACE_ARG_TYPE) VAR_16[VAR_13],
         VAR_4);
   if (VAR_5)
     {


       VAR_5 = 0;
       FUNC_2 (VAR_3,
      FUNC_0 (VAR_6),
      (TTRACE_ARG_TYPE) VAR_14,
      (TTRACE_ARG_TYPE) VAR_16[VAR_13],
      VAR_4);
     }
   if (VAR_5)
     return 0;
 }
    }
  else
    {

      for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++, VAR_14 += sizeof (TTRACE_XFER_TYPE))
 {
   VAR_5 = 0;
   VAR_16[VAR_13] = FUNC_2 (VAR_1,
       FUNC_0 (VAR_6),
       (TTRACE_ARG_TYPE) VAR_14,
       VAR_4,
       VAR_4);
   if (VAR_5)
     return 0;
   VAR_0;
 }


      FUNC_3 (VAR_8,
       (char *) VAR_16 + (VAR_7 & (sizeof (TTRACE_XFER_TYPE) - 1)),
       VAR_9);
    }
  return VAR_9;
}
