
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg_info {scalar_t__ free; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfg_info*,int ) ;

__attribute__((used)) static void
FUNC_1(struct cfg_info *VAR_1) {
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->free)
  FUNC_0(VAR_1, VAR_0);
 return;
}
