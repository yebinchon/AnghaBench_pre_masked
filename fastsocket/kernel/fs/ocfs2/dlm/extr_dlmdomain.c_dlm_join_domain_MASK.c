
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {unsigned int name; int dlm_worker; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int FUNC_3 (struct dlm_ctxt*) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int VAR_7 ;
 int FUNC_7 (struct dlm_ctxt*) ;
 int FUNC_8 (struct dlm_ctxt*) ;
 int FUNC_9 (struct dlm_ctxt*) ;
 int FUNC_10 (struct dlm_ctxt*) ;
 int FUNC_11 (struct dlm_ctxt*) ;
 int VAR_8 ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int ,char*,unsigned int,...) ;
 int FUNC_14 (int) ;
 unsigned int FUNC_15 (int ) ;
 int FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct dlm_ctxt *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_0(!VAR_9);

 FUNC_13(0, "Join domain %s\n", VAR_9->name);

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10) {
  FUNC_14(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 < 0) {
  FUNC_14(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10 < 0) {
  FUNC_14(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10 < 0) {
  FUNC_14(VAR_10);
  goto bail;
 }

 VAR_9->dlm_worker = FUNC_1("dlm_wq");
 if (!VAR_9->dlm_worker) {
  VAR_10 = -VAR_3;
  FUNC_14(VAR_10);
  goto bail;
 }

 do {
  VAR_10 = FUNC_10(VAR_9);





  if (VAR_10 == -VAR_2) {
   if (FUNC_17(VAR_6)) {
    VAR_10 = -VAR_4;
    goto bail;
   }

   if (VAR_12 >
       FUNC_15(90000)) {
    VAR_10 = -VAR_4;
    FUNC_13(VAR_5, "Timed out joining dlm domain "
         "%s after %u msecs\n", VAR_9->name,
         FUNC_12(VAR_12));
    goto bail;
   }
   VAR_11 = (unsigned int)(VAR_8 & 0x3);
   VAR_11 *= VAR_0;
   VAR_12 += VAR_11;
   FUNC_13(0, "backoff %d\n", VAR_11);
   FUNC_16(VAR_11);
  }
 } while (VAR_10 == -VAR_2);

 if (VAR_10 < 0) {
  FUNC_14(VAR_10);
  goto bail;
 }

 VAR_10 = 0;
bail:
 FUNC_18(&VAR_7);

 if (VAR_10) {
  FUNC_11(VAR_9);
  FUNC_5(VAR_9);
  FUNC_3(VAR_9);
  FUNC_2(VAR_9);
  FUNC_6(VAR_9);
 }

 return VAR_10;
}
