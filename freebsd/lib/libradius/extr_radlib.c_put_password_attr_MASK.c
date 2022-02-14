
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__ pass_pos; scalar_t__ out_len; size_t pass_len; scalar_t__ pass; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rad_handle*) ;
 int FUNC_1 (struct rad_handle*,char*) ;
 int FUNC_2 (scalar_t__,void const*,size_t) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct rad_handle*,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(struct rad_handle *VAR_1, int VAR_2, const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (VAR_1->pass_pos != 0) {
  FUNC_1(VAR_1, "Multiple User-Password attributes specified");
  return -1;
 }
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 VAR_5 = VAR_4 == 0 ? 16 : (VAR_4+15) & ~0xf;
 VAR_6 = VAR_5 - VAR_4;





 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_2, VAR_1->pass, VAR_5);
 VAR_1->pass_pos = VAR_1->out_len - VAR_5;


 FUNC_2(VAR_1->pass, VAR_3, VAR_4);
 VAR_1->pass_len = VAR_4;
 FUNC_3(VAR_1->pass + VAR_4, 0, VAR_6);
 return 0;
}
