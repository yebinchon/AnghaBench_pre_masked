
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modification {int m1; int m2; int what; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct modification*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char const*,char*,char*,int *,int*,int*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, struct modification *VAR_3)
{
 char VAR_4[16+1];
 int VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_3, sizeof(*VAR_3));
 if ((VAR_5 = FUNC_2(VAR_2, "%16[^:]%*[:]%llu%*[:]%i%*[:]%i",
     VAR_4, &VAR_3->offset, &VAR_6, &VAR_7)) < 3)
  FUNC_1(1, "Invalid modification spec \"%s\"", VAR_2);
 if (FUNC_3(VAR_4, "xor") == 0) {
  if (VAR_5 > 3)
   FUNC_1(1, "Invalid modification spec \"%s\"", VAR_2);
  if (VAR_6 < 0 || VAR_6 > 0xff)
   FUNC_1(1, "Invalid XOR modification value");
  VAR_3->what = VAR_1;
  VAR_3->m1 = VAR_6;
 } else if (FUNC_3(VAR_4, "andor") == 0) {
  if (VAR_5 != 4)
   FUNC_1(1, "Invalid modification spec \"%s\"", VAR_2);
  if (VAR_6 < 0 || VAR_6 > 0xff)
   FUNC_1(1, "Invalid AND modification value");
  if (VAR_7 < 0 || VAR_7 > 0xff)
   FUNC_1(1, "Invalid OR modification value");
  VAR_3->what = VAR_0;
  VAR_3->m1 = VAR_6;
  VAR_3->m2 = VAR_7;
 } else
  FUNC_1(1, "Invalid modification type \"%s\"", VAR_4);
}
