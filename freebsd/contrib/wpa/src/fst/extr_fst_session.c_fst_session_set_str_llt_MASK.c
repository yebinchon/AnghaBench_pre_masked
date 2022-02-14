
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fst_session {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fst_session*,int ,char*,char const*,unsigned long) ;
 int FUNC_1 (struct fst_session*,int ) ;
 long FUNC_2 (char const*,char**,int ) ;

int FUNC_3(struct fst_session *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 long int VAR_5 = FUNC_2(VAR_3, &VAR_4, 0);

 if (*VAR_4 || VAR_5 < 0 || (unsigned long int) VAR_5 > VAR_0) {
  FUNC_0(VAR_2, VAR_1,
       "Cannot set llt %s: Invalid llt value (1..%u expected)",
       VAR_3, VAR_0);
  return -1;
 }
 FUNC_1(VAR_2, (u32) VAR_5);

 return 0;
}
