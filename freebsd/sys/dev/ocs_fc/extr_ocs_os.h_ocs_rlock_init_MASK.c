
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_3__ {int name; int lock; } ;
typedef TYPE_1__ ocs_rlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static inline void
FUNC_2(ocs_t *VAR_4, ocs_rlock_t *VAR_5, const char *VAR_6)
{
 FUNC_1(VAR_5->name, VAR_6, VAR_0);
 FUNC_0(&(VAR_5)->lock, VAR_5->name, ((void*)0), VAR_1 | VAR_3 | VAR_2);
}
