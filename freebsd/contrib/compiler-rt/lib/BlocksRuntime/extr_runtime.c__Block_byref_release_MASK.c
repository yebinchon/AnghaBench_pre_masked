
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Block_layout {int dummy; } ;
struct Block_byref {int flags; int (* byref_destroy ) (struct Block_byref*) ;struct Block_byref* forwarding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Block_layout*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,void const*) ;
 int FUNC_3 (struct Block_byref*) ;

__attribute__((used)) static void FUNC_4(const void *VAR_3) {
    struct Block_byref *VAR_4 = (struct Block_byref *)VAR_3;
    int VAR_5;


    VAR_4 = VAR_4->forwarding;




    if ((VAR_4->flags & VAR_1) == 0) {
        return;
    }
    VAR_5 = VAR_4->flags & VAR_2;
    if (VAR_5 <= 0) {
        FUNC_2("_Block_byref_release: Block byref data structure at %p underflowed\n", VAR_3);
    }
    else if ((FUNC_1(&VAR_4->flags) & VAR_2) == 0) {

        if (VAR_4->flags & VAR_0) {

            (*VAR_4->byref_destroy)(VAR_4);
        }
        FUNC_0((struct Block_layout *)VAR_4);
    }
}
