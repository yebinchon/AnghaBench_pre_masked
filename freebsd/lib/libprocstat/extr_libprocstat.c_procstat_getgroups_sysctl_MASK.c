
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t pid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int ,int *,size_t*,int *,int ) ;
 int FUNC_5 (char*,size_t) ;

__attribute__((used)) static gid_t *
FUNC_6(pid_t VAR_4, unsigned int *VAR_5)
{
 int VAR_6[4];
 size_t VAR_7;
 gid_t *VAR_8;

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_1;
 VAR_6[2] = VAR_2;
 VAR_6[3] = VAR_4;
 VAR_7 = (FUNC_3(VAR_3) + 1) * sizeof(gid_t);
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_5("malloc(%zu)", VAR_7);
  return (((void*)0));
 }
 if (FUNC_4(VAR_6, FUNC_2(VAR_6), VAR_8, &VAR_7, ((void*)0), 0) == -1) {
  FUNC_5("sysctl: kern.proc.groups: %d", VAR_4);
  FUNC_0(VAR_8);
  return (((void*)0));
 }
 *VAR_5 = VAR_7 / sizeof(gid_t);
 return (VAR_8);
}
