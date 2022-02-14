
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,char*) ;
 size_t FUNC_4 (char const*,int,size_t*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char const*,int,int,int ) ;
 char* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char const*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*,char*,...) ;
 int VAR_13 ;
 size_t FUNC_12 (char const*,int,size_t*,int) ;
 size_t FUNC_13 (char const*,int,size_t*,int) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_14 (char const *VAR_16, char const *VAR_17, int VAR_18)
{
  if (VAR_11)
    FUNC_11 ("%s%c", VAR_3, VAR_18 & VAR_4);
  if (VAR_12)
    {
      FUNC_9 (VAR_16);
      VAR_15 = FUNC_1 (VAR_15, 1);
      FUNC_10 (VAR_15, VAR_18);
      VAR_6 = VAR_17;
    }
  if (VAR_10)
    {
      uintmax_t VAR_19 = FUNC_1 (VAR_14, VAR_16 - VAR_0);



      FUNC_10 (VAR_19, VAR_18);
    }
  if (VAR_9)
    {
      size_t VAR_20;
      size_t VAR_21;
      while ((VAR_21 = FUNC_4) (VAR_16, VAR_17 - VAR_16, &VAR_20, 1))
   != (size_t) -1)
        {
   char const *VAR_22 = VAR_16 + VAR_21;
   if (VAR_22 == VAR_17)
     break;
   if (VAR_20 == 0)
     break;
   if(VAR_1)
     FUNC_11("\33[%sm", VAR_5);
   FUNC_8(VAR_22, sizeof (char), VAR_20, VAR_13);
   if(VAR_1)
     FUNC_7("\33[00m", VAR_13);
   FUNC_7("\n", VAR_13);
   VAR_16 = VAR_22 + VAR_20;
        }
      VAR_7 = VAR_17;
      if(VAR_8)
 FUNC_6(VAR_13);
      return;
    }
  if (VAR_1)
    {
      size_t VAR_23;
      size_t VAR_24;
      while (VAR_17-VAR_16 && (VAR_24 = FUNC_4) (VAR_16, VAR_17 - VAR_16, &VAR_23, 1))
      != (size_t) -1)
 {
   char const *VAR_25 = VAR_16 + VAR_24;

   if (VAR_25 == VAR_17)
     break;

   if (VAR_23 == 0)
     break;
   FUNC_8 (VAR_16, sizeof (char), VAR_24, VAR_13);
   FUNC_11 ("\33[%sm", VAR_5);
   FUNC_8 (VAR_25, sizeof (char), VAR_23, VAR_13);
   FUNC_7 ("\33[00m", VAR_13);
   VAR_16 = VAR_25 + VAR_23;
 }
      FUNC_7 ("\33[K", VAR_13);
    }
  FUNC_8 (VAR_16, 1, VAR_17 - VAR_16, VAR_13);
  if (FUNC_5 (VAR_13))
    FUNC_3 (0, VAR_2, FUNC_0("writing output"));
  VAR_7 = VAR_17;
  if (VAR_8)
    FUNC_6 (VAR_13);
}
