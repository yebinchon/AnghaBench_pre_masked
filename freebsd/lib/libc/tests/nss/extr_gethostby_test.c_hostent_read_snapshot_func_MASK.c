
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hostent {int h_addrtype; int h_length; int h_addr_list; int h_aliases; int * h_name; } ;
struct TYPE_5__ {int sl_str; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct hostent*) ;
 int FUNC_4 (char*,unsigned char*,int) ;
 int FUNC_5 (struct hostent*,int ,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 void* FUNC_10 (char*) ;
 char* FUNC_11 (char**,char*) ;
 scalar_t__ FUNC_12 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_13(struct hostent *VAR_0, char *VAR_1)
{
 StringList *VAR_2, *VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8;





 VAR_8 = 0;
 VAR_7 = 0;
 VAR_2 = VAR_3 = ((void*)0);
 VAR_5 = VAR_1;
 FUNC_5(VAR_0, 0, sizeof(struct hostent));
 while ((VAR_4 = FUNC_11(&VAR_5, " ")) != ((void*)0)) {
  switch (VAR_7) {
  case 0:
   VAR_0->h_name = FUNC_10(VAR_4);
   FUNC_0(VAR_0->h_name != ((void*)0));
   break;

  case 1:
   VAR_0->h_addrtype = (int)FUNC_12(VAR_4, &VAR_6, 10);
   if (*VAR_6 != '\0')
    goto fin;
   break;

  case 2:
   VAR_0->h_length = (int)FUNC_12(VAR_4, &VAR_6, 10);
   if (*VAR_6 != '\0')
    goto fin;
   break;

  case 3:
   if (VAR_2 == ((void*)0)) {
    if (FUNC_9(VAR_4, "(null)") == 0)
     return (0);

    VAR_2 = FUNC_8();
    FUNC_0(VAR_2 != ((void*)0));

    if (FUNC_9(VAR_4, "noaliases") != 0) {
     VAR_6 = FUNC_10(VAR_4);
     FUNC_0(VAR_6 != ((void*)0));
     FUNC_7(VAR_2, VAR_6);
    }
   } else {
    if (FUNC_9(VAR_4, ":") == 0)
     ++VAR_7;
    else {
     VAR_6 = FUNC_10(VAR_4);
     FUNC_0(VAR_6 != ((void*)0));
     FUNC_7(VAR_2, VAR_6);
    }
   }
   break;

  case 4:
   if (VAR_3 == ((void*)0)) {
    if (FUNC_9(VAR_4, "(null)") == 0)
     return (0);

    VAR_3 = FUNC_8();
    FUNC_0(VAR_3 != ((void*)0));

    if (FUNC_9(VAR_4, "noaddrs") != 0) {
     VAR_6 = FUNC_1(1, VAR_0->h_length);
     FUNC_0(VAR_6 != ((void*)0));
     VAR_8 = FUNC_4(VAR_4,
         (unsigned char *)VAR_6,
         VAR_0->h_length);
     FUNC_7(VAR_3, VAR_6);
     if (VAR_8 != 0)
      goto fin;
    }
   } else {
    VAR_6 = FUNC_1(1, VAR_0->h_length);
    FUNC_0(VAR_6 != ((void*)0));
    VAR_8 = FUNC_4(VAR_4,
        (unsigned char *)VAR_6, VAR_0->h_length);
    FUNC_7(VAR_3, VAR_6);
    if (VAR_8 != 0)
     goto fin;
   }
   break;
  default:
   break;
  }

  if (VAR_7 != 3 && VAR_7 != 4)
   ++VAR_7;
 }

fin:
 if (VAR_2 != ((void*)0)) {
  FUNC_7(VAR_2, ((void*)0));
  VAR_0->h_aliases = VAR_2->sl_str;
 }
 if (VAR_3 != ((void*)0)) {
  FUNC_7(VAR_3, ((void*)0));
  VAR_0->h_addr_list = VAR_3->sl_str;
 }

 if ((VAR_7 != 4) || (VAR_8 != 0)) {
  FUNC_3(VAR_0);
  FUNC_5(VAR_0, 0, sizeof(struct hostent));
  return (-1);
 }


 FUNC_2(VAR_2);
 FUNC_2(VAR_3);
 return (0);
}
