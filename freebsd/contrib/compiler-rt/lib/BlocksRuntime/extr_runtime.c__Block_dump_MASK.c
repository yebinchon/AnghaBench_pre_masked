
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Block_layout {int flags; struct Block_descriptor* descriptor; scalar_t__ invoke; int * isa; } ;
struct Block_descriptor {void* reserved; void* size; scalar_t__ dispose; scalar_t__ copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;

const char *FUNC_3(const void *VAR_11) {
    struct Block_layout *VAR_12 = (struct Block_layout *)VAR_11;
    static char VAR_13[512];
    char *VAR_14 = VAR_13;
    if (VAR_12 == ((void*)0)) {
        FUNC_2(VAR_14, "NULL passed to _Block_dump\n");
        return VAR_13;
    }
    if (! (VAR_12->flags & VAR_2)) {
        FUNC_1("Block compiled by obsolete compiler, please recompile source for this Block\n");
        FUNC_0(1);
    }
    VAR_14 += FUNC_2(VAR_14, "^%p (new layout) =\n", (void *)VAR_12);
    if (VAR_12->isa == ((void*)0)) {
        VAR_14 += FUNC_2(VAR_14, "isa: NULL\n");
    }
    else if (VAR_12->isa == VAR_10) {
        VAR_14 += FUNC_2(VAR_14, "isa: stack Block\n");
    }
    else if (VAR_12->isa == VAR_9) {
        VAR_14 += FUNC_2(VAR_14, "isa: malloc heap Block\n");
    }
    else if (VAR_12->isa == VAR_6) {
        VAR_14 += FUNC_2(VAR_14, "isa: GC heap Block\n");
    }
    else if (VAR_12->isa == VAR_8) {
        VAR_14 += FUNC_2(VAR_14, "isa: global Block\n");
    }
    else if (VAR_12->isa == VAR_7) {
        VAR_14 += FUNC_2(VAR_14, "isa: finalizing Block\n");
    }
    else {
        VAR_14 += FUNC_2(VAR_14, "isa?: %p\n", (void *)VAR_12->isa);
    }
    VAR_14 += FUNC_2(VAR_14, "flags:");
    if (VAR_12->flags & VAR_2) {
        VAR_14 += FUNC_2(VAR_14, " HASDESCRIPTOR");
    }
    if (VAR_12->flags & VAR_4) {
        VAR_14 += FUNC_2(VAR_14, " FREEME");
    }
    if (VAR_12->flags & VAR_3) {
        VAR_14 += FUNC_2(VAR_14, " ISGC");
    }
    if (VAR_12->flags & VAR_0) {
        VAR_14 += FUNC_2(VAR_14, " HASHELP");
    }
    if (VAR_12->flags & VAR_1) {
        VAR_14 += FUNC_2(VAR_14, " HASCTOR");
    }
    VAR_14 += FUNC_2(VAR_14, "\nrefcount: %u\n", VAR_12->flags & VAR_5);
    VAR_14 += FUNC_2(VAR_14, "invoke: %p\n", (void *)(uintptr_t)VAR_12->invoke);
    {
        struct Block_descriptor *VAR_15 = VAR_12->descriptor;
        VAR_14 += FUNC_2(VAR_14, "descriptor: %p\n", (void *)VAR_15);
        VAR_14 += FUNC_2(VAR_14, "descriptor->reserved: %lu\n", VAR_15->reserved);
        VAR_14 += FUNC_2(VAR_14, "descriptor->size: %lu\n", VAR_15->size);

        if (VAR_12->flags & VAR_0) {
            VAR_14 += FUNC_2(VAR_14, "descriptor->copy helper: %p\n", (void *)(uintptr_t)VAR_15->copy);
            VAR_14 += FUNC_2(VAR_14, "descriptor->dispose helper: %p\n", (void *)(uintptr_t)VAR_15->dispose);
        }
    }
    return VAR_13;
}
