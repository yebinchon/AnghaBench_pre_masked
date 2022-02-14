
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (int ,int ,char const*,int,int,int *) ;

__attribute__((used)) static int
FUNC_2(spa_t *VAR_2, const char *VAR_3, uint64_t *VAR_4, boolean_t VAR_5)
{
 int VAR_6 = FUNC_1(VAR_2->spa_meta_objset, VAR_0,
     VAR_3, sizeof (uint64_t), 1, VAR_4);

 if (VAR_6 != 0 && (VAR_6 != VAR_1 || VAR_5)) {
  FUNC_0(VAR_2, "couldn't get '%s' value in MOS directory "
      "[error=%d]", VAR_3, VAR_6);
 }

 return (VAR_6);
}
