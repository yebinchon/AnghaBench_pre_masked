
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_protocol; int ai_socktype; char* ai_canonname; struct addrinfo* ai_next; scalar_t__ ai_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 struct addrinfo* FUNC_1 (int) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int FUNC_3 (struct addrinfo*,void*,int) ;

__attribute__((used)) static int
FUNC_4 (int VAR_1, int VAR_2, int VAR_3,
  struct addrinfo ***VAR_4,
  int (*VAR_5)(struct addrinfo *, void *VAR_6, int VAR_7),
  void *VAR_8,
  char *VAR_9)
{
    struct addrinfo *VAR_10;
    int VAR_11;

    VAR_10 = FUNC_1 (sizeof (*VAR_10));
    if (VAR_10 == ((void*)0))
 return VAR_0;
    FUNC_2 (VAR_10, 0, sizeof(*VAR_10));
    VAR_10->ai_flags = 0;
    VAR_10->ai_next = ((void*)0);
    VAR_10->ai_protocol = VAR_2;
    VAR_10->ai_socktype = VAR_3;
    VAR_10->ai_canonname = VAR_9;
    VAR_11 = (*VAR_5)(VAR_10, VAR_8, VAR_1);
    if (VAR_11) {
 FUNC_0 (VAR_10);
 return VAR_11;
    }
    **VAR_4 = VAR_10;
    *VAR_4 = &VAR_10->ai_next;
    return 0;
}
