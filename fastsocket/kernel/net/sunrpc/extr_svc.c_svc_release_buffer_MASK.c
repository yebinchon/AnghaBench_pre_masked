
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {scalar_t__* rq_pages; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct svc_rqst *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->rq_pages); VAR_1++)
  if (VAR_0->rq_pages[VAR_1])
   FUNC_1(VAR_0->rq_pages[VAR_1]);
}
