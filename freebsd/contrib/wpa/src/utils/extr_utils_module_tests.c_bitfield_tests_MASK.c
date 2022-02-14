
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitfield {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bitfield* FUNC_0 (int) ;
 int FUNC_1 (struct bitfield*,int) ;
 int FUNC_2 (struct bitfield*) ;
 int FUNC_3 (struct bitfield*) ;
 scalar_t__ FUNC_4 (struct bitfield*,int) ;
 int FUNC_5 (struct bitfield*,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct bitfield *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 FUNC_6(VAR_1, "bitfield tests");

 VAR_2 = FUNC_0(123);
 if (VAR_2 == ((void*)0))
  return -1;

 for (VAR_3 = 0; VAR_3 < 123; VAR_3++) {
  if (FUNC_4(VAR_2, VAR_3) || FUNC_4(VAR_2, VAR_3 + 1))
   VAR_4++;
  if (VAR_3 > 0 && FUNC_4(VAR_2, VAR_3 - 1))
   VAR_4++;
  FUNC_5(VAR_2, VAR_3);
  if (!FUNC_4(VAR_2, VAR_3))
   VAR_4++;
  FUNC_1(VAR_2, VAR_3);
  if (FUNC_4(VAR_2, VAR_3))
   VAR_4++;
 }

 for (VAR_3 = 123; VAR_3 < 200; VAR_3++) {
  if (FUNC_4(VAR_2, VAR_3) || FUNC_4(VAR_2, VAR_3 + 1))
   VAR_4++;
  if (VAR_3 > 0 && FUNC_4(VAR_2, VAR_3 - 1))
   VAR_4++;
  FUNC_5(VAR_2, VAR_3);
  if (FUNC_4(VAR_2, VAR_3))
   VAR_4++;
  FUNC_1(VAR_2, VAR_3);
  if (FUNC_4(VAR_2, VAR_3))
   VAR_4++;
 }

 for (VAR_3 = 0; VAR_3 < 123; VAR_3++) {
  if (FUNC_4(VAR_2, VAR_3) || FUNC_4(VAR_2, VAR_3 + 1))
   VAR_4++;
  FUNC_5(VAR_2, VAR_3);
  if (!FUNC_4(VAR_2, VAR_3))
   VAR_4++;
 }

 for (VAR_3 = 0; VAR_3 < 123; VAR_3++) {
  if (!FUNC_4(VAR_2, VAR_3))
   VAR_4++;
  FUNC_1(VAR_2, VAR_3);
  if (FUNC_4(VAR_2, VAR_3))
   VAR_4++;
 }

 for (VAR_3 = 0; VAR_3 < 123; VAR_3++) {
  if (FUNC_3(VAR_2) != VAR_3)
   VAR_4++;
  FUNC_5(VAR_2, VAR_3);
 }
 if (FUNC_3(VAR_2) != -1)
  VAR_4++;
 for (VAR_3 = 0; VAR_3 < 123; VAR_3++) {
  if (!FUNC_4(VAR_2, VAR_3))
   VAR_4++;
  FUNC_1(VAR_2, VAR_3);
  if (FUNC_3(VAR_2) != VAR_3)
   VAR_4++;
  FUNC_5(VAR_2, VAR_3);
 }
 if (FUNC_3(VAR_2) != -1)
  VAR_4++;

 FUNC_2(VAR_2);

 VAR_2 = FUNC_0(8);
 if (VAR_2 == ((void*)0))
  return -1;
 if (FUNC_3(VAR_2) != 0)
  VAR_4++;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_5(VAR_2, VAR_3);
 if (FUNC_3(VAR_2) != -1)
  VAR_4++;
 FUNC_2(VAR_2);

 if (VAR_4) {
  FUNC_6(VAR_0, "%d bitfield test(s) failed", VAR_4);
  return -1;
 }

 return 0;
}
