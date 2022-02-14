
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 unsigned char* FUNC_5 (int *,size_t*) ;
 int FUNC_6 (char*,char*,char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__) ;

__attribute__((used)) static unsigned char *
FUNC_10(const char *VAR_3, size_t *VAR_4)
{
 FILE *VAR_5;
 unsigned char *VAR_6;
 VAR_5 = FUNC_3(VAR_3, "rb");
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_2, "could not open file '%s'\n", VAR_3);
  FUNC_0(VAR_1);
 }
 VAR_6 = FUNC_5(VAR_5, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_2, "read error on file '%s'\n", VAR_3);
  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_5);



 return VAR_6;
}
