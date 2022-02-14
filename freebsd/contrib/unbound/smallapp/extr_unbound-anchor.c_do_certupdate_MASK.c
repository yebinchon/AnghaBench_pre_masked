
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_list {int dummy; } ;
typedef int WSADATA ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct ip_list*,char const*,char const*) ;
 int FUNC_7 (struct ip_list*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char const*) ;
 struct ip_list* FUNC_10 (char const*,int,char const*,char const*,char const*,int,int) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (char const*,int *,int *,int,char const*) ;
 char* FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(const char* VAR_5, const char* VAR_6,
 const char* VAR_7, const char* VAR_8, const char* VAR_9,
 const char* VAR_10, const char* VAR_11, const char* VAR_12,
 const char* VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 FUNC_2(VAR_0)* VAR_2;
 BIO *VAR_17, *VAR_18;
 struct ip_list* VAR_19 = ((void*)0);


 VAR_2 = FUNC_9(VAR_6);


 VAR_19 = FUNC_10(VAR_7, VAR_16, VAR_11, VAR_12, VAR_13,
  VAR_14, VAR_15);
 VAR_17 = FUNC_6(VAR_19, VAR_8, VAR_7);
 VAR_18 = FUNC_6(VAR_19, VAR_9, VAR_7);


 FUNC_12(VAR_5, VAR_17, VAR_18, VAR_2, VAR_10);
 if(VAR_4) FUNC_8("success: the anchor has been updated "
   "using the cert\n");

 FUNC_0(VAR_17);
 FUNC_0(VAR_18);

 FUNC_11(VAR_2, VAR_1);

 FUNC_7(VAR_19);
 return 1;
}
