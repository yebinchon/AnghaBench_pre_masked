
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Block_byref_header {int dummy; } ;
struct Block_byref {int flags; struct Block_byref* forwarding; scalar_t__ size; int (* byref_keep ) (struct Block_byref*,struct Block_byref*) ;int byref_destroy; int * isa; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct Block_byref*,void**) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct Block_byref*,struct Block_byref*) ;

__attribute__((used)) static void FUNC_5(void *VAR_8, const void *VAR_9, const int VAR_10) {
    struct Block_byref **VAR_11 = (struct Block_byref **)VAR_8;
    struct Block_byref *VAR_12 = (struct Block_byref *)VAR_9;



    if (VAR_12->forwarding->flags & VAR_3) {
        ;
    }
    else if ((VAR_12->forwarding->flags & VAR_5) == 0) {


        bool VAR_13 = ((VAR_10 & (VAR_0|VAR_1)) == (VAR_0|VAR_1));

        struct Block_byref *VAR_14 = (struct Block_byref *)FUNC_0(VAR_12->size, 0, VAR_13);
        VAR_14->flags = VAR_12->flags | VAR_6;
        VAR_14->forwarding = VAR_14;
        VAR_12->forwarding = VAR_14;
        VAR_14->size = VAR_12->size;
        if (VAR_13) {
            VAR_14->isa = &VAR_7;
        }
        if (VAR_12->flags & VAR_2) {


            VAR_14->byref_keep = VAR_12->byref_keep;
            VAR_14->byref_destroy = VAR_12->byref_destroy;
            (*VAR_12->byref_keep)(VAR_14, VAR_12);
        }
        else {

            FUNC_2(
                (void *)&VAR_14->byref_keep,
                (void *)&VAR_12->byref_keep,
                VAR_12->size - sizeof(struct Block_byref_header));
        }
    }

    else if ((VAR_12->forwarding->flags & VAR_4) == VAR_4) {
        FUNC_3(&VAR_12->forwarding->flags);
    }

    FUNC_1(VAR_12->forwarding, (void **)VAR_11);
}
