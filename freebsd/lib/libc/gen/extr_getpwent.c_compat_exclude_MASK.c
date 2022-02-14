
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* put ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_8__ {char* data; scalar_t__ size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, DB **VAR_4)
{
 DBT VAR_5, VAR_6;

 if (*VAR_4 == ((void*)0) &&
     (*VAR_4 = FUNC_0(((void*)0), VAR_1, 600, VAR_0, 0)) == ((void*)0))
  return (VAR_2);
 VAR_5.size = FUNC_1(VAR_3);
 VAR_5.data = (char *)VAR_3;
 VAR_6.size = 0;
 VAR_6.data = ((void*)0);

 if ((*VAR_4)->put(*VAR_4, &VAR_5, &VAR_6, 0) == -1)
  return (VAR_2);
 return (0);
}
