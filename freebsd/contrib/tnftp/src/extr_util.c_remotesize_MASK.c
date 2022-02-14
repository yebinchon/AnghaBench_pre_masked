
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char**,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 int* VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (char,int ) ;
 int VAR_6 ;
 char* FUNC_6 (int ,char) ;
 int VAR_7 ;
 int VAR_8 ;

off_t
FUNC_7(const char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 off_t VAR_13;

 VAR_11 = VAR_8;
 VAR_13 = -1;
 if (VAR_5 == 0)
  VAR_8 = -1;
 if (! VAR_4[VAR_2]) {
  if (VAR_10)
   FUNC_2(VAR_7,
       "SIZE is not supported by remote server.\n");
  goto cleanup_remotesize;
 }
 VAR_12 = FUNC_1("SIZE %s", VAR_9);
 if (VAR_12 == VAR_0) {
  char *VAR_14, *VAR_15;

  VAR_14 = FUNC_6(VAR_6, ' ');
  if (VAR_14 != ((void*)0)) {
   VAR_14++;
   VAR_13 = FUNC_0(VAR_14, &VAR_15, 10);
   if (*VAR_15 != '\0' && !FUNC_4((unsigned char)*VAR_15))
    VAR_13 = -1;
  }
 } else {
  if (VAR_12 == VAR_1 && VAR_3 == 500 && VAR_4[VAR_2] == -1)
   VAR_4[VAR_2] = 0;
  if (VAR_10 && VAR_5 == 0) {
   FUNC_3(VAR_6, VAR_7);
   FUNC_5('\n', VAR_7);
  }
 }
 cleanup_remotesize:
 VAR_8 = VAR_11;
 return (VAR_13);
}
