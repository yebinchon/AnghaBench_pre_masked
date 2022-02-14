
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int pid_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int ,void*,int ,void*,int ) ;
 int * FUNC_5 (char const*,int ,int ,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int VAR_8 ;
 int FUNC_9 () ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_15(const char *VAR_13, const char *VAR_14, const char *VAR_15, int VAR_16)
{
 CLIENT *VAR_17;
 int VAR_18, VAR_19;
 enum clnt_stat VAR_20;
 pid_t VAR_21;

 if (VAR_15)
  VAR_18 = FUNC_3(VAR_15);
 else
  VAR_18 = 0;




 if (!FUNC_12(VAR_9, VAR_4, VAR_7, VAR_14))
 {
  FUNC_2(VAR_1, "Cannot create server %d", VAR_18);
 }

 switch ((VAR_21 = FUNC_9())) {
 case 0:
  FUNC_0("Calling svc_run\n");
  FUNC_14();
  FUNC_1(VAR_1, "svc_run returned %d!", VAR_18);
 case -1:
  FUNC_1(VAR_1, "Fork failed (%s)", FUNC_11(VAR_8));
 default:
  FUNC_10(1);
  break;
 }

 FUNC_0("Initializing client\n");
 VAR_17 = FUNC_5(VAR_13, VAR_4, VAR_7, VAR_14);
 if (VAR_17 == ((void*)0))
  FUNC_1(VAR_1, "%s",
      FUNC_7("clnt_raw_create"));
 VAR_20 = FUNC_4(VAR_17, VAR_3, (xdrproc_t)VAR_11, (void *)&VAR_18,
     (xdrproc_t)VAR_11, (void *)&VAR_19, VAR_10);
 if (VAR_20 != VAR_5)
  FUNC_1(VAR_1, "clnt_call: %s", FUNC_8(VAR_20));
 FUNC_0("Got %d\n", VAR_19);
 if (++VAR_18 != VAR_19)
  FUNC_1(VAR_1, "expected %d got %d", VAR_18, VAR_19);
 VAR_20 = FUNC_4(VAR_17, VAR_0, (xdrproc_t)VAR_12, ((void*)0),
     (xdrproc_t)VAR_12, ((void*)0), VAR_10);
 if (VAR_20 != VAR_5)
  FUNC_1(VAR_1, "clnt_call: %s", FUNC_8(VAR_20));
 FUNC_6(VAR_17);

 return VAR_2;
}
