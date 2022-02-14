
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct o2nm_node {int nd_ipv4_port; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct o2nm_node *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 char *VAR_6 = (char *)VAR_3;

 VAR_5 = FUNC_1(VAR_6, &VAR_6, 0);
 if (!VAR_6 || (*VAR_6 && (*VAR_6 != '\n')))
  return -VAR_0;

 if (VAR_5 == 0)
  return -VAR_0;
 if (VAR_5 >= (u16)-1)
  return -VAR_1;

 VAR_2->nd_ipv4_port = FUNC_0(VAR_5);

 return VAR_4;
}
