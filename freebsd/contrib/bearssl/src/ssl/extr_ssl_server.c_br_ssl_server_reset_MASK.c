
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ reneg; } ;
struct TYPE_7__ {TYPE_3__ eng; } ;
typedef TYPE_1__ br_ssl_server_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_4(br_ssl_server_context *VAR_3)
{
 FUNC_3(&VAR_3->eng, ((void*)0), 0, 0);
 if (!FUNC_1(&VAR_3->eng)) {
  return 0;
 }
 VAR_3->eng.reneg = 0;
 FUNC_0(&VAR_3->eng,
  VAR_1, VAR_2);
 return FUNC_2(&VAR_3->eng) == VAR_0;
}
