
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct TYPE_2__* end; struct TYPE_2__* begin; } ;
struct sync_fixture {TYPE_1__* buffer; TYPE_1__ config; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 struct ptunit_result FUNC_1 () ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct sync_fixture *VAR_0)
{
 FUNC_0(VAR_0->buffer, 0xcd, sizeof(VAR_0->buffer));

 FUNC_0(&VAR_0->config, 0, sizeof(VAR_0->config));
 VAR_0->config.size = sizeof(VAR_0->config);
 VAR_0->config.begin = VAR_0->buffer;
 VAR_0->config.end = VAR_0->buffer + sizeof(VAR_0->buffer);

 return FUNC_1();
}
