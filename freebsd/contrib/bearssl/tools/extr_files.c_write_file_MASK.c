
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 size_t FUNC_4 (unsigned char const*,int,size_t,int *) ;
 int VAR_0 ;

int
FUNC_5(const char *VAR_1, const void *VAR_2, size_t VAR_3)
{
 FILE *VAR_4;
 const unsigned char *VAR_5;

 VAR_4 = FUNC_2(VAR_1, "wb");
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0,
   "ERROR: could not open file '%s' for reading\n", VAR_1);
  return -1;
 }
 VAR_5 = VAR_2;
 while (VAR_3 > 0) {
  size_t VAR_6;

  VAR_6 = FUNC_4(VAR_5, 1, VAR_3, VAR_4);
  if (VAR_6 == 0) {
   FUNC_3(VAR_0,
    "ERROR: could not write all bytes to '%s'\n",
    VAR_1);
   FUNC_0(VAR_4);
   return -1;
  }
  VAR_5 += VAR_6;
  VAR_3 -= VAR_6;
 }
 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_0, "ERROR: write error on file '%s'\n", VAR_1);
  FUNC_0(VAR_4);
  return -1;
 }
 FUNC_0(VAR_4);
 return 0;
}
