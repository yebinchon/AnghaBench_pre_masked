
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_file {size_t len; size_t data; } ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1, struct policy_file *VAR_2, size_t VAR_3)
{
 if (VAR_3 > VAR_2->len)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2->data, VAR_3);
 VAR_2->data += VAR_3;
 VAR_2->len -= VAR_3;
 return 0;
}
