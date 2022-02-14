
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct page** rq_pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct page* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct svc_rqst*) ;

__attribute__((used)) static int
FUNC_3(struct svc_rqst *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;


 if (FUNC_2(VAR_3))
  return 1;

 VAR_5 = VAR_4 / VAR_1 + 1;


 VAR_6 = 0;
 FUNC_0(VAR_5 > VAR_2);
 while (VAR_5) {
  struct page *VAR_7 = FUNC_1(VAR_0);
  if (!VAR_7)
   break;
  VAR_3->rq_pages[VAR_6++] = VAR_7;
  VAR_5--;
 }
 return VAR_5 == 0;
}
