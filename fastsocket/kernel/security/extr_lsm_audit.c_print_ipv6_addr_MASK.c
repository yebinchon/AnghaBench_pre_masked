
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct audit_buffer {int dummy; } ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (struct audit_buffer*,char*,char*,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;
 struct in6_addr* FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct audit_buffer *VAR_0,
       struct in6_addr *VAR_1, __be16 VAR_2,
       char *VAR_3, char *VAR_4)
{
 if (!FUNC_1(VAR_1))
  FUNC_0(VAR_0, " %s=%pI6c", VAR_3, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, " %s=%d", VAR_4, FUNC_2(VAR_2));
}
