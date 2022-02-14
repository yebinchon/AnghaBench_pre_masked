
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {scalar_t__ internal; } ;
struct TYPE_6__ {int fp; scalar_t__ new_file; int save_file; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(const DB *VAR_3, u_int32_t VAR_4)
{
 HTAB *VAR_5;

 if (VAR_4 != 0) {
  VAR_2 = VAR_0;
  return (VAR_1);
 }

 if (!VAR_3)
  return (VAR_1);

 VAR_5 = (HTAB *)VAR_3->internal;
 if (!VAR_5->save_file)
  return (0);
 if (FUNC_0(VAR_5, 0, 1) || FUNC_2(VAR_5))
  return (VAR_1);
 if (VAR_5->fp != -1 && FUNC_1(VAR_5->fp) != 0)
  return (VAR_1);
 VAR_5->new_file = 0;
 return (0);
}
