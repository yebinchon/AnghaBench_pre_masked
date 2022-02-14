
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_coremask {unsigned long long* coremask_bitmap; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct cvmx_coremask *VAR_1,
    int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_3 = VAR_2 % VAR_0;
    VAR_4 = VAR_2 / VAR_0;
    VAR_1->coremask_bitmap[VAR_4] |= (1ull << VAR_3);

    return 0;
}
