
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hostname ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int VAR_14 ;
 int FUNC_5 (int ,char*,char const*,char*,char const*) ;
 int FUNC_6 (struct addrinfo*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (char const*,int,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int * FUNC_13 (char const*,char) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (char*,char const*,size_t) ;
 char* FUNC_16 (char const*,char) ;

int
FUNC_17(const char *VAR_15, int VAR_16)
{
 int VAR_17, VAR_18, VAR_19;
 size_t VAR_20;
 const char *VAR_21, *VAR_22;
 struct addrinfo VAR_23, *VAR_24, *VAR_25;
 char VAR_26[VAR_3];

 VAR_22 = ((void*)0);
 VAR_18 = -1;
 if (VAR_15[0] == '-' && VAR_15[1] == '\0')
  VAR_18 = (VAR_16 == VAR_8) ? 0 : 1;
 else if (VAR_15[0] != '/' &&
     VAR_15[0] != '.' && FUNC_13(VAR_15, ':') != ((void*)0)) {

  VAR_21 = FUNC_16(VAR_15, ':');
  VAR_20 = VAR_21 - VAR_15;
  if (VAR_21 == VAR_15 || VAR_20 >= sizeof(VAR_26)) {
   VAR_22 = FUNC_14(VAR_1);
   goto done;
  }

  FUNC_1(VAR_20 < sizeof(VAR_26));
  (void) FUNC_15(VAR_26, VAR_15, VAR_20);
  VAR_26[VAR_20] = '\0';

  (void) FUNC_10(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.ai_family = VAR_0;
  VAR_23.ai_socktype = VAR_9;
  if ((VAR_17 = FUNC_8(VAR_26, VAR_21+1, &VAR_23, &VAR_25)) != 0) {
   VAR_22 = FUNC_7(VAR_17);
   goto done;
  }

  VAR_18 = -1;
  for (VAR_24 = VAR_25; VAR_24; VAR_24 = VAR_24->ai_next) {
   if ((VAR_18 = FUNC_12(VAR_24->ai_family, VAR_24->ai_socktype,
       VAR_24->ai_protocol)) < 0) {
    VAR_22 = FUNC_14(VAR_14);
    continue;
   }
   if (VAR_16 == VAR_8) {
    if (FUNC_2(VAR_18, VAR_24->ai_addr, VAR_24->ai_addrlen) < 0) {
     VAR_22 = FUNC_14(VAR_14);
     (void) FUNC_3(VAR_18);
     VAR_18 = -1;
     continue;
    }
    FUNC_9(VAR_18, 1);
    VAR_19 = FUNC_0(VAR_18, ((void*)0), ((void*)0));
    (void) FUNC_3(VAR_18);
    if (VAR_19 < 0) {
     VAR_22 = FUNC_14(VAR_14);
     VAR_18 = -1;
     break;
    }
    VAR_18 = VAR_19;
   } else {
    if (FUNC_4(VAR_18, VAR_24->ai_addr, VAR_24->ai_addrlen) < 0) {
     VAR_22 = FUNC_14(VAR_14);
     (void) FUNC_3(VAR_18);
     VAR_18 = -1;
     continue;
    }
   }
   VAR_22 = ((void*)0);
   break;
  }
  FUNC_6(VAR_25);

 } else if ((VAR_18 = FUNC_11(VAR_15, VAR_16 == VAR_8 ?
      VAR_5 : (VAR_7|VAR_4|VAR_6),
      VAR_12|VAR_13|VAR_10|VAR_11)) < 0)
   VAR_22 = FUNC_14(VAR_14);

  done:
 if (VAR_22)
  FUNC_5(VAR_2, "ERROR: Cannot open \"%s\" for %s: %s.", VAR_15,
      (VAR_16 == VAR_8 ? "reading" : "writing"),
      VAR_22);

 return (VAR_18);
}
