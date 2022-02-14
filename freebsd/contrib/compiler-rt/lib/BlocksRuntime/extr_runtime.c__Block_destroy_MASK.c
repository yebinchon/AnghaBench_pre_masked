
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Block_layout {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct Block_layout*) ;

__attribute__((used)) static void FUNC_1(const void *VAR_1) {
    struct Block_layout *VAR_2;
    if (!VAR_1) return;
    VAR_2 = (struct Block_layout *)VAR_1;
    if (VAR_2->flags & VAR_0) {

        return;
    }
    FUNC_0(VAR_2);
}
