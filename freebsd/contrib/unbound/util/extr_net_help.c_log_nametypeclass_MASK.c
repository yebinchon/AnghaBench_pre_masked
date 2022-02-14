
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int t ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;
typedef int c ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* _name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char const*,char*,char const*,char const*) ;
 TYPE_2__* FUNC_2 (int ,int) ;
 int VAR_7 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_8 ;

void
FUNC_5(enum verbosity_value VAR_9, const char* VAR_10, uint8_t* VAR_11,
 uint16_t VAR_12, uint16_t VAR_13)
{
 char VAR_14[VAR_0+1];
 char VAR_15[12], VAR_16[12];
 const char *VAR_17, *VAR_18;
 if(VAR_8 < VAR_9)
  return;
 FUNC_0(VAR_11, VAR_14);
 if(VAR_12 == VAR_6) VAR_17 = "TSIG";
 else if(VAR_12 == VAR_3) VAR_17 = "IXFR";
 else if(VAR_12 == VAR_2) VAR_17 = "AXFR";
 else if(VAR_12 == VAR_5) VAR_17 = "MAILB";
 else if(VAR_12 == VAR_4) VAR_17 = "MAILA";
 else if(VAR_12 == VAR_1) VAR_17 = "ANY";
 else if(FUNC_3(VAR_12) && FUNC_3(VAR_12)->_name)
  VAR_17 = FUNC_3(VAR_12)->_name;
 else {
  FUNC_4(VAR_15, sizeof(VAR_15), "TYPE%d", (int)VAR_12);
  VAR_17 = VAR_15;
 }
 if(FUNC_2(VAR_7, (int)VAR_13) &&
  FUNC_2(VAR_7, (int)VAR_13)->name)
  VAR_18 = FUNC_2(VAR_7, (int)VAR_13)->name;
 else {
  FUNC_4(VAR_16, sizeof(VAR_16), "CLASS%d", (int)VAR_13);
  VAR_18 = VAR_16;
 }
 FUNC_1("%s %s %s %s", VAR_10, VAR_14, VAR_17, VAR_18);
}
