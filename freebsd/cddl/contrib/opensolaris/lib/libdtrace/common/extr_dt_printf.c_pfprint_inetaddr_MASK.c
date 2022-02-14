
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hostent {char* h_name; } ;
typedef int dtrace_hdl_t ;
typedef int dt_pfargd_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (void const*,char*,size_t) ;
 int FUNC_2 (int *,int *,char const*,char*) ;
 struct hostent* FUNC_3 (char*,int ,int ,struct hostent*,char*,int,...) ;
 struct hostent* FUNC_4 (char*,int,int ,int*) ;
 int FUNC_5 (int ,char*,char*) ;
 int * FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7(dtrace_hdl_t *VAR_4, FILE *VAR_5, const char *VAR_6,
    const dt_pfargd_t *VAR_7, const void *VAR_8, size_t VAR_9, uint64_t VAR_10)
{
 char *VAR_11 = FUNC_0(VAR_9 + 1);
 struct hostent *VAR_12, VAR_13;
 char VAR_14[VAR_2];
 char VAR_15[1024];
 int VAR_16;

 FUNC_1(VAR_8, VAR_11, VAR_9);
 VAR_11[VAR_9] = '\0';

 if (FUNC_6(VAR_11, ':') == ((void*)0) && FUNC_5(VAR_0, VAR_11, VAR_14) != -1) {




  if (FUNC_3(VAR_14, VAR_3,
      VAR_0, &VAR_13, VAR_15, sizeof (VAR_15), &VAR_12, &VAR_16) > 0)

   return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_12->h_name));
 } else if (FUNC_5(VAR_1, VAR_11, VAR_14) != -1) {
  if ((VAR_12 = FUNC_4(VAR_14, VAR_2,
      VAR_1, &VAR_16)) != ((void*)0))
   return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_12->h_name));
 }

 return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_11));
}
