
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {scalar_t__ fd; int flags; scalar_t__ last_ttl; int sin; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int ,struct interface*) ;
 int FUNC_2 (struct interface*,int *) ;

__attribute__((used)) static int
FUNC_3(
 struct interface * VAR_2
 )
{
 return (VAR_2->fd != VAR_1);

}
