
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 char FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_1 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_11 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (size_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 char** VAR_8 ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;

const char *
FUNC_17 (rtx VAR_9, rtx VAR_10)
{
  enum rtx_code VAR_11, VAR_12;
  bool VAR_13;

  VAR_11 = FUNC_6 (VAR_9);
  VAR_12 = FUNC_6 (VAR_10);
  VAR_13 = (FUNC_8 (FUNC_7 (VAR_9)) == 8);

  if (VAR_13 && FUNC_15 (VAR_9, VAR_10))
    return "#";

  if ((VAR_12 == VAR_4 && FUNC_9 (FUNC_12 (VAR_10)))
      || (!VAR_5 && VAR_10 == FUNC_1 (FUNC_7 (VAR_9))))
    {
      if (VAR_11 == VAR_4)
 {
   if (FUNC_9 (FUNC_12 (VAR_9)))
     return "move\t%0,%z1";

   if (FUNC_11 (FUNC_12 (VAR_9)))
     return "mt%0\t%z1";

   if (FUNC_4 (FUNC_12 (VAR_9)))
     {
       static char VAR_14[] = "mt__\t%z1,%q0";
       VAR_14[2] = VAR_8[FUNC_12 (VAR_9)][4];
       VAR_14[3] = VAR_8[FUNC_12 (VAR_9)][5];
       return VAR_14;
     }

   if (FUNC_5 (FUNC_12 (VAR_9)))
     return (VAR_13 ? "dmtc1\t%z1,%0" : "mtc1\t%z1,%0");

   if (FUNC_0 (FUNC_12 (VAR_9)))
     {
       static char VAR_15[] = "dmtc_\t%z1,%0";

       VAR_15[4] = FUNC_3 (FUNC_12 (VAR_9));
       return (VAR_13 ? VAR_15 : VAR_15 + 1);
     }
 }
      if (VAR_11 == VAR_3)
 return (VAR_13 ? "sd\t%z1,%0" : "sw\t%z1,%0");
    }
  if (VAR_11 == VAR_4 && FUNC_9 (FUNC_12 (VAR_9)))
    {
      if (VAR_12 == VAR_4)
 {
   if (FUNC_4 (FUNC_12 (VAR_10)))
     {
       static char VAR_16[] = "mf__\t%0,%q1";
       VAR_16[2] = VAR_8[FUNC_12 (VAR_10)][4];
       VAR_16[3] = VAR_8[FUNC_12 (VAR_10)][5];
       return VAR_16;
     }

   if (FUNC_13 (FUNC_12 (VAR_10)) && VAR_2)
     return "lui\t%0,0x3f80\n\tmovf\t%0,%.,%1";

   if (FUNC_5 (FUNC_12 (VAR_10)))
     return (VAR_13 ? "dmfc1\t%0,%1" : "mfc1\t%0,%1");

   if (FUNC_0 (FUNC_12 (VAR_10)))
     {
       static char VAR_17[] = "dmfc_\t%0,%1";

       VAR_17[4] = FUNC_3 (FUNC_12 (VAR_10));
       return (VAR_13 ? VAR_17 : VAR_17 + 1);
     }
 }

      if (VAR_12 == VAR_3)
 return (VAR_13 ? "ld\t%0,%1" : "lw\t%0,%1");

      if (VAR_12 == VAR_0)
 {


   if (!VAR_5)
     return "li\t%0,%1\t\t\t# %X1";

   if (FUNC_10 (VAR_10) >= 0 && FUNC_10 (VAR_10) <= 0xffff)
     return "li\t%0,%1";

   if (FUNC_10 (VAR_10) < 0 && FUNC_10 (VAR_10) >= -0xffff)
     return "#";
 }

      if (VAR_12 == VAR_1)
 return "lui\t%0,%h1";

      if (FUNC_2 (VAR_10))
 return "move\t%0,%1";

      if (FUNC_16 (VAR_10, VAR_7))
 return (VAR_13 ? "dla\t%0,%1" : "la\t%0,%1");
    }
  if (VAR_12 == VAR_4 && FUNC_5 (FUNC_12 (VAR_10)))
    {
      if (VAR_11 == VAR_4 && FUNC_5 (FUNC_12 (VAR_9)))
 {
   if (FUNC_7 (VAR_9) == VAR_6)
     return "mov.ps\t%0,%1";
   else
     return (VAR_13 ? "mov.d\t%0,%1" : "mov.s\t%0,%1");
 }

      if (VAR_11 == VAR_3)
 return (VAR_13 ? "sdc1\t%1,%0" : "swc1\t%1,%0");
    }
  if (VAR_11 == VAR_4 && FUNC_5 (FUNC_12 (VAR_9)))
    {
      if (VAR_12 == VAR_3)
 return (VAR_13 ? "ldc1\t%0,%1" : "lwc1\t%0,%1");
    }
  if (VAR_11 == VAR_4 && FUNC_0 (FUNC_12 (VAR_9)) && VAR_12 == VAR_3)
    {
      static char VAR_18[] = "l_c_\t%0,%1";

      VAR_18[1] = (VAR_13 ? 'd' : 'w');
      VAR_18[3] = FUNC_3 (FUNC_12 (VAR_9));
      return VAR_18;
    }
  if (VAR_11 == VAR_3 && VAR_12 == VAR_4 && FUNC_0 (FUNC_12 (VAR_10)))
    {
      static char VAR_19[] = "s_c_\t%1,%0";

      VAR_19[1] = (VAR_13 ? 'd' : 'w');
      VAR_19[3] = FUNC_3 (FUNC_12 (VAR_10));
      return VAR_19;
    }
  FUNC_14 ();
}
