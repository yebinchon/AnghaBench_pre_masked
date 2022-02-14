
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct descr {int __ss; struct sockaddr* sa; } ;



__attribute__((used)) static void
FUNC_0 (struct descr *VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
 VAR_0[VAR_2].sa = (struct sockaddr *)&VAR_0[VAR_2].__ss;
}
