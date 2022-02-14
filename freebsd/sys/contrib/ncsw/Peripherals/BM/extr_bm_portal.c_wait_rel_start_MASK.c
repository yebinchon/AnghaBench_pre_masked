
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int t_Error ;
typedef int t_BmPortal ;
struct bm_rcr_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct bm_rcr_entry* FUNC_3 (int *) ;

__attribute__((used)) static __inline__ t_Error FUNC_4(t_BmPortal *VAR_2,
                                         struct bm_rcr_entry **VAR_3,
                                         uint32_t VAR_4)
{
    int VAR_5 = 100;

    FUNC_1(VAR_4);
    do {
        *VAR_3 = FUNC_3(VAR_2);
        FUNC_2(1);
    } while (!*VAR_3 && --VAR_5);

    if (!(*VAR_3))
        return FUNC_0(VAR_0);

    return VAR_1;
}
