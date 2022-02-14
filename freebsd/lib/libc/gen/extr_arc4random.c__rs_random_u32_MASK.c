
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_4__ {int rs_have; } ;
struct TYPE_3__ {int * rs_buf; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline void
FUNC_4(uint32_t *VAR_2)
{
 u_char *VAR_3;

 FUNC_1(sizeof(*VAR_2));
 if (VAR_0->rs_have < sizeof(*VAR_2))
  FUNC_0(((void*)0), 0);
 VAR_3 = VAR_1->rs_buf + sizeof(VAR_1->rs_buf) - VAR_0->rs_have;
 FUNC_2(VAR_2, VAR_3, sizeof(*VAR_2));
 FUNC_3(VAR_3, 0, sizeof(*VAR_2));
 VAR_0->rs_have -= sizeof(*VAR_2);
}
