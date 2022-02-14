
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_6__ {scalar_t__ internal; } ;
struct TYPE_5__ {int error; } ;
typedef TYPE_1__ HTAB ;
typedef int DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(const DB *VAR_4, const DBT *VAR_5, DBT *VAR_6, u_int32_t VAR_7)
{
 HTAB *VAR_8;

 VAR_8 = (HTAB *)VAR_4->internal;
 if (VAR_7) {
  VAR_8->error = VAR_3 = VAR_0;
  return (VAR_1);
 }
 return (FUNC_0(VAR_8, VAR_2, (DBT *)VAR_5, VAR_6));
}
