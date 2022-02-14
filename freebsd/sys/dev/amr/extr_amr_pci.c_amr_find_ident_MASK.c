
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_ident {scalar_t__ vendor; scalar_t__ device; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct amr_ident* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static struct amr_ident *
FUNC_3(device_t VAR_5)
{
    struct amr_ident *VAR_6;
    int VAR_7;

    for (VAR_6 = VAR_4; VAR_6->vendor != 0; VAR_6++) {
 if ((FUNC_1(VAR_5) == VAR_6->vendor) &&
     (FUNC_0(VAR_5) == VAR_6->device)) {


     if (VAR_6->flags & VAR_1) {
  VAR_7 = FUNC_2(VAR_5, VAR_0, 2);
  if ((VAR_7 != VAR_2) && (VAR_7 != VAR_3))
      continue;
     }
     return (VAR_6);
 }
    }
    return (((void*)0));
}
