
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {int * data; int * name; int len; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned char*,size_t,int *) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,size_t) ;
 unsigned char* FUNC_3 (unsigned char*,size_t) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int * FUNC_5 (char const*) ;
 size_t FUNC_6 (char*) ;
 struct wpa_config_blob* FUNC_7 (int) ;
 int FUNC_8 (struct wpa_config_blob*) ;
 scalar_t__ FUNC_9 (char*,int,int *,int*,char**) ;
 int FUNC_10 (int ,char*,int,...) ;

__attribute__((used)) static struct wpa_config_blob * FUNC_11(FILE *VAR_2, int *VAR_3,
           const char *VAR_4)
{
 struct wpa_config_blob *VAR_5;
 char VAR_6[256], *VAR_7;
 unsigned char *VAR_8 = ((void*)0), *VAR_9;
 int VAR_10 = 0;
 size_t VAR_11 = 0, VAR_12;

 FUNC_10(VAR_1, "Line: %d - start of a new named blob '%s'",
     *VAR_3, VAR_4);

 while (FUNC_9(VAR_6, sizeof(VAR_6), VAR_2, VAR_3, &VAR_7)) {
  if (FUNC_4(VAR_7, "}") == 0) {
   VAR_10 = 1;
   break;
  }

  VAR_12 = FUNC_6(VAR_7);
  VAR_9 = FUNC_3(VAR_8, VAR_11 + VAR_12);
  if (VAR_9 == ((void*)0)) {
   FUNC_10(VAR_0, "Line %d: not enough memory for "
       "blob", *VAR_3);
   FUNC_1(VAR_8);
   return ((void*)0);
  }
  VAR_8 = VAR_9;
  FUNC_2(VAR_8 + VAR_11, VAR_7, VAR_12);
  VAR_11 += VAR_12;
 }

 if (!VAR_10 || !VAR_8) {
  FUNC_10(VAR_0, "Line %d: blob was not terminated "
      "properly", *VAR_3);
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 VAR_5 = FUNC_7(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }
 VAR_5->name = FUNC_5(VAR_4);
 VAR_5->data = FUNC_0(VAR_8, VAR_11, &VAR_5->len);
 FUNC_1(VAR_8);

 if (VAR_5->name == ((void*)0) || VAR_5->data == ((void*)0)) {
  FUNC_8(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
