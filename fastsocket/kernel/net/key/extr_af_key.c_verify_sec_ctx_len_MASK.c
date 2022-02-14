
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_x_sec_ctx {int sadb_x_ctx_len; int sadb_x_sec_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sadb_x_sec_ctx*) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_2)
{
 struct sadb_x_sec_ctx *VAR_3 = (struct sadb_x_sec_ctx *)VAR_2;
 int VAR_4 = VAR_3->sadb_x_ctx_len;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->sadb_x_sec_len != VAR_4)
  return -VAR_0;

 return 0;
}
