
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addr; struct addrinfo* ai_next; int ai_addrlen; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,char**) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;
 char** FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int,int,char*,char const*,char const*,char const*,size_t,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__,int*,int ) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static int
FUNC_14 (int VAR_3,
      char **VAR_4,
      int VAR_5,
      struct addrinfo *VAR_6,
      const char *VAR_7,
      const char *VAR_8,
      int VAR_9,
      int VAR_10,
      const char *VAR_11,
      size_t VAR_12)
{
    struct addrinfo *VAR_13;

    if (FUNC_3 (VAR_9, VAR_6->ai_addr, VAR_6->ai_addrlen) < 0) {
 int VAR_14 = VAR_1;

 FUNC_2(VAR_9);
 FUNC_2(VAR_10);

 for (VAR_13 = VAR_6->ai_next; VAR_13 != ((void*)0); VAR_13 = VAR_13->ai_next) {
     pid_t VAR_15;
     char *VAR_16 = FUNC_10(VAR_13->ai_addr);
     if(VAR_16 == ((void*)0))
  continue;

     VAR_15 = FUNC_7();
     if (VAR_15 < 0)
  FUNC_4 (1, "fork");
     else if(VAR_15 == 0) {
  char **VAR_17;
  int VAR_18 = 0;

  VAR_17 = FUNC_9((VAR_3 + 2) * sizeof(*VAR_17));
  if (VAR_17 == ((void*)0))
      FUNC_5 (1, "malloc: out of memory");
  VAR_17[VAR_18] = VAR_4[VAR_18];
  ++VAR_18;
  if (VAR_5 == VAR_18)
      VAR_17[VAR_18++] = VAR_16;
  VAR_17[VAR_18++] = "-K";
  for(; VAR_18 <= VAR_3; ++VAR_18)
      VAR_17[VAR_18] = VAR_4[VAR_18 - 1];
  if (VAR_5 > 1)
      VAR_17[VAR_5 + 1] = VAR_16;
  VAR_17[VAR_3 + 1] = ((void*)0);
  FUNC_6(VAR_0, VAR_17);
  FUNC_4(1, "execv(%s)", VAR_0);
     } else {
  int VAR_19;
  FUNC_8(VAR_16);

  while(FUNC_12(VAR_15, &VAR_19, 0) < 0)
      ;
  if(FUNC_1(VAR_19) && FUNC_0(VAR_19) == 0)
      return 0;
     }
 }
 VAR_1 = VAR_14;
 FUNC_13("%s", VAR_4[VAR_5]);
 return 1;
    } else {
 int VAR_20;

 VAR_20 = FUNC_11 (VAR_9, VAR_10,
       VAR_4[VAR_5],
       VAR_8, VAR_7,
       VAR_11, VAR_12,
       VAR_2);
 return VAR_20;
    }
}
