
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,void*,size_t,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(
 void * VAR_3,
 size_t VAR_4
 )
{
 if (VAR_1 >= 3)
  FUNC_1("Sending %zu octets\n", VAR_4);

 if (FUNC_2(VAR_2, VAR_3, VAR_4, 0) == -1) {
  FUNC_3("write to %s failed", VAR_0);
  return -1;
 }

 if (VAR_1 >= 4) {
  FUNC_1("Request packet:\n");
  FUNC_0(VAR_3, VAR_4);
 }
 return 0;
}
