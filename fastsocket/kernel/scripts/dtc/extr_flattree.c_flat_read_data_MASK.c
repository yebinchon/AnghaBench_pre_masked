
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct inbuf {int dummy; } ;
struct data {int len; int val; } ;


 struct data FUNC_0 (struct data,int) ;
 struct data VAR_0 ;
 int FUNC_1 (struct inbuf*,int ,int) ;
 int FUNC_2 (struct inbuf*,int) ;

__attribute__((used)) static struct data FUNC_3(struct inbuf *VAR_1, int VAR_2)
{
 struct data VAR_3 = VAR_0;

 if (VAR_2 == 0)
  return VAR_0;

 VAR_3 = FUNC_0(VAR_3, VAR_2);
 VAR_3.len = VAR_2;

 FUNC_1(VAR_1, VAR_3.val, VAR_2);

 FUNC_2(VAR_1, sizeof(uint32_t));

 return VAR_3;
}
