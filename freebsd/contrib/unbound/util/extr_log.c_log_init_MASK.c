
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *,int,int ) ;
 int * VAR_11 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,char*,char*) ;

void
FUNC_14(const char* VAR_12, int VAR_13, const char* VAR_14)
{
 FILE *VAR_15;
 if(!VAR_6) {
  VAR_6 = 1;
  FUNC_12(&VAR_10, ((void*)0));
  FUNC_3(&VAR_7);
 }
 FUNC_4(&VAR_7);
 if(VAR_8



 ) {
  FUNC_5(&VAR_7);
  FUNC_13(VAR_2, "switching log to %s",
   VAR_13?"syslog":(VAR_12&&VAR_12[0]?VAR_12:"stderr"));
  FUNC_4(&VAR_7);
 }
 if(VAR_8 && VAR_8 != VAR_11) {
  FILE* VAR_16 = VAR_8;
  VAR_8 = ((void*)0);

  FUNC_1(VAR_16);
 }
 if(!VAR_12 || !VAR_12[0]) {
  VAR_8 = VAR_11;
  FUNC_5(&VAR_7);
  return;
 }

 if(VAR_14 && VAR_14[0] && FUNC_11(VAR_12, VAR_14,
  FUNC_10(VAR_14)) == 0)
  VAR_12 += FUNC_10(VAR_14);
 VAR_15 = FUNC_2(VAR_12, "a");
 if(!VAR_15) {
  FUNC_5(&VAR_7);
  FUNC_6("Could not open logfile %s: %s", VAR_12,
   FUNC_9(VAR_4));
  return;
 }


 FUNC_8(VAR_15, ((void*)0), (int)VAR_3, 0);

 VAR_8 = VAR_15;
 FUNC_5(&VAR_7);
}
