
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xsd_sockmsg {scalar_t__ len; int type; } ;
struct TYPE_2__ {int request_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__*,void**) ;
 int FUNC_3 (struct xsd_sockmsg*,scalar_t__) ;

int
FUNC_4(struct xsd_sockmsg *VAR_1, void **VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->type;

 FUNC_0(&VAR_0.request_mutex);
 if ((VAR_4 = FUNC_3(VAR_1, sizeof(*VAR_1) + VAR_1->len)) == 0)
  VAR_4 = FUNC_2(&VAR_1->type, &VAR_1->len, VAR_2);
 FUNC_1(&VAR_0.request_mutex);

 return (VAR_4);
}
