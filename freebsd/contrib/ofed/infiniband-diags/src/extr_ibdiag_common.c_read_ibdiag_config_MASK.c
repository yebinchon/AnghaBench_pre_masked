
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (void*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 char* FUNC_8 (char*,char*,char**) ;
 void* FUNC_9 (char*,int *,int ) ;
 void* FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (char*) ;

void FUNC_12(const char *VAR_8)
{
 char VAR_9[1024];
 FILE *VAR_10 = ((void*)0);
 char *VAR_11, *VAR_12;
 char *VAR_13;
 char *VAR_14;
 struct stat VAR_15;


 if (FUNC_4(VAR_8, &VAR_15))
  return;

 VAR_10 = FUNC_2(VAR_8, "r");
 if (!VAR_10)
  return;

 while (FUNC_1(VAR_9, sizeof VAR_9, VAR_10) != ((void*)0)) {
  VAR_11 = FUNC_8(VAR_9, "\n", &VAR_12);
  if (!VAR_11)
   continue;

  if (*VAR_11 == '#')
   continue;

  VAR_13 = FUNC_8(VAR_11, "=", &VAR_12);
  VAR_14 = FUNC_8(((void*)0), "\n", &VAR_12);

  if (FUNC_7(VAR_13, "CA", FUNC_6("CA")) == 0) {
   FUNC_3(VAR_1);
   VAR_1 = FUNC_5(VAR_14);
  } else if (FUNC_7(VAR_13, "Port", FUNC_6("Port")) == 0) {
   VAR_2 = FUNC_9(VAR_14, ((void*)0), 0);
  } else if (FUNC_7(VAR_13, "timeout", FUNC_6("timeout")) == 0) {
   VAR_7 = FUNC_9(VAR_14, ((void*)0), 0);
  } else if (FUNC_7(VAR_13, "MLX_EPI", FUNC_6("MLX_EPI")) == 0) {
   if (FUNC_11(VAR_14)) {
    VAR_3 |= VAR_0;
   } else {
    VAR_3 &= ~VAR_0;
   }
  } else if (FUNC_7(VAR_13, "m_key", FUNC_6("m_key")) == 0) {
   VAR_4 = FUNC_10(VAR_14, 0, 0);
  } else if (FUNC_7(VAR_13, "sa_key",
       FUNC_6("sa_key")) == 0) {
   VAR_6 = FUNC_10(VAR_14, 0, 0);
  } else if (FUNC_7(VAR_13, "nd_format",
       FUNC_6("nd_format")) == 0) {
   VAR_5 = FUNC_5(VAR_14);
  }
 }

 FUNC_0(VAR_10);
}
