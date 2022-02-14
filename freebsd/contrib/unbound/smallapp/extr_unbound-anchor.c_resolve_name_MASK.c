
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dummy; } ;
struct ip_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ub_ctx* FUNC_0 (char const*,char const*,char const*,int,int) ;
 int FUNC_1 (int ) ;
 struct ip_list* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct ub_ctx*,char const*,int,int ,int ,struct ip_list**) ;
 int FUNC_5 (struct ub_ctx*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct ip_list*
FUNC_6(const char* VAR_4, int VAR_5, const char* VAR_6,
 const char* VAR_7, const char* VAR_8, int VAR_9, int VAR_10)
{
 struct ub_ctx* VAR_11;
 struct ip_list* VAR_12 = ((void*)0);

 if( (VAR_12=FUNC_2(VAR_4, VAR_5)) ) {
  return VAR_12;
 }


 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8,
         VAR_9, VAR_10);


 if(!VAR_10) {
  FUNC_4(VAR_11, VAR_4, VAR_5, VAR_1,
   VAR_0, &VAR_12);
 }


 if(!VAR_9) {
  FUNC_4(VAR_11, VAR_4, VAR_5, VAR_2,
   VAR_0, &VAR_12);
 }

 FUNC_5(VAR_11);
 if(!VAR_12) {
  if(VAR_3) FUNC_3("%s has no IP addresses I can use\n", VAR_4);
  FUNC_1(0);
 }
 return VAR_12;
}
