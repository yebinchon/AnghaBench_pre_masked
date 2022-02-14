
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct t4_mem_range {scalar_t__ data; scalar_t__ len; scalar_t__ addr; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int *,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__* FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct adapter*,int,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct adapter*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct adapter *VAR_3, int VAR_4, struct t4_mem_range *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 uint32_t *VAR_9;
 int VAR_10;
 uint8_t *VAR_11;

 VAR_10 = FUNC_5(VAR_3, VAR_5->addr, VAR_5->len);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_9 = FUNC_2(FUNC_3(VAR_5->len, VAR_0), VAR_1, VAR_2);
 VAR_6 = VAR_5->addr;
 VAR_7 = VAR_5->len;
 VAR_11 = (void *)VAR_5->data;

 while (VAR_7) {
  VAR_8 = FUNC_3(VAR_7, VAR_0);
  FUNC_4(VAR_3, 2, VAR_6, VAR_9, VAR_8);

  VAR_10 = FUNC_0(VAR_9, VAR_11, VAR_8);
  if (VAR_10 != 0)
   break;

  VAR_11 += VAR_8;
  VAR_7 -= VAR_8;
  VAR_6 += VAR_8;
 }

 FUNC_1(VAR_9, VAR_1);
 return (VAR_10);
}
