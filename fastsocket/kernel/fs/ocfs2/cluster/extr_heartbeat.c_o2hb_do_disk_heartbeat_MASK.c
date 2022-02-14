
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_steady_iterations; int hr_dev_name; int * hr_slots; int hr_generation; } ;
struct o2hb_bio_wait_ctxt {int wc_error; } ;
typedef int configured_nodes ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned long*,int,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct o2hb_region*) ;
 int FUNC_7 (struct o2hb_region*) ;
 int FUNC_8 (struct o2hb_region*,int *) ;
 int FUNC_9 (unsigned long*,int) ;
 int FUNC_10 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*) ;
 int FUNC_11 (struct o2hb_region*,int ) ;
 int FUNC_12 (struct o2hb_region*,int) ;
 int VAR_4 ;
 int FUNC_13 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*) ;
 int FUNC_14 (unsigned long*,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct o2hb_region *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 unsigned long VAR_10[FUNC_0(VAR_3)];
 struct o2hb_bio_wait_ctxt VAR_11;

 VAR_7 = FUNC_14(VAR_10,
           sizeof(VAR_10));
 if (VAR_7) {
  FUNC_5(VAR_7);
  return VAR_7;
 }

 VAR_8 = FUNC_9(VAR_10, VAR_3);
 if (VAR_8 >= VAR_3) {
  FUNC_4(VAR_2, "ocfs2_heartbeat: no configured nodes found!\n");
  return -VAR_0;
 }





 VAR_7 = FUNC_12(VAR_5, VAR_8 + 1);
 if (VAR_7 < 0) {
  FUNC_5(VAR_7);
  return VAR_7;
 }




 if (!FUNC_7(VAR_5))
  FUNC_4(VAR_1, "Device \"%s\": another node is heartbeating "
       "in our slot!\n", VAR_5->hr_dev_name);


 FUNC_11(VAR_5, VAR_5->hr_generation);



 VAR_7 = FUNC_10(VAR_5, &VAR_11);
 if (VAR_7 < 0) {
  FUNC_5(VAR_7);
  return VAR_7;
 }

 VAR_6 = -1;
 while((VAR_6 = FUNC_3(VAR_10, VAR_3, VAR_6 + 1)) < VAR_3) {

  VAR_9 |= FUNC_8(VAR_5, &VAR_5->hr_slots[VAR_6]);
 }






 FUNC_13(VAR_5, &VAR_11);
 if (VAR_11.wc_error) {



  FUNC_4(VAR_1, "Write error %d on device \"%s\"\n",
       VAR_11.wc_error, VAR_5->hr_dev_name);
  return VAR_11.wc_error;
 }

 FUNC_6(VAR_5);


 if (!VAR_9 && (FUNC_2(&VAR_5->hr_steady_iterations) != 0)) {
  if (FUNC_1(&VAR_5->hr_steady_iterations))
   FUNC_15(&VAR_4);
 }

 return 0;
}
