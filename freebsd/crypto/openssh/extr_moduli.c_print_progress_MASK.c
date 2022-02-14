
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(unsigned long VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 static time_t VAR_4, VAR_5;
 time_t VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 double VAR_13;
 char *VAR_14;

 VAR_6 = FUNC_4();
 if (VAR_4 == 0) {
  VAR_4 = VAR_5 = VAR_6;
  return;
 }

 if (VAR_6 - VAR_5 < 5 * 60)
  return;
 VAR_5 = VAR_6;
 VAR_7 = VAR_6 - VAR_4;
 VAR_9 = VAR_2 - VAR_1;
 VAR_10 = VAR_3 - VAR_2;
 VAR_8 = VAR_3 - VAR_1;
 VAR_13 = (double)VAR_7 / VAR_9;

 FUNC_5(&VAR_6);
 if (VAR_3 == VAR_0) {
  FUNC_3("%.24s processed %lu in %s", FUNC_0(&VAR_6),
      VAR_9, FUNC_1(VAR_7));
  return;
 }
 VAR_11 = 100 * VAR_9 / VAR_8;
 VAR_12 = VAR_13 * VAR_10;
 VAR_14 = FUNC_6(FUNC_1(VAR_12));
 FUNC_3("%.24s processed %lu of %lu (%lu%%) in %s, ETA %s",
     FUNC_0(&VAR_6), VAR_9, VAR_8, VAR_11,
     FUNC_1(VAR_7), VAR_14);
 FUNC_2(VAR_14);
}
