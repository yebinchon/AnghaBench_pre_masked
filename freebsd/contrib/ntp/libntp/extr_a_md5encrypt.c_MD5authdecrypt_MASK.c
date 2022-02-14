
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
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int *,size_t) ;
 size_t FUNC_1 (TYPE_1__*,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(
 int VAR_4,
 const u_char * VAR_5,
 size_t VAR_6,
 u_int32 * VAR_7,
 size_t VAR_8,
 size_t VAR_9
 )
{
 u_char VAR_10[VAR_0];
 rwbuffT VAR_11 = { VAR_10, sizeof(VAR_10) };
 robuffT VAR_12 = { VAR_5, VAR_6 };
 robuffT VAR_13 = { VAR_7, VAR_8 };
 size_t VAR_14 = 0;

 VAR_14 = FUNC_1(&VAR_11, VAR_4, &VAR_12, &VAR_13);


 if (VAR_14 > VAR_3)
  VAR_14 = VAR_3;
 if (VAR_9 != (size_t)VAR_14 + VAR_1) {
  FUNC_2(VAR_2,
      "MAC decrypt: MAC length error");
  return (0);
 }
 return !FUNC_0(VAR_10,
   (u_char *)VAR_7 + VAR_8 + VAR_1, VAR_14);
}
