
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 int * FUNC_2 (struct sockaddr const*) ;

int
FUNC_3(const struct sockaddr *VAR_0)
{
 struct epoch_tracker VAR_1;
 int VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = (FUNC_2(VAR_0) != ((void*)0));
 FUNC_1(VAR_1);
 return (VAR_2);
}
