
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; int ai_protocol; int ai_socktype; } ;


 int VAR_0 ;
 struct addrinfo* FUNC_0 (struct addrinfo const*) ;
 int FUNC_1 (struct addrinfo*) ;

__attribute__((used)) static int
FUNC_2(const struct addrinfo *VAR_1, const struct addrinfo *VAR_2,
    struct addrinfo **VAR_3)
{
 int VAR_4;
 struct addrinfo VAR_5, *VAR_6;
 const struct addrinfo *VAR_7;

 VAR_4 = 0;
 VAR_5.ai_next = ((void*)0);
 VAR_6 = &VAR_5;

 for (VAR_7 = VAR_2; VAR_7 != ((void*)0); VAR_7 = VAR_7->ai_next) {
  if (VAR_7->ai_family != VAR_1->ai_family)
   continue;

  VAR_6->ai_next = FUNC_0(VAR_7);
  if (!VAR_6->ai_next) {
   VAR_4 = VAR_0;
   goto fail;
  }

  VAR_6->ai_next->ai_socktype = VAR_1->ai_socktype;
  VAR_6->ai_next->ai_protocol = VAR_1->ai_protocol;
  VAR_6 = VAR_6->ai_next;
 }

 *VAR_3 = VAR_5.ai_next;
 return 0;

fail:
 FUNC_1(VAR_5.ai_next);
 return VAR_4;
}
