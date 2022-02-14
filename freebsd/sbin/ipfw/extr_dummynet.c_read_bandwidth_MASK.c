
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_2, int *VAR_3, char *VAR_4, int VAR_5)
{
 if (*VAR_3 != -1)
  FUNC_5("duplicate token, override bandwidth value!");

 if (VAR_2[0] >= 'a' && VAR_2[0] <= 'z') {
  if (!VAR_4) {
   FUNC_1(1, "no if support");
  }
  if (VAR_5 >= VAR_1)
   FUNC_4("interface name truncated");
  VAR_5--;

  FUNC_2(VAR_4, VAR_2, VAR_5);
  *VAR_3 = 0;
 } else {
  int VAR_6;
  char *VAR_7 = ((void*)0);

  VAR_6 = FUNC_3(VAR_2, &VAR_7, 0);
  if (*VAR_7 == 'K' || *VAR_7 == 'k') {
   VAR_7++;
   VAR_6 *= 1000;
  } else if (*VAR_7 == 'M' || *VAR_7 == 'm') {
   VAR_7++;
   VAR_6 *= 1000000;
  } else if (*VAR_7 == 'G' || *VAR_7 == 'g') {
   VAR_7++;
   VAR_6 *= 1000000000;
  }
  if ((*VAR_7 == 'B' &&
   FUNC_0(VAR_7, "Bi", "Bit/s") != 0) ||
      FUNC_0(VAR_7, "by", "bytes") == 0)
   VAR_6 *= 8;

  if (VAR_6 < 0)
   FUNC_1(VAR_0, "bandwidth too large");

  *VAR_3 = VAR_6;
  if (VAR_4)
   VAR_4[0] = '\0';
 }
}
