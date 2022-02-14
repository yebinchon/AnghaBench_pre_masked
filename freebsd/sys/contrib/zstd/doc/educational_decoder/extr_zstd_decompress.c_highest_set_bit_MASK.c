
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static inline int FUNC_0(const u64 VAR_0) {
    for (int VAR_1 = 63; VAR_1 >= 0; VAR_1--) {
        if (((u64)1 << VAR_1) <= VAR_0) {
            return VAR_1;
        }
    }
    return -1;
}
