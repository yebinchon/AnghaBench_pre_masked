
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 double FUNC_3 (double) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;

__attribute__((used)) static void
FUNC_4(void)
{

 (void)FUNC_1("\n--- %s ping6 statistics ---\n", VAR_0);
 (void)FUNC_1("%ld packets transmitted, ", VAR_4);
 (void)FUNC_1("%ld packets received, ", VAR_2);
 if (VAR_3)
  (void)FUNC_1("+%ld duplicates, ", VAR_3);
 if (VAR_4) {
  if (VAR_2 > VAR_4)
   (void)FUNC_1("-- somebody's duplicating packets!");
  else
   (void)FUNC_1("%.1f%% packet loss",
       ((((double)VAR_4 - VAR_2) * 100.0) /
       VAR_4));
 }
 if (VAR_1)
  FUNC_1(", %ld packets out of wait time", VAR_1);
 (void)FUNC_2('\n');
 if (VAR_2 && VAR_6) {

  double VAR_11 = VAR_2 + VAR_3;
  double VAR_12 = VAR_9 / VAR_11;
  double VAR_13 = FUNC_3(VAR_10 / VAR_11 - VAR_12 * VAR_12);
  (void)FUNC_1(
      "round-trip min/avg/max/std-dev = %.3f/%.3f/%.3f/%.3f ms\n",
      VAR_8, VAR_12, VAR_7, VAR_13);
  (void)FUNC_0(VAR_5);
 }
 (void)FUNC_0(VAR_5);
}
