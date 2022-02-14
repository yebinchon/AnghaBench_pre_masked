
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {int h_addr; } ;


 int FUNC_0 (int,char*,char const*) ;
 struct hostent* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct in_addr*) ;
 int FUNC_3 (struct in_addr*,int ,int) ;

__attribute__((used)) static void
FUNC_4 (const char* VAR_0, struct in_addr* VAR_1)
{
 struct hostent* VAR_2;

 if (FUNC_2 (VAR_0, VAR_1))
  return;

 VAR_2 = FUNC_1 (VAR_0);
 if (!VAR_2)
  FUNC_0 (1, "unknown host %s", VAR_0);

 FUNC_3 (VAR_1, VAR_2->h_addr, sizeof (struct in_addr));
}
