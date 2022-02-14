
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bvector ;
typedef int FILE ;


 int FUNC_0 (int ,unsigned char*,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t FUNC_2 (int ) ;
 unsigned char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char*,char const*) ;
 size_t FUNC_8 (unsigned char*,int,int,int *) ;
 int VAR_1 ;

unsigned char *
FUNC_9(const char *VAR_2, size_t *VAR_3)
{
 bvector VAR_4 = VAR_0;
 FILE *VAR_5;

 *VAR_3 = 0;
 VAR_5 = FUNC_6(VAR_2, "rb");
 if (VAR_5 == ((void*)0)) {
  FUNC_7(VAR_1,
   "ERROR: could not open file '%s' for reading\n", VAR_2);
  return ((void*)0);
 }
 for (;;) {
  unsigned char VAR_6[1024];
  size_t VAR_7;

  VAR_7 = FUNC_8(VAR_6, 1, sizeof VAR_6, VAR_5);
  if (VAR_7 == 0) {
   unsigned char *VAR_8;

   if (FUNC_5(VAR_5)) {
    FUNC_7(VAR_1,
     "ERROR: read error on file '%s'\n",
     VAR_2);
    FUNC_4(VAR_5);
    return ((void*)0);
   }
   VAR_8 = FUNC_3(VAR_4);
   *VAR_3 = FUNC_2(VAR_4);
   FUNC_1(VAR_4);
   FUNC_4(VAR_5);
   return VAR_8;
  }
  FUNC_0(VAR_4, VAR_6, VAR_7);
 }
}
