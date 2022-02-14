
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {scalar_t__ ident; int fflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int,int ,int,int,int ,int ) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 char* FUNC_5 (int ,size_t*) ;
 int FUNC_6 (struct kevent*) ;
 int FUNC_7 (int,struct kevent*,int,struct kevent*,int,struct timespec*) ;
 int FUNC_8 () ;
 struct kevent* FUNC_9 (int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*) ;
 int VAR_14 ;
 int FUNC_12 (char*) ;

int
FUNC_13(int VAR_15, char **VAR_16)
{
 char *VAR_17;
 int VAR_18, VAR_19;
 size_t VAR_20;
 struct kevent *VAR_21, VAR_22;

 if (VAR_15 < 2)
  return VAR_4;

 VAR_15--;
 VAR_16++;

 VAR_21 = FUNC_9(sizeof(struct kevent) * VAR_15);
 if (VAR_21 == ((void*)0))
  FUNC_4(VAR_4, "not enough memory");

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
  int VAR_23;

  VAR_23 = FUNC_10(VAR_16[VAR_18], VAR_13);
  if (VAR_23 == -1)
   FUNC_3(VAR_4, "cannot open %s", VAR_16[VAR_18]);

  FUNC_0(&VAR_21[VAR_18], VAR_23, VAR_0,
      VAR_1 | VAR_2 | VAR_3,
      VAR_6 | VAR_7 | VAR_8 | VAR_9 |
      VAR_10 | VAR_11 | VAR_12,
      0, 0);
 }

 VAR_19 = FUNC_8();
 if (VAR_19 == -1)
  FUNC_3(VAR_4, "kqueue");

 while ((VAR_17 = FUNC_5(VAR_14, &VAR_20)) != ((void*)0)) {
  int VAR_24, VAR_25;
  struct timespec VAR_26;

  VAR_26.tv_sec = 0;
  VAR_26.tv_nsec = 100000;

  (void)FUNC_7(VAR_19, VAR_21, VAR_15, &VAR_22, 1, &VAR_26);

  FUNC_1(VAR_20 > 0);
  FUNC_1(VAR_17[VAR_20 - 1] == '\n');
  VAR_17[VAR_20 - 1] = '\0';
  VAR_24 = FUNC_12(VAR_17);
  if (VAR_24 != VAR_5)
   FUNC_4(VAR_24, "%s returned %d", VAR_17, VAR_24);

  do {
   VAR_25 = FUNC_7(VAR_19, VAR_21, VAR_15, &VAR_22, 1, &VAR_26);
   if (VAR_25 == -1)
    FUNC_3(VAR_4, "kevent");
   else if (VAR_25 > 0) {
    for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
     if (VAR_22.ident == VAR_21[VAR_18].ident)
      break;

    if (VAR_22.fflags & VAR_6)
     FUNC_11("%s - NOTE_ATTRIB\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_7)
     FUNC_11("%s - NOTE_DELETE\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_8)
     FUNC_11("%s - NOTE_EXTEND\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_9)
     FUNC_11("%s - NOTE_LINK\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_10)
     FUNC_11("%s - NOTE_RENAME\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_11)
     FUNC_11("%s - NOTE_REVOKE\n", VAR_16[VAR_18]);
    if (VAR_22.fflags & VAR_12)
     FUNC_11("%s - NOTE_WRITE\n", VAR_16[VAR_18]);
   }
  } while (VAR_25 > 0);
 }

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
  FUNC_2(VAR_21[VAR_18].ident);
 FUNC_6(VAR_21);

 return VAR_5;
}
