
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_1__ token_t ;
struct TYPE_7__ {scalar_t__ used; scalar_t__ len; int token_q; } ;
typedef TYPE_2__ au_record_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 TYPE_2__** VAR_5 ;
 int VAR_6 ;

int
FUNC_1(int VAR_7, token_t *VAR_8)
{
 au_record_t *VAR_9;

 if (VAR_8 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (-1);
 }


 VAR_9 = VAR_5[VAR_7];
 if ((VAR_9 == ((void*)0)) || (VAR_9->used == 0)) {
  VAR_4 = VAR_1;
  return (-1);
 }

 if (VAR_9->len + VAR_8->len + VAR_0 > VAR_3) {
  VAR_4 = VAR_2;
  return (-1);
 }






 FUNC_0(&VAR_9->token_q, VAR_8, VAR_6);

 VAR_9->len += VAR_8->len;


 VAR_8 = ((void*)0);
 return (0);
}
