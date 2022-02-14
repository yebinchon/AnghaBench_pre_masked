
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct token_header {scalar_t__ token_shost; scalar_t__ token_dhost; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static inline void
FUNC_1(const struct token_header *VAR_0, char *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_2, (const char *)VAR_0->token_dhost, 6);
 FUNC_0(VAR_1, (const char *)VAR_0->token_shost, 6);
}
