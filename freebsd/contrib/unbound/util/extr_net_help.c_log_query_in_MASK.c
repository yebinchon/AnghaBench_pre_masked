
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int t ;
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
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char const*,char*,char const*,char const*) ;
 int FUNC_2 (char*,char const*,char*,char const*,char const*) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int VAR_8 ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int,char*,int) ;

void
FUNC_6(const char* VAR_9, uint8_t* VAR_10, uint16_t VAR_11, uint16_t VAR_12)
{
 char VAR_13[VAR_0+1];
 char VAR_14[12], VAR_15[12];
 const char *VAR_16, *VAR_17;
 FUNC_0(VAR_10, VAR_13);
 if(VAR_11 == VAR_6) VAR_16 = "TSIG";
 else if(VAR_11 == VAR_3) VAR_16 = "IXFR";
 else if(VAR_11 == VAR_2) VAR_16 = "AXFR";
 else if(VAR_11 == VAR_5) VAR_16 = "MAILB";
 else if(VAR_11 == VAR_4) VAR_16 = "MAILA";
 else if(VAR_11 == VAR_1) VAR_16 = "ANY";
 else if(FUNC_4(VAR_11) && FUNC_4(VAR_11)->_name)
  VAR_16 = FUNC_4(VAR_11)->_name;
 else {
  FUNC_5(VAR_14, sizeof(VAR_14), "TYPE%d", (int)VAR_11);
  VAR_16 = VAR_14;
 }
 if(FUNC_3(VAR_8, (int)VAR_12) &&
  FUNC_3(VAR_8, (int)VAR_12)->name)
  VAR_17 = FUNC_3(VAR_8, (int)VAR_12)->name;
 else {
  FUNC_5(VAR_15, sizeof(VAR_15), "CLASS%d", (int)VAR_12);
  VAR_17 = VAR_15;
 }
 if(VAR_7)
  FUNC_2("%s %s %s %s", VAR_9, VAR_13, VAR_16, VAR_17);
 else FUNC_1("%s %s %s %s", VAR_9, VAR_13, VAR_16, VAR_17);
}
