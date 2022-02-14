
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct t4_bootrom {int len; int pf_offset; int pfidx_addr; int data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct adapter*,int *,int,char*) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (struct adapter*,int *,int ,scalar_t__) ;
 int FUNC_8 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_9(struct adapter *VAR_8, struct t4_bootrom *VAR_9)
{
 int VAR_10;
 uint8_t *VAR_11 = ((void*)0);
 u_int VAR_12;

 if (VAR_9->len > 1024 * 1024)
  return (VAR_1);

 if (VAR_9->pf_offset == 0) {

  if (VAR_9->pfidx_addr > 7)
   return (VAR_2);
  VAR_12 = FUNC_0(FUNC_8(VAR_8, FUNC_1(VAR_9->pfidx_addr,
      VAR_0)));
 } else if (VAR_9->pf_offset == 1) {

  VAR_12 = FUNC_0(VAR_9->pfidx_addr);
 } else {
  return (VAR_2);
 }

 VAR_10 = FUNC_2(VAR_8, ((void*)0), VAR_7 | VAR_4, "t4ldbr");
 if (VAR_10)
  return (VAR_10);

 if (VAR_9->len == 0) {

  VAR_10 = -FUNC_7(VAR_8, ((void*)0), VAR_12, 0);
  goto done;
 }

 VAR_11 = FUNC_6(VAR_9->len, VAR_5, VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_3;
  goto done;
 }

 VAR_10 = FUNC_3(VAR_9->data, VAR_11, VAR_9->len);
 if (VAR_10 == 0)
  VAR_10 = -FUNC_7(VAR_8, VAR_11, VAR_12, VAR_9->len);

 FUNC_5(VAR_11, VAR_5);
done:
 FUNC_4(VAR_8, 0);
 return (VAR_10);
}
