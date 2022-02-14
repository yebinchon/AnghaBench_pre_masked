
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const http_ctx ;
typedef int CURL ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 char const* VAR_21 ;
 char const* VAR_22 ;
 char const* VAR_23 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,...) ;
 int FUNC_2 (int ,char*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static CURL * FUNC_3(struct http_ctx *VAR_24, const char *VAR_25,
         const char *VAR_26, const char *VAR_27,
         const char *VAR_28, const char *VAR_29,
         const char *VAR_30)
{
 CURL *VAR_31;



 const char *VAR_32 = "";


 FUNC_2(VAR_19, "Start HTTP client: address=%s ca_fname=%s "
     "username=%s%s", VAR_25, VAR_26, VAR_27, VAR_32);

 VAR_31 = FUNC_0();
 if (VAR_31 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_31, VAR_14, VAR_25);
 FUNC_1(VAR_31, VAR_7, 1L);
 if (VAR_26) {
  FUNC_1(VAR_31, VAR_1, VAR_26);
  FUNC_1(VAR_31, VAR_12, 1L);
 } else {
  FUNC_1(VAR_31, VAR_12, 0L);
 }
 if (VAR_29 && VAR_30) {
  FUNC_1(VAR_31, VAR_8, VAR_29);
  FUNC_1(VAR_31, VAR_9, VAR_30);
 }


 FUNC_1(VAR_31, VAR_2, 1L);
 FUNC_1(VAR_31, VAR_4, VAR_21);
 FUNC_1(VAR_31, VAR_3, VAR_24);
 FUNC_1(VAR_31, VAR_18, VAR_23);
 FUNC_1(VAR_31, VAR_17, VAR_24);
 FUNC_1(VAR_31, VAR_16, 1L);
 if (VAR_27) {
  FUNC_1(VAR_31, VAR_5, VAR_0);
  FUNC_1(VAR_31, VAR_15, VAR_27);
  FUNC_1(VAR_31, VAR_6, VAR_28);
 }

 return VAR_31;
}
