
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibdiag_opt {int dummy; } ;
typedef int str_opts ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char* const*,char*,scalar_t__,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char const*,struct ibdiag_opt const*,struct ibdiag_opt**) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 char* VAR_2 ;
 struct ibdiag_opt** VAR_3 ;
 scalar_t__ FUNC_5 (int,char*) ;
 char const* VAR_4 ;
 char const** VAR_5 ;
 char* VAR_6 ;
 int FUNC_6 (int ) ;

int FUNC_7(int VAR_7, char *const VAR_8[], void *VAR_9,
   const char *VAR_10,
   const struct ibdiag_opt VAR_11[],
   int (*VAR_12) (void *VAR_13, int VAR_14,
            char *VAR_15),
   const char *VAR_16, const char *VAR_17[])
{
 char VAR_18[1024];
 const struct ibdiag_opt *VAR_19;

 VAR_6 = VAR_8[0];
 VAR_4 = VAR_16;
 VAR_5 = VAR_17;

 if (VAR_1)
  FUNC_0(VAR_1);

 VAR_1 = FUNC_3(VAR_10, VAR_11, VAR_3);
 if (!VAR_1)
  return -1;

 FUNC_6(VAR_0);

 FUNC_4(VAR_1, VAR_18, sizeof(VAR_18));

 while (1) {
  int VAR_20 = FUNC_1(VAR_7, VAR_8, VAR_18, VAR_1, ((void*)0));
  if (VAR_20 == -1)
   break;
  VAR_19 = VAR_3[VAR_20];
  if (!VAR_19)
   FUNC_2();
  if (VAR_12) {
   if (VAR_12(VAR_9, VAR_20, VAR_2) &&
       FUNC_5(VAR_20, VAR_2))
    FUNC_2();
  } else if (FUNC_5(VAR_20, VAR_2))
   FUNC_2();
 }

 return 0;
}
