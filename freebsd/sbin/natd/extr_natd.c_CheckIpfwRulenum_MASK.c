
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int default_rule ;


 int FUNC_0 (char*,unsigned int*,size_t*,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(unsigned int VAR_0)
{
 unsigned int VAR_1;
 size_t VAR_2 = sizeof(VAR_1);

 if (FUNC_0("net.inet.ip.fw.default_rule", &VAR_1, &VAR_2,
  ((void*)0), 0) == -1) {
  FUNC_1("Failed to get the default ipfw rule number, using "
       "default historical value 65535.  The reason was");
  VAR_1 = 65535;
 }
 if (VAR_0 >= VAR_1) {
  return -1;
 }

 return 0;
}
