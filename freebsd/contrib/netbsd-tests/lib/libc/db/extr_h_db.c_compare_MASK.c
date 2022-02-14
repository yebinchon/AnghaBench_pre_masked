
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ size; int * data; } ;
typedef TYPE_1__ DBT ;


 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,unsigned long,...) ;

__attribute__((used)) static void
FUNC_2(DBT *VAR_0, DBT *VAR_1)
{
 size_t VAR_2;
 u_char *VAR_3, *VAR_4;

 if (VAR_0->size != VAR_1->size)
  FUNC_1("compare failed: key->data len %zu != data len %zu\n",
      VAR_0->size, VAR_1->size);

 VAR_2 = FUNC_0(VAR_0->size, VAR_1->size);
 for (VAR_3 = VAR_0->data, VAR_4 = VAR_1->data; VAR_2--;)
  if (*VAR_3++ != *VAR_4++) {
   FUNC_1("compare failed at offset %lu\n",
       (unsigned long)(VAR_3 - (u_char *)VAR_0->data));
   break;
  }
}
