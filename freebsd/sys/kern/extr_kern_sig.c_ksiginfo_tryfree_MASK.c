
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ksi_flags; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static __inline int
FUNC_1(ksiginfo_t *VAR_2)
{
 if (!(VAR_2->ksi_flags & VAR_0)) {
  FUNC_0(VAR_1, VAR_2);
  return (1);
 }
 return (0);
}
