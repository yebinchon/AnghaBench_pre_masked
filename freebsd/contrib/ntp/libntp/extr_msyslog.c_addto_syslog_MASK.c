
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*,...) ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char const* VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int ) ;
 int FUNC_6 (int,char*,char const*) ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;

void
FUNC_7(
 int VAR_13,
 const char * VAR_14
 )
{
 static char const * VAR_15;
 static char const * VAR_16;
 const char VAR_17[] = "\n";
 const char VAR_18[] = "";
 FILE * VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 const char * VAR_23;
 const char * VAR_24;


 if (VAR_8 != VAR_15) {
  VAR_15 = VAR_8;
  VAR_16 = FUNC_5(VAR_8, VAR_0);
  if (VAR_16 != ((void*)0))
   VAR_16++;
  else
   VAR_16 = VAR_8;
 }

 VAR_20 = VAR_6;
 VAR_21 = VAR_1;

 if (VAR_12)
  FUNC_6(VAR_13, "%s", VAR_14);
 else

  if (VAR_11 != ((void*)0))
   VAR_21 = VAR_3;
  else
   VAR_20 = VAR_3;




 if (!(VAR_21 || VAR_20))
  return;


 if (VAR_5)
  VAR_24 = FUNC_3();
 else
  VAR_24 = ((void*)0);
 if (VAR_7 || VAR_21)
  VAR_22 = FUNC_2();
 else
  VAR_22 = -1;


 if ('\n' != VAR_14[FUNC_4(VAR_14) - 1])
  VAR_23 = VAR_17;
 else
  VAR_23 = VAR_18;

 if (VAR_20) {
  VAR_19 = (VAR_13 <= VAR_2)
    ? VAR_9
    : VAR_10;
  if (VAR_5)
   FUNC_1(VAR_19, "%s ", VAR_24);
  if (VAR_7)
   FUNC_1(VAR_19, "%s[%d]: ", VAR_16, VAR_22);
  FUNC_1(VAR_19, "%s%s", VAR_14, VAR_23);
  FUNC_0(VAR_19);
 }

 if (VAR_21) {
  if (VAR_5)
   FUNC_1(VAR_11, "%s ", VAR_24);
  FUNC_1(VAR_11, "%s[%d]: %s%s", VAR_16, VAR_22, VAR_14,
   VAR_23);
  FUNC_0(VAR_11);
 }
}
