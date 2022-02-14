
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_file {size_t data; size_t len; } ;


 int FUNC_0 (size_t,void*,size_t) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_0, size_t VAR_1, int VAR_2, struct policy_file *VAR_3)
{
 size_t VAR_4 = VAR_1 * VAR_2;

 FUNC_0(VAR_3->data, VAR_0, VAR_4);
 VAR_3->data += VAR_4;
 VAR_3->len -= VAR_4;

 return 0;
}
