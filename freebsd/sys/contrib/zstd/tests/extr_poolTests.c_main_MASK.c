
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (size_t,size_t) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (size_t,size_t) ;

int FUNC_6(int VAR_0, const char **VAR_1) {
  size_t VAR_2;
  (void)VAR_0;
  (void)VAR_1;

  if (FUNC_0(0, 1)) {
    FUNC_1("FAIL: should not create POOL with 0 threads\n");
    return 1;
  }

  for (VAR_2 = 1; VAR_2 <= 4; ++VAR_2) {
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 <= 2; ++VAR_3) {
      FUNC_1("queueSize==%u, numThreads=%u \n",
            (unsigned)VAR_3, (unsigned)VAR_2);
      if (FUNC_3(VAR_2, VAR_3)) {
        FUNC_1("FAIL: testOrder\n");
        return 1;
      }
      FUNC_1("SUCCESS: testOrder\n");
      if (FUNC_5(VAR_2, VAR_3)) {
        FUNC_1("FAIL: testWait\n");
        return 1;
      }
      FUNC_1("SUCCESS: testWait\n");
    }
  }

  if (FUNC_4()) {
      FUNC_1("FAIL: thread reduction not effective \n");
      return 1;
  } else {
      FUNC_1("SUCCESS: thread reduction effective \n");
  }

  if (FUNC_2()) {
      FUNC_1("FAIL: jobs in queue not completed on early end \n");
      return 1;
  } else {
      FUNC_1("SUCCESS: all jobs in queue completed on early end \n");
  }

  FUNC_1("PASS: all POOL tests\n");

  return 0;
}
