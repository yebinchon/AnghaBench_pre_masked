
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_3__ {int size; struct TYPE_3__* end; struct TYPE_3__* begin; } ;
struct fetch_fixture {TYPE_1__ config; int encoder; TYPE_1__* buffer; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct fetch_fixture *VAR_1)
{
 FUNC_0(VAR_1->buffer, VAR_0, sizeof(VAR_1->buffer));

 FUNC_0(&VAR_1->config, 0, sizeof(VAR_1->config));
 VAR_1->config.size = sizeof(VAR_1->config);
 VAR_1->config.begin = VAR_1->buffer;
 VAR_1->config.end = VAR_1->buffer + sizeof(VAR_1->buffer);

 FUNC_1(&VAR_1->encoder, &VAR_1->config);

 return FUNC_2();
}
