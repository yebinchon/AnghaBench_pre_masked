
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmpdesc ;
struct TYPE_6__ {int td_iihash; } ;
typedef TYPE_1__ tdata_t ;
struct TYPE_7__ {int ii_name; } ;
typedef TYPE_2__ iidesc_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int (*) (void*,void*),void*) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(tdata_t *VAR_0, char const *VAR_1,
    int (*VAR_2)(void *, void *), void *VAR_3)
{
 iidesc_t VAR_4;
 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.ii_name = FUNC_3(VAR_1);
 (void) FUNC_2(VAR_0->td_iihash, &VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4.ii_name);
}
