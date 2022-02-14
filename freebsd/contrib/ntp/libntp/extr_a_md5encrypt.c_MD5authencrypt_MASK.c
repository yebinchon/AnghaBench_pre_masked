
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const u_int32 ;
typedef int u_char ;
struct TYPE_6__ {int member_1; int * member_0; } ;
typedef TYPE_1__ rwbuffT ;
struct TYPE_7__ {size_t member_1; int const* member_0; } ;
typedef TYPE_2__ robuffT ;
typedef int digest ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (TYPE_1__*,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *,size_t) ;

size_t
FUNC_2(
 int VAR_3,
 const u_char * VAR_4,
 size_t VAR_5,
 u_int32 * VAR_6,
 size_t VAR_7
 )
{
 u_char VAR_8[VAR_0];
 rwbuffT VAR_9 = { VAR_8, sizeof(VAR_8) };
 robuffT VAR_10 = { VAR_4, VAR_5 };
 robuffT VAR_11 = { VAR_6, VAR_7 };
 size_t VAR_12 = 0;

 VAR_12 = FUNC_0(&VAR_9, VAR_3, &VAR_10, &VAR_11);

 if (VAR_12 > VAR_2)
  VAR_12 = VAR_2;
 FUNC_1((u_char *)VAR_6 + VAR_7 + VAR_1, VAR_8, VAR_12);
 return (VAR_12 + VAR_1);
}
