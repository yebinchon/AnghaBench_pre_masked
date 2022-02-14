
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_int32_t ;
struct ssh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (struct ssh*,char*) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (struct ssh*,int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_1, u_int32_t VAR_2, struct ssh *VAR_3)
{
 int VAR_4;

 FUNC_0("kex protocol error: type %d seq %u", VAR_1, VAR_2);
 if ((VAR_4 = FUNC_3(VAR_3, VAR_0)) != 0 ||
     (VAR_4 = FUNC_1(VAR_3, VAR_2)) != 0 ||
     (VAR_4 = FUNC_2(VAR_3)) != 0)
  return VAR_4;
 return 0;
}
