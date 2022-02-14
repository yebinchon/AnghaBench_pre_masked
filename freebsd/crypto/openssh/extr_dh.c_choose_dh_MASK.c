
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dhgroup {int size; int p; int g; } ;
typedef int FILE ;
typedef int DH ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char**,size_t*,int *) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int,char*,struct dhgroup*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

DH *
FUNC_12(int VAR_2, int VAR_3, int VAR_4)
{
 FILE *VAR_5;
 char *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct dhgroup VAR_12;

 if ((VAR_5 = FUNC_5(VAR_0, "r")) == ((void*)0)) {
  FUNC_8("WARNING: could not open %s (%s), using fixed modulus",
      VAR_0, FUNC_11(VAR_1));
  return (FUNC_3(VAR_4));
 }

 VAR_11 = 0;
 VAR_8 = VAR_9 = 0;
 while (FUNC_7(&VAR_6, &VAR_7, VAR_5) != -1) {
  VAR_11++;
  if (!FUNC_9(VAR_11, VAR_6, &VAR_12))
   continue;
  FUNC_0(VAR_12.g);
  FUNC_0(VAR_12.p);

  if (VAR_12.size > VAR_4 || VAR_12.size < VAR_2)
   continue;

  if ((VAR_12.size > VAR_3 && VAR_12.size < VAR_8) ||
      (VAR_12.size > VAR_8 && VAR_8 < VAR_3)) {
   VAR_8 = VAR_12.size;
   VAR_9 = 0;
  }
  if (VAR_12.size == VAR_8)
   VAR_9++;
 }
 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);
 VAR_7 = 0;
 FUNC_10(VAR_5);

 if (VAR_9 == 0) {
  FUNC_4(VAR_5);
  FUNC_8("WARNING: no suitable primes in %s", VAR_0);
  return (FUNC_3(VAR_4));
 }

 VAR_11 = 0;
 VAR_10 = FUNC_1(VAR_9);
 while (FUNC_7(&VAR_6, &VAR_7, VAR_5) != -1) {
  if (!FUNC_9(VAR_11, VAR_6, &VAR_12))
   continue;
  if ((VAR_12.size > VAR_4 || VAR_12.size < VAR_2) ||
      VAR_12.size != VAR_8 ||
      VAR_11++ != VAR_10) {
   FUNC_0(VAR_12.g);
   FUNC_0(VAR_12.p);
   continue;
  }
  break;
 }
 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);
 FUNC_4(VAR_5);
 if (VAR_11 != VAR_10+1) {
  FUNC_8("WARNING: line %d disappeared in %s, giving up",
      VAR_10, VAR_0);
  return (FUNC_3(VAR_4));
 }

 return (FUNC_2(VAR_12.g, VAR_12.p));
}
