
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_queue_head {int dummy; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (struct bio_queue_head*) ;
 int FUNC_1 (struct bio_queue_head*,struct bio*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void
FUNC_3(struct bio_queue_head *VAR_0)
{
 struct bio *VAR_1;

 for (VAR_1 = FUNC_0(VAR_0); VAR_1 != ((void*)0); VAR_1 = FUNC_0(VAR_0)) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(VAR_1);
 }
}
