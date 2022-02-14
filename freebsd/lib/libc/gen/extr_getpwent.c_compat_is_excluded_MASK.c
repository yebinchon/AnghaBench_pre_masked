
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_7__ {char* data; int size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, DB *VAR_1)
{
 DBT VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
  return (0);
 VAR_2.size = FUNC_0(VAR_0);
 VAR_2.data = (char *)VAR_0;
 return (VAR_1->get(VAR_1, &VAR_2, &VAR_3, 0) == 0);
}
