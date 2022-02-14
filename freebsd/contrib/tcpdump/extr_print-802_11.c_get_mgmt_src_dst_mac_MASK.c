
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct mgmt_header_t {int * da; int * sa; } ;



__attribute__((used)) static void
FUNC_0(const u_char *VAR_0, const uint8_t **VAR_1, const uint8_t **VAR_2)
{
 const struct mgmt_header_t *VAR_3 = (const struct mgmt_header_t *) VAR_0;

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_3->sa;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->da;
}
