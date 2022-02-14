
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int rcode; scalar_t__ secure; } ;


 scalar_t__ FUNC_0 (char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,int,int,int) ;
 struct ub_result* FUNC_1 (char const*,char const*,char const*,char const*,int,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (struct ub_result*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_6(const char* VAR_1, const char* VAR_2,
 const char* VAR_3, const char* VAR_4, const char* VAR_5,
 const char* VAR_6, const char* VAR_7, const char* VAR_8,
 const char* VAR_9, int VAR_10, int VAR_11, int VAR_12,
 int VAR_13, int VAR_14)
{
 struct ub_result* VAR_15;
 int VAR_16 = 0;
 int VAR_17;



 if(!FUNC_4(VAR_1, &VAR_16))
  return 0;



 VAR_15 = FUNC_1(VAR_1, VAR_7,
  VAR_8, VAR_9, VAR_10, VAR_11);
 VAR_17 = VAR_15->rcode;

 if (VAR_13 && VAR_7 && !VAR_15->secure) {
  if (VAR_0) FUNC_2("%s failed, retrying direct\n", VAR_7);
  FUNC_5(VAR_15);

  VAR_15 = FUNC_1(VAR_1, ((void*)0),
   VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_17 != 0 && VAR_15->rcode == 0) {
   VAR_7 = ((void*)0);
   VAR_17 = 0;
  }
 }


 if(VAR_15->secure && !VAR_12) {
  if(VAR_0) FUNC_2("success: the anchor is ok\n");
  FUNC_5(VAR_15);
  return VAR_16;
 }
 if(VAR_12 && VAR_0) FUNC_2("debug cert update forced\n");
 FUNC_5(VAR_15);


 if((VAR_17 == 0 &&
  FUNC_3(VAR_1)) || VAR_12) {
  if(FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_11, VAR_14))
   return 1;
  return VAR_16;
 }
 if(VAR_0) FUNC_2("fail: the anchor is NOT ok and could not be fixed\n");
 return VAR_16;
}
