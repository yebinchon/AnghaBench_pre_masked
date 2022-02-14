
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sa_handle {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (struct sa_handle*,char const*,scalar_t__*) ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_3 ;
 char* FUNC_4 (int) ;
 long FUNC_5 (char const*,int *,int ) ;

__attribute__((used)) static uint16_t FUNC_6(struct sa_handle * VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 uint16_t VAR_7 = 0;

 if (!VAR_5)
  return 0;
 if (FUNC_3(VAR_5[0])) {
  if ((VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_7)) != 0) {
   FUNC_1(VAR_3, "Failed to find lid for \"%s\": %s\n",
    VAR_5, FUNC_4(VAR_6));
   FUNC_0(VAR_6);
  }
 } else {
  long VAR_8;
  VAR_2 = 0;
  VAR_8 = FUNC_5(VAR_5, ((void*)0), 0);
  if (VAR_2 != 0 || VAR_8 <= 0 || VAR_8 > VAR_1) {
   FUNC_1(VAR_3, "Invalid lid specified: \"%s\"\n", VAR_5);
   FUNC_0(VAR_0);
  }
  VAR_7 = (uint16_t)VAR_8;
 }

 return VAR_7;
}
