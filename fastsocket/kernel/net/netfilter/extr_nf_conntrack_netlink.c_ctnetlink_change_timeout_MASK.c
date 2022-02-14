
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct nf_conn {TYPE_1__ timeout; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int
FUNC_4(struct nf_conn *VAR_4, const struct nlattr * const VAR_5[])
{
 u_int32_t VAR_6 = FUNC_3(FUNC_2(VAR_5[VAR_0]));

 if (!FUNC_1(&VAR_4->timeout))
  return -VAR_1;

 VAR_4->timeout.expires = VAR_3 + VAR_6 * VAR_2;
 FUNC_0(&VAR_4->timeout);

 return 0;
}
