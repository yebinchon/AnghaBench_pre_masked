
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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(const DB *VAR_9, DBT *VAR_10, const DBT *VAR_11, u_int32_t VAR_12)
{
 HTAB *VAR_13;

 VAR_13 = (HTAB *)VAR_9->internal;
 if (VAR_12 && VAR_12 != VAR_7) {
  VAR_13->error = VAR_8 = VAR_0;
  return (VAR_2);
 }
 if ((VAR_13->flags & VAR_5) == VAR_6) {
  VAR_13->error = VAR_8 = VAR_1;
  return (VAR_2);
 }
 return (FUNC_0(VAR_13, VAR_12 == VAR_7 ?
     VAR_4 : VAR_3, (DBT *)VAR_10, (DBT *)VAR_11));
}
