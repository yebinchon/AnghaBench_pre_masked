
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; scalar_t__ h_addrtype; char** h_aliases; char** h_addr_list; int h_length; } ;


 int FUNC_0 (struct hostent*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct hostent *VAR_0, struct hostent *VAR_1, void *VAR_2)
{
 char **VAR_3, **VAR_4, **VAR_5, **VAR_6;
 int VAR_7;

 if (VAR_0 == VAR_1)
  return 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  goto errfin;

 if (VAR_0->h_name == ((void*)0) || VAR_1->h_name == ((void*)0))
  goto errfin;

 if (VAR_0->h_addrtype != VAR_1->h_addrtype ||
     VAR_0->h_length != VAR_1->h_length ||
     FUNC_3(VAR_0->h_name, VAR_1->h_name) != 0)
  goto errfin;

 VAR_3 = VAR_0->h_aliases;
 VAR_4 = VAR_1->h_aliases;

 if ((VAR_0->h_aliases == ((void*)0) || VAR_1->h_aliases == ((void*)0)) &&
     VAR_0->h_aliases != VAR_1->h_aliases)
  goto errfin;

 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  VAR_6 = VAR_3;
  for (;*VAR_3; ++VAR_3) {
   VAR_7 = 0;
   for (VAR_5 = VAR_4; *VAR_5; ++VAR_5) {
    if (FUNC_3(*VAR_3, *VAR_5) == 0) {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_7 == 0) {
    FUNC_2("h1 aliases item can't be found in h2 "
        "aliases\n");
    goto errfin;
   }
  }

  VAR_3 = VAR_6;
  for (;*VAR_4; ++VAR_4) {
   VAR_7 = 0;
   for (VAR_5 = VAR_3; *VAR_5; ++VAR_5) {
    if (FUNC_3(*VAR_4, *VAR_5) == 0) {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_7 == 0) {
    FUNC_2("h2 aliases item can't be found in h1 "
        "aliases\n");
    goto errfin;
   }
  }
 }

 VAR_3 = VAR_0->h_addr_list;
 VAR_4 = VAR_1->h_addr_list;

 if ((VAR_0->h_addr_list == ((void*)0) || VAR_1->h_addr_list== ((void*)0)) &&
     VAR_0->h_addr_list != VAR_1->h_addr_list)
  goto errfin;

 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  VAR_6 = VAR_3;
  for (; *VAR_3; ++VAR_3) {
   VAR_7 = 0;
   for (VAR_5 = VAR_4; *VAR_5; ++VAR_5) {
    if (FUNC_1(*VAR_3, *VAR_5, VAR_0->h_length) == 0) {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_7 == 0) {
    FUNC_2("h1 addresses item can't be found in "
        "h2 addresses\n");
    goto errfin;
   }
  }

  VAR_3 = VAR_6;
  for (; *VAR_4; ++VAR_4) {
   VAR_7 = 0;
   for (VAR_5 = VAR_3; *VAR_5; ++VAR_5) {
    if (FUNC_1(*VAR_4, *VAR_5, VAR_0->h_length) == 0) {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_7 == 0) {
    FUNC_2("h2 addresses item can't be found in "
        "h1 addresses\n");
    goto errfin;
   }
  }
 }

 return 0;

errfin:
 if (VAR_2 == ((void*)0)) {
  FUNC_2("following structures are not equal:\n");
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 }

 return (-1);
}
