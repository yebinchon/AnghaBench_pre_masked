
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_6__ {scalar_t__ internal; } ;
struct TYPE_5__ {int flags; void* error; } ;
typedef TYPE_1__ HTAB ;
typedef int DBT ;
typedef TYPE_2__ DB ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(const DB *VAR_8, const DBT *VAR_9,
    u_int32_t VAR_10)
{
 HTAB *VAR_11;

 VAR_11 = (HTAB *)VAR_8->internal;
 if (VAR_10 && VAR_10 != VAR_6) {
  VAR_11->error = VAR_7 = VAR_0;
  return (VAR_2);
 }
 if ((VAR_11->flags & VAR_4) == VAR_5) {
  VAR_11->error = VAR_7 = VAR_1;
  return (VAR_2);
 }
 return (FUNC_0(VAR_11, VAR_3, (DBT *)VAR_9, ((void*)0)));
}
