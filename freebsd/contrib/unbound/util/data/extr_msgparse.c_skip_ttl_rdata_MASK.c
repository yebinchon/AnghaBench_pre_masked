
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ssize_t ;
typedef int sldns_buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(sldns_buffer* VAR_0)
{
 uint16_t VAR_1;
 if(FUNC_1(VAR_0) < 6)
  return 0;
 FUNC_2(VAR_0, 4);
 VAR_1 = FUNC_0(VAR_0);
 if(FUNC_1(VAR_0) < VAR_1)
  return 0;
 FUNC_2(VAR_0, (ssize_t)VAR_1);
 return 1;
}
