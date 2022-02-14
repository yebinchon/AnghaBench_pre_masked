
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct t4_data {scalar_t__ len; int data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct adapter*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct adapter *VAR_5, struct t4_data *VAR_6)
{
 int VAR_7;
 uint8_t *VAR_8 = ((void*)0);

 VAR_7 = FUNC_0(VAR_5, ((void*)0), VAR_4 | VAR_1, "t4ldcf");
 if (VAR_7)
  return (VAR_7);

 if (VAR_6->len == 0) {

  VAR_7 = -FUNC_5(VAR_5, ((void*)0), 0);
  goto done;
 }

 VAR_8 = FUNC_4(VAR_6->len, VAR_2, VAR_3);
 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto done;
 }

 VAR_7 = FUNC_1(VAR_6->data, VAR_8, VAR_6->len);
 if (VAR_7 == 0)
  VAR_7 = -FUNC_5(VAR_5, VAR_8, VAR_6->len);

 FUNC_3(VAR_8, VAR_2);
done:
 FUNC_2(VAR_5, 0);
 return (VAR_7);
}
