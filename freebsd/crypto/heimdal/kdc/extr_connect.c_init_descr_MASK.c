
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct descr {int s; int __ss; struct sockaddr* sa; } ;


 int FUNC_0 (struct descr*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct descr *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->sa = (struct sockaddr *)&VAR_1->__ss;
    VAR_1->s = VAR_0;
}
