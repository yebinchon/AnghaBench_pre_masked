
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uchar_t ;
typedef int objset_t ;
struct TYPE_3__ {int dde_phys; int dde_key; } ;
typedef TYPE_1__ ddt_entry_t ;
typedef int cbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int,int*,int ,int*,int*) ;
 int FUNC_3 (int *,int,int*,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_4(objset_t *VAR_1, uint64_t VAR_2, ddt_entry_t *VAR_3)
{
 uchar_t VAR_4[sizeof (VAR_3->dde_phys) + 1];
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, (uint64_t *)&VAR_3->dde_key,
     VAR_0, &VAR_5, &VAR_6);
 if (VAR_7)
  return (VAR_7);

 FUNC_0(VAR_5 == 1);
 FUNC_0(VAR_6 <= sizeof (VAR_4));

 VAR_7 = FUNC_3(VAR_1, VAR_2, (uint64_t *)&VAR_3->dde_key,
     VAR_0, 1, VAR_6, VAR_4);
 if (VAR_7)
  return (VAR_7);

 FUNC_1(VAR_4, VAR_3->dde_phys, VAR_6, sizeof (VAR_3->dde_phys));

 return (0);
}
