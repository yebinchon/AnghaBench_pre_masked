
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int encs ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(uint_t VAR_0)
{
 static const char *const VAR_1[] = {
  ((void*)0), "SINGLE", "DOUBLE", "COMPLEX", "DCOMPLEX", "LDCOMPLEX",
  "LDOUBLE", "INTERVAL", "DINTERVAL", "LDINTERVAL", "IMAGINARY",
  "DIMAGINARY", "LDIMAGINARY"
 };

 static char VAR_2[16];

 if (VAR_0 < 1 || VAR_0 >= (sizeof (VAR_1) / sizeof (char *))) {
  (void) FUNC_0(VAR_2, sizeof (VAR_2), "%u", VAR_0);
  return (VAR_2);
 }

 return (VAR_1[VAR_0]);
}
