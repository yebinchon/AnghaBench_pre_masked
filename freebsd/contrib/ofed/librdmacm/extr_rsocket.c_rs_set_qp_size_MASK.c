
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rsocket {scalar_t__ sq_size; scalar_t__ rq_size; int cm_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rsocket *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_2->cm_id), VAR_0);

 if (VAR_2->sq_size > VAR_3)
  VAR_2->sq_size = VAR_3;
 else if (VAR_2->sq_size < VAR_1)
  VAR_2->sq_size = VAR_1;

 if (VAR_2->rq_size > VAR_3)
  VAR_2->rq_size = VAR_3;
 else if (VAR_2->rq_size < VAR_1)
  VAR_2->rq_size = VAR_1;
}
