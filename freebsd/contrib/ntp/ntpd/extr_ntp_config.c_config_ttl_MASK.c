
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_5__ {scalar_t__ i; struct TYPE_5__* link; } ;
typedef TYPE_1__ int_node ;
struct TYPE_6__ {int ttl; } ;
typedef TYPE_2__ config_tree ;


 size_t FUNC_0 (scalar_t__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,size_t,scalar_t__) ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_3(
 config_tree *VAR_3
 )
{
 size_t VAR_4 = 0;
 int_node *VAR_5;





 VAR_5 = FUNC_1(VAR_3->ttl);
 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->link) {
  if (VAR_4 < FUNC_0(VAR_1))
   VAR_1[VAR_4++] = (u_char)VAR_5->i;
  else
   FUNC_2(VAR_0,
    "ttl: Number of TTL entries exceeds %zu. Ignoring TTL %d...",
    FUNC_0(VAR_1), VAR_5->i);
 }
 if (0 != VAR_4)
  VAR_2 = VAR_4 - 1;
}
