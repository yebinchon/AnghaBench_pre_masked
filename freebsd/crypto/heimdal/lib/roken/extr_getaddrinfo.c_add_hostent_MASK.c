
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char** h_addr_list; int h_addrtype; int h_length; } ;
struct addrinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,struct addrinfo***,int (*) (struct addrinfo*,void*,int),char*,char*) ;
 int FUNC_1 (struct hostent*) ;
 struct hostent* FUNC_2 (char*,int ,int ,int*) ;
 char* FUNC_3 (struct hostent*) ;
 int * FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6 (int VAR_2, int VAR_3, int VAR_4,
      struct addrinfo ***VAR_5,
      int (*VAR_6)(struct addrinfo *, void *VAR_7, int VAR_8),
      struct hostent *VAR_9, int *VAR_10)
{
    int VAR_11;
    char *VAR_12 = ((void*)0);
    char **VAR_13;

    if (*VAR_10 & VAR_0) {
 struct hostent *VAR_14 = ((void*)0);
 const char *VAR_15;

 VAR_15 = FUNC_3 (VAR_9);
 if (FUNC_4 (VAR_15, '.') == ((void*)0)) {
     int VAR_16;

     VAR_14 = FUNC_2 (VAR_9->h_addr_list[0], VAR_9->h_length,
       VAR_9->h_addrtype, &VAR_16);
     if (VAR_14 != ((void*)0)) {
  const char *VAR_17 = FUNC_3 (VAR_14);

  if (FUNC_4 (VAR_17, '.') != ((void*)0))
      VAR_15 = VAR_17;
     }
 }

 VAR_12 = FUNC_5 (VAR_15);
 if (VAR_14 != ((void*)0))
     FUNC_1 (VAR_14);
 if (VAR_12 == ((void*)0))
     return VAR_1;
    }

    for (VAR_13 = VAR_9->h_addr_list; *VAR_13 != ((void*)0); ++VAR_13) {
 VAR_11 = FUNC_0 (VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, *VAR_13, VAR_12);
 if (VAR_11)
     return VAR_11;
 if (*VAR_10 & VAR_0) {
     *VAR_10 &= ~VAR_0;
     VAR_12 = ((void*)0);
 }
    }
    return 0;
}
