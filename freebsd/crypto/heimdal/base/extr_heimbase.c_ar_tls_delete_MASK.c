
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_tls {scalar_t__ head; } ;


 int FUNC_0 (struct ar_tls*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct ar_tls *VAR_1 = VAR_0;
    if (VAR_1->head)
 FUNC_1(VAR_1->head);
    FUNC_0(VAR_1);
}
