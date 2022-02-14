
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; int ss_len; } ;
struct sockaddr {int sa_family; int sa_len; } ;


 int FUNC_0 (struct sockaddr_storage*,struct sockaddr*,int ) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int ) ;

__attribute__((used)) static struct sockaddr *
FUNC_2(struct sockaddr *VAR_0, struct sockaddr *VAR_1,
    struct sockaddr_storage *VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, 0, VAR_0->sa_len);
 FUNC_0(VAR_2, VAR_1, VAR_1->sa_len);
 VAR_2->ss_len = VAR_0->sa_len;
 VAR_2->ss_family = VAR_0->sa_family;

 return ((struct sockaddr *)VAR_2);
}
