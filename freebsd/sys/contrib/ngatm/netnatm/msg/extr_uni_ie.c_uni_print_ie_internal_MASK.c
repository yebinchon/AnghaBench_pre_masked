
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coding; } ;
union uni_ieall {TYPE_1__ h; } ;
struct unicx {int dummy; } ;
struct iedecl {int (* print ) (union uni_ieall const*,struct unicx*) ;} ;
typedef enum uni_ietype { ____Placeholder_uni_ietype } uni_ietype ;


 struct iedecl* FUNC_0 (int,int ) ;
 int FUNC_1 (union uni_ieall const*,struct unicx*) ;

void
FUNC_2(enum uni_ietype VAR_0, const union uni_ieall *VAR_1,
    struct unicx *VAR_2)
{
 const struct iedecl *VAR_3;

 if((VAR_3 = FUNC_0(VAR_0, VAR_1->h.coding)) != ((void*)0))
  (*VAR_3->print)(VAR_1, VAR_2);
}
