
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct addrinfo {int * ai_canonname; scalar_t__ ai_addrlen; int ai_addr; scalar_t__ ai_protocol; scalar_t__ ai_socktype; scalar_t__ ai_family; scalar_t__ ai_flags; } ;
typedef int nvlist_t ;


 int FUNC_0 (int *,char*,int ,size_t) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static nvlist_t *
FUNC_4(const struct addrinfo *VAR_0)
{
 nvlist_t *VAR_1;

 VAR_1 = FUNC_3(0);
 FUNC_1(VAR_1, "ai_flags", (uint64_t)VAR_0->ai_flags);
 FUNC_1(VAR_1, "ai_family", (uint64_t)VAR_0->ai_family);
 FUNC_1(VAR_1, "ai_socktype", (uint64_t)VAR_0->ai_socktype);
 FUNC_1(VAR_1, "ai_protocol", (uint64_t)VAR_0->ai_protocol);
 FUNC_0(VAR_1, "ai_addr", VAR_0->ai_addr, (size_t)VAR_0->ai_addrlen);
 if (VAR_0->ai_canonname != ((void*)0))
  FUNC_2(VAR_1, "ai_canonname", VAR_0->ai_canonname);

 return (VAR_1);
}
