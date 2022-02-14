
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; int * ai_addr; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct xaddr*) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,char,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, struct xaddr *VAR_2)
{
 struct addrinfo VAR_3, *VAR_4 = ((void*)0);
 int VAR_5 = -1;

 FUNC_3(&VAR_3, '\0', sizeof(VAR_3));
 VAR_3.ai_flags = VAR_0;

 if (VAR_1 == ((void*)0) || FUNC_2(VAR_1, ((void*)0), &VAR_3, &VAR_4) != 0)
  goto out;
 if (VAR_4 == ((void*)0) || VAR_4->ai_addr == ((void*)0))
  goto out;
 if (VAR_2 != ((void*)0) && FUNC_0(VAR_4->ai_addr, VAR_4->ai_addrlen, VAR_2) == -1)
  goto out;

 VAR_5 = 0;
 out:
 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 return VAR_5;
}
