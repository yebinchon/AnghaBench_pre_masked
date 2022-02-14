
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udl_cmd_buf {scalar_t__ off; scalar_t__ buf; } ;


 int FUNC_0 (int*,scalar_t__,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct udl_cmd_buf *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = FUNC_1(VAR_1) << 8;



 FUNC_0(&VAR_2, VAR_0->buf + VAR_0->off, 3);

 VAR_0->off += 3;
}
