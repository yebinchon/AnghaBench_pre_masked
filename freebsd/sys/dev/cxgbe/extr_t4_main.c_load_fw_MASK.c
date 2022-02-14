
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct t4_data {int len; int data; } ;
struct adapter {int flags; int debug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct adapter*,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct adapter *VAR_8, struct t4_data *VAR_9)
{
 int VAR_10;
 uint8_t *VAR_11;

 VAR_10 = FUNC_0(VAR_8, ((void*)0), VAR_7 | VAR_4, "t4ldfw");
 if (VAR_10)
  return (VAR_10);







 if (VAR_8->flags & VAR_3 &&
     (VAR_8->debug_flags & VAR_0) == 0) {
  VAR_10 = VAR_1;
  goto done;
 }

 VAR_11 = FUNC_4(VAR_9->len, VAR_5, VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_2;
  goto done;
 }

 VAR_10 = FUNC_1(VAR_9->data, VAR_11, VAR_9->len);
 if (VAR_10 == 0)
  VAR_10 = -FUNC_5(VAR_8, VAR_11, VAR_9->len);

 FUNC_3(VAR_11, VAR_5);
done:
 FUNC_2(VAR_8, 0);
 return (VAR_10);
}
