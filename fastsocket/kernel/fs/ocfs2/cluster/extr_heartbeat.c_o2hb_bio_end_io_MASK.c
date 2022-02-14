
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_bio_wait_ctxt {int wc_error; } ;
struct bio {struct o2hb_bio_wait_ctxt* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct o2hb_bio_wait_ctxt*,int) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1,
      int VAR_2)
{
 struct o2hb_bio_wait_ctxt *VAR_3 = VAR_1->bi_private;

 if (VAR_2) {
  FUNC_1(VAR_0, "IO Error %d\n", VAR_2);
  VAR_3->wc_error = VAR_2;
 }

 FUNC_2(VAR_3, 1);
 FUNC_0(VAR_1);
}
