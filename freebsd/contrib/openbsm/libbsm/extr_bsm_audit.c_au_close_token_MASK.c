
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {size_t len; int t_data; } ;
typedef TYPE_1__ token_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,size_t) ;

int
FUNC_2(token_t *VAR_3, u_char *VAR_4, size_t *VAR_5)
{

 if (VAR_3->len > *VAR_5) {
  FUNC_0(VAR_3);
  VAR_2 = VAR_1;
  return (VAR_0);
 }

 FUNC_1(VAR_4, VAR_3->t_data, VAR_3->len);
 *VAR_5 = VAR_3->len;
 FUNC_0(VAR_3);
 return (0);
}
