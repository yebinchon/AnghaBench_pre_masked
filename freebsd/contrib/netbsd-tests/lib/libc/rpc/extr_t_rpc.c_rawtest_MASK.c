
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int SVCXPRT ;
typedef int CLIENT ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,int ,void*,int ,void*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int ,int ,int ,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_11(const char *VAR_9)
{
 CLIENT *VAR_10;
 SVCXPRT *VAR_11;
 int VAR_12, VAR_13;
 enum clnt_stat VAR_14;

 if (VAR_9)
  VAR_12 = FUNC_2(VAR_9);
 else
  VAR_12 = 0;

 VAR_11 = FUNC_9();
 if (VAR_11 == ((void*)0))
  FUNC_1(VAR_0, "Cannot create server %d", VAR_12);
 if (!FUNC_10(VAR_11, VAR_3, VAR_5, VAR_6, ((void*)0)))
  FUNC_1(VAR_0, "Cannot register server %d", VAR_12);

 VAR_10 = FUNC_5(VAR_3, VAR_5);
 if (VAR_10 == ((void*)0))
  FUNC_1(VAR_0, "%s",
      FUNC_6("clnt_raw_create"));
 VAR_14 = FUNC_3(VAR_10, VAR_2, (xdrproc_t)VAR_8, (void *)&VAR_12,
     (xdrproc_t)VAR_8, (void *)&VAR_13, VAR_7);
 if (VAR_14 != VAR_4)
  FUNC_1(VAR_0, "clnt_call: %s", FUNC_7(VAR_14));
 FUNC_0("Got %d\n", VAR_13);
 FUNC_4(VAR_10);
 FUNC_8(VAR_11);
 if (++VAR_12 != VAR_13)
  FUNC_1(VAR_0, "expected %d got %d", VAR_12, VAR_13);

 return VAR_1;
}
