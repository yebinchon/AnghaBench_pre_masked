
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ixl_vf {int vf_flags; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static int
FUNC_4(struct ixl_vf *VAR_3, const uint8_t *VAR_4)
{

 if (FUNC_3(VAR_4) || FUNC_2(VAR_4))
  return (VAR_0);






 if (!(VAR_3->vf_flags & VAR_2) &&
     !(FUNC_0(VAR_4) || FUNC_1(VAR_4, VAR_3->mac)))
  return (VAR_1);

 return (0);
}
