
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rrset_ns ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ rr_ns ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static rr_ns *
FUNC_3(rrset_ns *VAR_1, const char *VAR_2) {
 rr_ns *VAR_3;

 for (VAR_3 = FUNC_0(*VAR_1); VAR_3 != ((void*)0); VAR_3 = FUNC_1(VAR_3, VAR_0))
  if (FUNC_2(VAR_3->name, VAR_2) == 1)
   return (VAR_3);
 return (((void*)0));
}
