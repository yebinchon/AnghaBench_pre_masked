
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_5 (struct adapter*,int,int,int*,int,int) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int*,int,int,int) ;
 int** VAR_1 ;
 int** VAR_2 ;
 int FUNC_8 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_9(struct cudbg_init *VAR_3,
   struct cudbg_buffer *VAR_4,
   struct cudbg_error *VAR_5)
{
 struct cudbg_buffer VAR_6;
 struct adapter *VAR_7 = VAR_3->adap;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 *VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 if (FUNC_2(VAR_7))
  VAR_14 = 6;
 else if (FUNC_3(VAR_7))
  VAR_14 = 7;

 VAR_6.size = VAR_14 * sizeof(u32);

 VAR_13 = FUNC_1(VAR_4, VAR_6.size, &VAR_6);
 if (VAR_13)
  goto err;

 VAR_12 = (u32 *)VAR_6.data;


 VAR_10 = VAR_2[3][2] + 0xa;
 VAR_11 = 1;

 FUNC_7(VAR_7, VAR_12, VAR_11, VAR_10, 1);

 VAR_12++;


 VAR_10 = VAR_2[3][2] + 0xb;
 VAR_11 = 1;

 FUNC_7(VAR_7, VAR_12, VAR_11, VAR_10, 1);

 VAR_12++;


 VAR_10 = VAR_2[9][2] + 0xf;
 VAR_11 = 1;

 FUNC_7(VAR_7, VAR_12, VAR_11, VAR_10, 1);

 VAR_12++;


 VAR_10 = VAR_2[8][2] + 3;
 VAR_11 = 1;

 FUNC_7(VAR_7, VAR_12, VAR_11, VAR_10, 1);

 VAR_12++;


 VAR_8 = VAR_1[0][0];
 VAR_9 = VAR_1[0][1];
 VAR_10 = VAR_1[0][2] + 2;
 VAR_11 = 1;

 FUNC_5(VAR_7, VAR_8, VAR_9, VAR_12, VAR_11,
    VAR_10);

 VAR_12++;

 if (FUNC_3(VAR_7)) {

  VAR_8 = VAR_1[0][0];
  VAR_9 = VAR_1[0][1];
  VAR_10 = VAR_1[0][2] + 3;
  VAR_11 = 1;

  FUNC_5(VAR_7, VAR_8, VAR_9, VAR_12,
     VAR_11, VAR_10);

  VAR_12++;
 }


 *VAR_12 = FUNC_6(VAR_7, VAR_0);

 VAR_13 = FUNC_8(&VAR_6, VAR_4);
 if (VAR_13)
  goto err1;

 VAR_13 = FUNC_0(&VAR_6, VAR_4);

err1:
 FUNC_4(&VAR_6, VAR_4);
err:
 return VAR_13;
}
