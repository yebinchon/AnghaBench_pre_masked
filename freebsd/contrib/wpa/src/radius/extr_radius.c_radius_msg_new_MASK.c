
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int * buf; int hdr; } ;
struct radius_hdr {int dummy; } ;


 int VAR_0 ;
 struct radius_msg* FUNC_0 (int) ;
 int FUNC_1 (struct radius_msg*) ;
 scalar_t__ FUNC_2 (struct radius_msg*) ;
 int FUNC_3 (struct radius_msg*,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;

struct radius_msg * FUNC_6(u8 VAR_1, u8 VAR_2)
{
 struct radius_msg *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->buf = FUNC_4(VAR_0);
 if (VAR_3->buf == ((void*)0) || FUNC_2(VAR_3)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->hdr = FUNC_5(VAR_3->buf, sizeof(struct radius_hdr));

 FUNC_3(VAR_3, VAR_1, VAR_2);

 return VAR_3;
}
