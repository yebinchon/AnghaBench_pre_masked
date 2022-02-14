
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int ,int ) ;
 double FUNC_5 (double) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;

__attribute__((used)) static void
FUNC_6(void)
{

 (void)FUNC_4(VAR_1, VAR_2);
 (void)FUNC_4(VAR_0, VAR_2);
 (void)FUNC_3('\n');
 (void)FUNC_1(VAR_8);
 (void)FUNC_2("--- %s ping statistics ---\n", VAR_3);
 (void)FUNC_2("%ld packets transmitted, ", VAR_7);
 (void)FUNC_2("%ld packets received, ", VAR_5);
 if (VAR_6)
  (void)FUNC_2("+%ld duplicates, ", VAR_6);
 if (VAR_7) {
  if (VAR_5 > VAR_7)
   (void)FUNC_2("-- somebody's printing up packets!");
  else
   (void)FUNC_2("%.1f%% packet loss",
       ((VAR_7 - VAR_5) * 100.0) /
       VAR_7);
 }
 if (VAR_4)
  (void)FUNC_2(", %ld packets out of wait time", VAR_4);
 (void)FUNC_3('\n');
 if (VAR_5 && VAR_9) {
  double VAR_14 = VAR_5 + VAR_6;
  double VAR_15 = VAR_12 / VAR_14;
  double VAR_16 = VAR_13 / VAR_14 - VAR_15 * VAR_15;
  (void)FUNC_2(
      "round-trip min/avg/max/stddev = %.3f/%.3f/%.3f/%.3f ms\n",
      VAR_11, VAR_15, VAR_10, FUNC_5(VAR_16));
 }

 if (VAR_5)
  FUNC_0(0);
 else
  FUNC_0(2);
}
